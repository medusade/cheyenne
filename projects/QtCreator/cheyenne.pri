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
# QtCreator .pri file for cheyenne
########################################################################

OTHER_PKG = ../../../../../../..
OTHER_PRJ = ../../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/src/$${THIRDPARTY_NAME}

########################################################################
# nadir
NADIR_VERSION_MAJOR = 0
NADIR_VERSION_MINOR = 0
NADIR_VERSION_RELEASE = 0
NADIR_VERSION = $${NADIR_VERSION_MAJOR}.$${NADIR_VERSION_MINOR}.$${NADIR_VERSION_RELEASE}
NADIR_NAME = nadir
NADIR_GROUP = $${NADIR_NAME}
NADIR_SOURCE = src
NADIR_DIR = $${NADIR_GROUP}/$${NADIR_NAME}-$${NADIR_VERSION}
NADIR_PKG_DIR = $${NADIR_NAME}
NADIR_HOME_BUILD = $${HOME}/build/$${NADIR_NAME}
NADIR_HOME_BUILD_INCLUDE = $${NADIR_HOME_BUILD}/include
NADIR_HOME_BUILD_LIB = $${NADIR_HOME_BUILD}/lib
NADIR_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${NADIR_DIR}
NADIR_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${NADIR_DIR}
NADIR_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${NADIR_PKG_DIR}
NADIR_THIRDPARTY_SRC_GROUP = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_NAME = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${NADIR_THIRDPARTY_SRC_GROUP}/$${NADIR_THIRDPARTY_SRC_NAME} 
NADIR_PKG = $${OTHER_PKG}/$${NADIR_PKG_DIR}
NADIR_PRJ = $${OTHER_PRJ}/$${NADIR_PKG_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_SRC_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_PKG}/$${NADIR_SOURCE}
#NADIR_SRC = $${NADIR_THIRDPARTY_PRJ}/$${NADIR_SOURCE}
#NADIR_SRC = $${NADIR_PKG}/$${NADIR_SOURCE}
NADIR_SRC = $${NADIR_PRJ}/$${NADIR_SOURCE}

# nadir INCLUDEPATH
#
#nadir_INCLUDEPATH += \
#$${NADIR_HOME_BUILD_INCLUDE} \

nadir_INCLUDEPATH += \
$${NADIR_SRC} \

# nadir DEFINES
#
nadir_DEFINES += \

########################################################################
# coral
CORAL_VERSION_MAJOR = 0
CORAL_VERSION_MINOR = 0
CORAL_VERSION_RELEASE = 0
CORAL_VERSION = $${CORAL_VERSION_MAJOR}.$${CORAL_VERSION_MINOR}.$${CORAL_VERSION_RELEASE}
CORAL_NAME = coral
CORAL_GROUP = $${CORAL_NAME}
CORAL_SOURCE = src
CORAL_DIR = $${CORAL_GROUP}/$${CORAL_NAME}-$${CORAL_VERSION}
CORAL_PKG_DIR = $${CORAL_NAME}
CORAL_HOME_BUILD = $${HOME}/build/$${CORAL_NAME}
CORAL_HOME_BUILD_INCLUDE = $${CORAL_HOME_BUILD}/include
CORAL_HOME_BUILD_LIB = $${CORAL_HOME_BUILD}/lib
CORAL_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${CORAL_DIR}
CORAL_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${CORAL_DIR}
CORAL_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${CORAL_PKG_DIR}
CORAL_THIRDPARTY_SRC_GROUP = $${CORAL_NAME}
CORAL_THIRDPARTY_SRC_NAME = $${CORAL_NAME}
CORAL_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${CORAL_THIRDPARTY_SRC_GROUP}/$${CORAL_THIRDPARTY_SRC_NAME} 
CORAL_PKG = $${OTHER_PKG}/$${CORAL_PKG_DIR}
CORAL_PRJ = $${OTHER_PRJ}/$${CORAL_PKG_DIR}
#CORAL_SRC = $${CORAL_THIRDPARTY_SRC_DIR}
#CORAL_SRC = $${CORAL_THIRDPARTY_PKG}/$${CORAL_SOURCE}
#CORAL_SRC = $${CORAL_THIRDPARTY_PRJ}/$${CORAL_SOURCE}
#CORAL_SRC = $${CORAL_PKG}/$${CORAL_SOURCE}
CORAL_SRC = $${CORAL_PRJ}/$${CORAL_SOURCE}

# coral INCLUDEPATH
#
#coral_INCLUDEPATH += \
#$${CORAL_HOME_BUILD_INCLUDE} \

coral_INCLUDEPATH += \
$${CORAL_SRC} \

# coral DEFINES
#
coral_DEFINES += \

########################################################################
# medusa
MEDUSA_VERSION_MAJOR = 0
MEDUSA_VERSION_MINOR = 0
MEDUSA_VERSION_RELEASE = 0
MEDUSA_VERSION = $${MEDUSA_VERSION_MAJOR}.$${MEDUSA_VERSION_MINOR}.$${MEDUSA_VERSION_RELEASE}
MEDUSA_NAME = medusa
MEDUSA_GROUP = $${MEDUSA_NAME}
MEDUSA_SOURCE = src
MEDUSA_DIR = $${MEDUSA_GROUP}/$${MEDUSA_NAME}-$${MEDUSA_VERSION}
MEDUSA_PKG_DIR = $${MEDUSA_NAME}
MEDUSA_HOME_BUILD = $${HOME}/build/$${MEDUSA_NAME}
MEDUSA_HOME_BUILD_INCLUDE = $${MEDUSA_HOME_BUILD}/include
MEDUSA_HOME_BUILD_LIB = $${MEDUSA_HOME_BUILD}/lib
MEDUSA_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${MEDUSA_DIR}
MEDUSA_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${MEDUSA_DIR}
MEDUSA_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${MEDUSA_PKG_DIR}
MEDUSA_THIRDPARTY_SRC_GROUP = $${MEDUSA_NAME}
MEDUSA_THIRDPARTY_SRC_NAME = $${MEDUSA_NAME}
MEDUSA_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${MEDUSA_THIRDPARTY_SRC_GROUP}/$${MEDUSA_THIRDPARTY_SRC_NAME} 
MEDUSA_PKG = $${OTHER_PKG}/$${MEDUSA_PKG_DIR}
MEDUSA_PRJ = $${OTHER_PRJ}/$${MEDUSA_PKG_DIR}
#MEDUSA_SRC = $${MEDUSA_THIRDPARTY_SRC_DIR}
#MEDUSA_SRC = $${MEDUSA_THIRDPARTY_PKG}/$${MEDUSA_SOURCE}
#MEDUSA_SRC = $${MEDUSA_THIRDPARTY_PRJ}/$${MEDUSA_SOURCE}
#MEDUSA_SRC = $${MEDUSA_PKG}/$${MEDUSA_SOURCE}
MEDUSA_SRC = $${MEDUSA_PRJ}/$${MEDUSA_SOURCE}

# medusa INCLUDEPATH
#
#medusa_INCLUDEPATH += \
#$${MEDUSA_HOME_BUILD_INCLUDE} \

medusa_INCLUDEPATH += \
$${MEDUSA_SRC} \

# medusa DEFINES
#
medusa_DEFINES += \

########################################################################
# coke
COKE_VERSION_MAJOR = 0
COKE_VERSION_MINOR = 0
COKE_VERSION_RELEASE = 0
COKE_VERSION = $${COKE_VERSION_MAJOR}.$${COKE_VERSION_MINOR}.$${COKE_VERSION_RELEASE}
COKE_NAME = coke
COKE_GROUP = $${COKE_NAME}
COKE_SOURCE = src
COKE_DIR = $${COKE_GROUP}/$${COKE_NAME}-$${COKE_VERSION}
COKE_PKG_DIR = $${COKE_NAME}
COKE_HOME_BUILD = $${HOME}/build/$${COKE_NAME}
COKE_HOME_BUILD_INCLUDE = $${COKE_HOME_BUILD}/include
COKE_HOME_BUILD_LIB = $${COKE_HOME_BUILD}/lib
COKE_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${COKE_DIR}
COKE_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${COKE_DIR}
COKE_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${COKE_PKG_DIR}
COKE_THIRDPARTY_SRC_GROUP = $${COKE_NAME}
COKE_THIRDPARTY_SRC_NAME = $${COKE_NAME}
COKE_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${COKE_THIRDPARTY_SRC_GROUP}/$${COKE_THIRDPARTY_SRC_NAME} 
COKE_PKG = $${OTHER_PKG}/$${COKE_PKG_DIR}
COKE_PRJ = $${OTHER_PRJ}/$${COKE_PKG_DIR}
#COKE_SRC = $${COKE_THIRDPARTY_SRC_DIR}
#COKE_SRC = $${COKE_THIRDPARTY_PKG}/$${COKE_SOURCE}
#COKE_SRC = $${COKE_THIRDPARTY_PRJ}/$${COKE_SOURCE}
#COKE_SRC = $${COKE_PKG}/$${COKE_SOURCE}
COKE_SRC = $${COKE_PRJ}/$${COKE_SOURCE}

# coke INCLUDEPATH
#
#coke_INCLUDEPATH += \
#$${COKE_HOME_BUILD_INCLUDE} \

coke_INCLUDEPATH += \
$${COKE_SRC} \

# coke DEFINES
#
coke_DEFINES += \



########################################################################
# cheyenne
FRAMEWORK_NAME = cheyenne
FRAMEWORK_SOURCE = src

CHEYENNE_PKG = ../../../../..
CHEYENNE_BLD = ../..

CHEYENNE_PRJ = $${CHEYENNE_PKG}
CHEYENNE_BIN = $${CHEYENNE_BLD}/bin
CHEYENNE_LIB = $${CHEYENNE_BLD}/lib
CHEYENNE_SRC = $${CHEYENNE_PKG}/$${FRAMEWORK_SOURCE}

# cheyenne BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
cheyenne_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
cheyenne_DEFINES += RELEASE_BUILD
}

# cheyenne INCLUDEPATH
#
cheyenne_INCLUDEPATH += \
$${CHEYENNE_SRC} \
$${coke_INCLUDEPATH} \
$${medusa_INCLUDEPATH} \
$${coral_INCLUDEPATH} \
$${nadir_INCLUDEPATH} \
$${build_cheyenne_INCLUDEPATH} \

# cheyenne DEFINES
#
cheyenne_DEFINES += \
$${nadir_DEFINES} \
$${coral_DEFINES} \
$${medusa_DEFINES} \
$${coke_DEFINES} \
$${build_cheyenne_DEFINES} \

# cheyenne LIBS
#
cheyenne_LIBS += \
-L$${CHEYENNE_LIB}/lib$${FRAMEWORK_NAME} \
-l$${FRAMEWORK_NAME} \


