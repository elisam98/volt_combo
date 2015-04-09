#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2364, 2413, 2413, 2408, 2392},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1063, 281, 100, 83, 78},
				{1170, 287, 102, 85, 80},
				{1164, 287, 102, 85, 80},
				{1292, 295, 107, 89, 82},
				{1294, 294, 113, 92, 84},
				{1215, 305, 121, 96, 88},
				{1208, 296, 129, 101, 91},
				{1210, 287, 128, 108, 96},
				{1230, 289, 107, 89, 84},
				{1279, 290, 104, 87, 82},
				{1350, 292, 106, 90, 85},
				{1453, 296, 111, 94, 89},
				{1693, 292, 117, 96, 89},
				{2035, 297, 119, 93, 87},
				{2469, 319, 114, 91, 85},
				{3083, 362, 108, 88, 83},
				{4430, 430, 114, 92, 85},
				{6596, 501, 135, 104, 98},
				{9201, 546, 158, 117, 106},
				{11599, 573, 174, 125, 108},
				{12892, 578, 177, 128, 112},
				{14370, 569, 176, 133, 116},
				{15589, 593, 186, 141, 122},
				{17203, 637, 203, 151, 128},
				{19972, 693, 225, 163, 134},
				{23623, 792, 250, 176, 141},
				{28362, 1062, 276, 191, 150},
				{33242, 1565, 313, 208, 160},
				{37173, 2365, 383, 241, 180},
				{38085, 4057, 621, 344, 232},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4331, 4329, 4324, 4319, 4311},
				{4234, 4256, 4258, 4256, 4250},
				{4166, 4199, 4203, 4201, 4196},
				{4103, 4144, 4150, 4148, 4143},
				{4053, 4089, 4098, 4097, 4093},
				{3971, 4036, 4051, 4050, 4046},
				{3921, 3980, 4004, 4005, 4002},
				{3875, 3934, 3957, 3961, 3959},
				{3837, 3896, 3903, 3905, 3905},
				{3809, 3861, 3868, 3869, 3869},
				{3786, 3829, 3840, 3842, 3842},
				{3763, 3801, 3817, 3818, 3818},
				{3738, 3773, 3797, 3796, 3794},
				{3712, 3751, 3776, 3771, 3762},
				{3684, 3735, 3748, 3741, 3730},
				{3645, 3719, 3707, 3699, 3688},
				{3585, 3697, 3687, 3679, 3668},
				{3518, 3669, 3669, 3658, 3646},
				{3454, 3620, 3628, 3620, 3607},
				{3409, 3570, 3587, 3580, 3566},
				{3385, 3540, 3562, 3554, 3541},
				{3359, 3509, 3532, 3525, 3514},
				{3333, 3475, 3501, 3495, 3486},
				{3304, 3441, 3470, 3465, 3458},
				{3278, 3406, 3439, 3436, 3430},
				{3255, 3370, 3407, 3405, 3399},
				{3234, 3332, 3371, 3369, 3363},
				{3205, 3288, 3324, 3321, 3316},
				{3159, 3235, 3262, 3256, 3251},
				{3085, 3155, 3169, 3159, 3158},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data LGE_BL_59UH_2440mAh_LG_Chem_data = {
	.fcc				= 2440,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut			= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 156
};
