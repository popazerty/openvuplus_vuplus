SUMMARY = "Enigma2 Task for Vuplus"
SECTION = "vuplus/base"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/GPL-2.0;md5=801f80980d171dd6425610833a22dbe6"
INC_PR = "r0"

inherit task

PACKAGE_ARCH = "${MACHINE_ARCH}"

DEPENDS_${PN} += " \
	enigma2-plugin-extensions-openwebif \
	enigma2-plugin-extensions-remotestreamconvert \
	enigma2-plugin-extensions-addstreamurl \
"

RDEPENDS_${PN} += " \
	enigma2 \
	enigma2-defaultservices \
	enigma2-streamproxy \
	tuxbox-tuxtxt-32bpp \
	showiframe \
	enigma2-meta \
	enigma2-plugins-meta \
	enigma2-skins-meta \
	enigma2-plugin-extensions-mediascanner \
	enigma2-plugin-systemplugins-factorytest \
	enigma2-plugin-systemplugins-crashreport \
	enigma2-plugin-extensions-remotestreamconvert \
	enigma2-plugin-systemplugins-zappingmodeselection \
 	enigma2-plugin-extensions-addstreamurl \
	enigma2-plugin-extensions-remotestreamconvert \
"

# vuplus-blindscan-utils \
# enigma2-plugin-systemplugins-3gmodemmanager \
# enigma2-plugin-extensions-streamtv \
# enigma2-plugin-extensions-dlnaserver \
# enigma2-plugin-extensions-dlnabrowser \

RRECOMMENDS_${PN} += " \
  aio-grab \
  python-crypt \
  python-netserver \
  python-twisted-core \
  python-twisted-protocols \
  python-twisted-web \
  ${@base_contains("MACHINE_FEATURES", "wifi", "task-vuplus-wlan", "", d)} \
  enigma2-plugin-extensions-mediaplayer \
  enigma2-plugin-extensions-pictureplayer \
  enigma2-plugin-systemplugins-skinselector \
  enigma2-plugin-systemplugins-ui3dsetup \
  enigma2-plugin-systemplugins-uipositionsetup \
  enigma2-plugin-systemplugins-hdmicec \
"
#  ${@base_contains("MACHINE_FEATURES", "wifi", "enigma2-plugin-systemplugins-wirelessaccesspoint", "", d)} \
#"

RDEPENDS_${PN} += " \
  ${@base_contains("VUPLUS_FEATURES", "fan_simple", "enigma2-plugin-systemplugins-fancontrol","", d)} \
  ${@base_contains("VUPLUS_FEATURES", "fan_manual", "enigma2-plugin-systemplugins-manualfancontrol", "", d)} \
  ${@base_contains("VUPLUS_FEATURES", "rc_code", "enigma2-plugin-systemplugins-remotecontrolcode", "", d)} \
  ${@base_contains("VUPLUS_FEATURES", "led", "enigma2-plugin-systemplugins-ledbrightnesssetup", "", d)} \
  ${@base_contains("VUPLUS_FEATURES", "webif", "enigma2-plugin-extensions-openwebif", "", d)} \
"

#  ${@base_contains("VUPLUS_FEATURES", "blindscan", "enigma2-plugin-systemplugins-blindscan", "", d)} \
#  ${@base_contains("VUPLUS_FEATURES", "fpgaupgrade", "enigma2-plugin-systemplugins-fpgaupgrade", "", d)} \
#  ${@base_contains("VUPLUS_FEATURES", "firmwareupgrade", "enigma2-plugin-systemplugins-firmwareupgrade", "", d)} \
#  ${@base_contains("VUPLUS_FEATURES", "hbbtv", "enigma2-plugin-systemplugins-hbbtv", "", d)} \

PACKAGE_ARCH = "${MACHINE_ARCH}"