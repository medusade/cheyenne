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
///   File: WebConnection.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_WEBCONNECTION_HPP
#define _COKEX_CHEYENNE_SERPENT_WEBCONNECTION_HPP

#include "coke/lang/Object.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {

typedef ClassImplements WebConnectionTImplements;
typedef ClassExtends WebConnectionTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: WebConnectionT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = WebConnectionTImplements, class TExtends = WebConnectionTExtends>

class _EXPORT_CLASS WebConnectionT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    WebConnectionT(const WebConnectionT& copy): Extends(copy) {
    }
    WebConnectionT() {
    }
    virtual ~WebConnectionT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef WebConnectionT<> WebConnection;
typedef WebConnection::Implements WebConnectionImplements;
typedef WebConnection::Extends WebConnectionExtends;

} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_WEBCONNECTION_HPP 
