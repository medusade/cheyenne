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
# build QtCreator .pri file for cheyenne
########################################################################

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

# build nadir INCLUDEPATH
#
build_nadir_INCLUDEPATH += \

# build nadir DEFINES
#
build_nadir_DEFINES += \

# build nadir LIBS
#
build_nadir_LIBS += \

########################################################################
# coral
#
# pkg-config --cflags --libs coral
#

# build coral INCLUDEPATH
#
build_coral_INCLUDEPATH += \

# build coral DEFINES
#
build_coral_DEFINES += \

# build coral LIBS
#
build_coral_LIBS += \

########################################################################
# medusa
#
# pkg-config --cflags --libs medusa
#

# build medusa INCLUDEPATH
#
build_medusa_INCLUDEPATH += \

# build medusa DEFINES
#
build_medusa_DEFINES += \

# build medusa LIBS
#
build_medusa_LIBS += \

########################################################################
# coke
#
# pkg-config --cflags --libs coke
#

# build coke INCLUDEPATH
#
build_coke_INCLUDEPATH += \

# build coke DEFINES
#
build_coke_DEFINES += \

# build coke LIBS
#
build_coke_LIBS += \

########################################################################
# cheyenne

# build cheyenne INCLUDEPATH
#
build_cheyenne_INCLUDEPATH += \
$${build_coke_INCLUDEPATH} \
$${build_medusa_INCLUDEPATH} \
$${build_coral_INCLUDEPATH} \
$${build_nadir_INCLUDEPATH} \


# build cheyenne DEFINES
#
build_cheyenne_DEFINES += \
$${build_nadir_DEFINES} \
$${build_coral_DEFINES} \
$${build_medusa_DEFINES} \
$${build_coke_DEFINES} \


# build cheyenne LIBS
#
build_cheyenne_LIBS += \
$${build_coke_LIBS} \
$${build_medusa_LIBS} \
$${build_coral_LIBS} \
$${build_nadir_LIBS} \


