DESCRIPTION = "U-boot for the RZ/V2H based board"

UBOOT_URL = "git://github.com/OneKiwiEmbedded/renesas-rz-uboot.git"
BRANCH = "sdk-v5.20-v2021.10/rzv2h"

SRC_URI = "${UBOOT_URL};branch=${BRANCH}"
SRCREV = "${AUTOREV}"

PV = "v2021.10+git${SRCPV}"
