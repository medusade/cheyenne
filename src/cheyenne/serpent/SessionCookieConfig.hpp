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
///   File: SessionCookieConfig.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_SESSIONCOOKIECONFIG_HPP
#define _CHEYENNE_SERPENT_SESSIONCOOKIECONFIG_HPP

#include "coke/lang/Object.hpp"


namespace cheyenne {
namespace serpent {

typedef ClassImplements SessionCookieConfigTImplements;
typedef ClassExtends SessionCookieConfigTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: SessionCookieConfigT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = SessionCookieConfigTImplements, class TExtends = SessionCookieConfigTExtends>

class _EXPORT_CLASS SessionCookieConfigT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    SessionCookieConfigT(const SessionCookieConfigT& copy): Extends(copy) {
    }
    SessionCookieConfigT() {
    }
    virtual ~SessionCookieConfigT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef SessionCookieConfigT<> SessionCookieConfig;
typedef SessionCookieConfig::Implements SessionCookieConfigImplements;
typedef SessionCookieConfig::Extends SessionCookieConfigExtends;

} // namespace serpent
} // namespace cheyenne


#endif // _CHEYENNE_SERPENT_SESSIONCOOKIECONFIG_HPP 
