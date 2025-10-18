require u-boot-common_${PV}.inc
require u-boot.inc

DEPENDS += "bc-native dtc-native"

UBOOT_URL = "git://github.com/OneKiwiEmbedded/renesas-rz-uboot.git"
BRANCH = "bsp-3.0.6-update4-v2021.10/rz"

SRC_URI = "${UBOOT_URL};branch=${BRANCH}"
SRCREV = "${AUTOREV}"
PV = "v2021.10+git${SRCPV}"
