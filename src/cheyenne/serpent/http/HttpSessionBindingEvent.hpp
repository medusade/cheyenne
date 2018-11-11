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
///   File: HttpSessionBindingEvent.hpp
///
/// Author: $author
///   Date: 2/2/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_HTTP_HTTPSESSIONBINDINGEVENT_HPP
#define _COKEX_CHEYENNE_SERPENT_HTTP_HTTPSESSIONBINDINGEVENT_HPP

#include "coke/lang/Object.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {
namespace http {

typedef ::coke::lang::ImplementBase HttpSessionBindingEventTImplements;
typedef ::coke::lang::Object HttpSessionBindingEventTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: HttpSessionBindingEventT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = HttpSessionBindingEventTImplements, class TExtends = HttpSessionBindingEventTExtends>

class _EXPORT_CLASS HttpSessionBindingEventT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    HttpSessionBindingEventT(const HttpSessionBindingEventT& copy): Extends(copy) {
    }
    HttpSessionBindingEventT() {
    }
    virtual ~HttpSessionBindingEventT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef HttpSessionBindingEventT<> HttpSessionBindingEvent;
typedef HttpSessionBindingEvent::Implements HttpSessionBindingEventImplements;
typedef HttpSessionBindingEvent::Extends HttpSessionBindingEventExtends;

} // namespace http
} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_HTTP_HTTPSESSIONBINDINGEVENT_HPP 