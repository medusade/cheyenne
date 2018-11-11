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
#   File: cheyenne.pro
#
# Author: $author$
#   Date: 10/25/2018
#
# QtCreator .pro file for cheyenne executable cheyenne
########################################################################
include(../../../../../build/QtCreator/cheyenne.pri)
include(../../../../QtCreator/cheyenne.pri)
include(../../cheyenne.pri)
include(../../../../QtCreator/app/cheyenne/cheyenne.pri)

TARGET = $${cheyenne_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${cheyenne_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${cheyenne_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${cheyenne_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${cheyenne_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${cheyenne_exe_HEADERS} \

# SOURCES
#
SOURCES += \
$${cheyenne_exe_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${cheyenne_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${cheyenne_exe_LIBS} \
$${FRAMEWORKS} \


