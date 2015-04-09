$(call inherit-product, device/lge/x5/full_x5.mk)

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Enhanced NFC
$(call inherit-product, vendor/cm/config/nfc_enhanced.mk)

# Boot animation
TARGET_SCREEN_WIDTH := 540
TARGET_SCREEN_HEIGHT := 960

# Release name
PRODUCT_RELEASE_NAME := LG LS740
PRODUCT_NAME := cm_x5

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=x5_spr_us \
    BUILD_FINGERPRINT=lge/x5_spr_us/x5:4.4.2/KOT49I.A1404447153/1404447153:user/release-keys \
    PRIVATE_BUILD_DESC="x5_spr_us-user 4.4.2 KOT49I.A1404447153 1404447153 release-keys"
