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
#   File: libcheyenne.pro
#
# Author: $author$
#   Date: 10/25/2018
#
# QtCreator .pro file for cheyenne library libcheyenne
########################################################################
include(../../../../../build/QtCreator/cheyenne.pri)
include(../../../../QtCreator/cheyenne.pri)
include(../../cheyenne.pri)
include(../../../../QtCreator/lib/libcheyenne/libcheyenne.pri)

TARGET = $${libcheyenne_TARGET}
TEMPLATE = $${libcheyenne_TEMPLATE}
CONFIG += $${libcheyenne_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libcheyenne_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libcheyenne_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libcheyenne_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${libcheyenne_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libcheyenne_HEADERS} \

# SOURCES
#
SOURCES += \
$${libcheyenne_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################


