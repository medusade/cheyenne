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
#   File: libcheyenne.pri
#
# Author: $author$
#   Date: 10/25/2018
#
# QtCreator .pri file for cheyenne library libcheyenne
########################################################################

########################################################################
# libcheyenne

# libcheyenne TARGET
#
libcheyenne_TARGET = cheyenne
libcheyenne_TEMPLATE = lib
libcheyenne_CONFIG += staticlib

# libcheyenne INCLUDEPATH
#
libcheyenne_INCLUDEPATH += \
$${cheyenne_INCLUDEPATH} \

# libcheyenne DEFINES
#
libcheyenne_DEFINES += \
$${cheyenne_DEFINES} \

########################################################################
# libcheyenne OBJECTIVE_HEADERS
#
#libcheyenne_OBJECTIVE_HEADERS += \
#$${CHEYENNE_SRC}/cheyenne/base/Base.hh \

# libcheyenne OBJECTIVE_SOURCES
#
#libcheyenne_OBJECTIVE_SOURCES += \
#$${CHEYENNE_SRC}/cheyenne/base/Base.mm \

########################################################################
# libcheyenne HEADERS
#
libcheyenne_HEADERS += \
$${CHEYENNE_SRC}/cheyenne/base/Base.hpp \

# libcheyenne SOURCES
#
libcheyenne_SOURCES += \
$${CHEYENNE_SRC}/cheyenne/base/Base.cpp \

########################################################################
# libcheyenne HEADERS
#
libcheyenne_HEADERS += \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentResponse.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentRequestAttributeListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentRequestListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentRequest.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentContextAttributeListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentContextListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentContext.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/Serpent.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/AsyncListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/AsyncContext.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SingleThreadModel.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/RequestDispatcher.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/FilterConfig.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/FilterChain.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/Filter.hpp \

# libcheyenne SOURCES
#
libcheyenne_SOURCES += \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentResponse.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentRequestAttributeListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentRequestListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentRequest.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentContextAttributeListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentContextListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SerpentContext.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/Serpent.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/AsyncListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/AsyncContext.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/SingleThreadModel.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/RequestDispatcher.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/FilterConfig.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/FilterChain.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/Filter.cpp \

########################################################################
# libcheyenne HEADERS
#
libcheyenne_HEADERS += \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentResponseWrapper.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentResponse.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentRequestWrapper.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentRequest.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionActivationListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionAttributeListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionBindingListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionListener.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionContext.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionBindingEvent.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionEvent.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSession.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpent.hpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpUtils.hpp \

# libcheyenne SOURCES
#
libcheyenne_SOURCES += \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentResponseWrapper.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentResponse.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentRequestWrapper.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpentRequest.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionActivationListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionAttributeListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionBindingListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionListener.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionContext.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionBindingEvent.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSessionEvent.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSession.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpSerpent.cpp \
$${CHEYENNE_SRC}/cheyenne/serpent/http/HttpUtils.cpp \

########################################################################
