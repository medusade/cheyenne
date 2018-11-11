///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: SessionTrackingMode.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_SESSIONTRACKINGMODE_HPP
#define _CHEYENNE_SERPENT_SESSIONTRACKINGMODE_HPP

#include "coke/lang/Object.hpp"


namespace cheyenne {
namespace serpent {

typedef ClassImplements SessionTrackingModeTImplements;
typedef ::coke::lang::Object SessionTrackingModeTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: SessionTrackingModeT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = SessionTrackingModeTImplements, class TExtends = SessionTrackingModeTExtends>

class _EXPORT_CLASS SessionTrackingModeT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    SessionTrackingModeT(const SessionTrackingModeT& copy): Extends(copy) {
    }
    SessionTrackingModeT() {
    }
    virtual ~SessionTrackingModeT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef SessionTrackingModeT<> SessionTrackingMode;
typedef SessionTrackingMode::Implements SessionTrackingModeImplements;
typedef SessionTrackingMode::Extends SessionTrackingModeExtends;

} // namespace serpent
} // namespace cheyenne


#endif // _CHEYENNE_SERPENT_SESSIONTRACKINGMODE_HPP 
