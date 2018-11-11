########################################################################
# Copyright (c) 1988-2018 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: cheyenne.pri
#
# Author: $author$
#   Date: 10/25/2018
#
# Os QtCreator .pri file for cheyenne
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
CHEYENNE_OS = macosx
} else {
CHEYENNE_OS = linux
}

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# nadir
NADIR_THIRDPARTY_PKG_MAKE_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_MAKE_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PKG_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_BLD = $${NADIR_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PKG_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PRJ_BLD = $${OTHER_BLD}/$${NADIR_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_BLD}/lib
#NADIR_LIB = $${NADIR_PKG_BLD}/lib
NADIR_LIB = $${NADIR_PRJ_BLD}/lib
#NADIR_LIB = $${CHEYENNE_LIB}

# nadir LIBS
#
nadir_LIBS += \
-L$${NADIR_LIB}/lib$${NADIR_NAME} \
-l$${NADIR_NAME} \

########################################################################
# coral
CORAL_THIRDPARTY_PKG_MAKE_BLD = $${CORAL_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
CORAL_THIRDPARTY_PRJ_MAKE_BLD = $${CORAL_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
CORAL_THIRDPARTY_PKG_BLD = $${CORAL_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
CORAL_THIRDPARTY_PRJ_BLD = $${CORAL_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
CORAL_PKG_BLD = $${OTHER_BLD}/$${CORAL_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
CORAL_PRJ_BLD = $${OTHER_BLD}/$${CORAL_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
#CORAL_LIB = $${CORAL_THIRDPARTY_PKG_MAKE_BLD}/lib
#CORAL_LIB = $${CORAL_THIRDPARTY_PRJ_MAKE_BLD}/lib
#CORAL_LIB = $${CORAL_THIRDPARTY_PKG_BLD}/lib
#CORAL_LIB = $${CORAL_THIRDPARTY_PRJ_BLD}/lib
#CORAL_LIB = $${CORAL_PKG_BLD}/lib
CORAL_LIB = $${CORAL_PRJ_BLD}/lib
#CORAL_LIB = $${CHEYENNE_LIB}

# coral LIBS
#
coral_LIBS += \
-L$${CORAL_LIB}/lib$${CORAL_NAME} \
-l$${CORAL_NAME} \

########################################################################
# medusa
MEDUSA_THIRDPARTY_PKG_MAKE_BLD = $${MEDUSA_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
MEDUSA_THIRDPARTY_PRJ_MAKE_BLD = $${MEDUSA_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
MEDUSA_THIRDPARTY_PKG_BLD = $${MEDUSA_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_THIRDPARTY_PRJ_BLD = $${MEDUSA_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_PKG_BLD = $${OTHER_BLD}/$${MEDUSA_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
MEDUSA_PRJ_BLD = $${OTHER_BLD}/$${MEDUSA_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PKG_MAKE_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PRJ_MAKE_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PKG_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_THIRDPARTY_PRJ_BLD}/lib
#MEDUSA_LIB = $${MEDUSA_PKG_BLD}/lib
MEDUSA_LIB = $${MEDUSA_PRJ_BLD}/lib
#MEDUSA_LIB = $${CHEYENNE_LIB}

# medusa LIBS
#
medusa_LIBS += \
-L$${MEDUSA_LIB}/lib$${MEDUSA_NAME} \
-l$${MEDUSA_NAME} \

########################################################################
# coke
COKE_THIRDPARTY_PKG_MAKE_BLD = $${COKE_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
COKE_THIRDPARTY_PRJ_MAKE_BLD = $${COKE_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/$${BUILD_CONFIG}
COKE_THIRDPARTY_PKG_BLD = $${COKE_THIRDPARTY_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
COKE_THIRDPARTY_PRJ_BLD = $${COKE_THIRDPARTY_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
COKE_PKG_BLD = $${OTHER_BLD}/$${COKE_PKG}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
COKE_PRJ_BLD = $${OTHER_BLD}/$${COKE_PRJ}/build/$${CHEYENNE_OS}/QtCreator/$${BUILD_CONFIG}
#COKE_LIB = $${COKE_THIRDPARTY_PKG_MAKE_BLD}/lib
#COKE_LIB = $${COKE_THIRDPARTY_PRJ_MAKE_BLD}/lib
#COKE_LIB = $${COKE_THIRDPARTY_PKG_BLD}/lib
#COKE_LIB = $${COKE_THIRDPARTY_PRJ_BLD}/lib
#COKE_LIB = $${COKE_PKG_BLD}/lib
COKE_LIB = $${COKE_PRJ_BLD}/lib
#COKE_LIB = $${CHEYENNE_LIB}

# coke LIBS
#
coke_LIBS += \
-L$${COKE_LIB}/lib$${COKE_NAME} \
-l$${COKE_NAME} \

########################################################################
# cheyenne

# cheyenne INCLUDEPATH
#
cheyenne_INCLUDEPATH += \

# cheyenne DEFINES
#
cheyenne_DEFINES += \

# cheyenne LIBS
#
cheyenne_LIBS += \
$${coke_LIBS} \
$${medusa_LIBS} \
$${coral_LIBS} \
$${nadir_LIBS} \
$${build_cheyenne_LIBS} \
-lpthread \
-ldl \

contains(CHEYENNE_OS,linux) {
cheyenne_LIBS += \
-lrt
} else {
}

