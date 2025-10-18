FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

LIC_FILES_CHKSUM = " \
	file://docs/license.rst;md5=b2c740efedc159745b9b31f88ff03dde \
"

URL = "git://github.com/OneKiwiEmbedded/renesas-rz-atf.git"
SRCREV = "${AUTOREV}"
BRANCH = "sdk-v5.20-2.7.0/v2h_1.0.4"

PV = "v2.7+git${SRCPV}"

S = "${WORKDIR}/git"

SRC_URI = "${URL};protocol=https;branch=${BRANCH}"