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
///   File: ReadListener.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_READLISTENER_HPP
#define _COKEX_CHEYENNE_SERPENT_READLISTENER_HPP

#include "coke/lang/Object.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase ReadListenerTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: ReadListenerT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = ReadListenerTImplements>

class _EXPORT_CLASS ReadListenerT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef ReadListenerT<> ReadListener;
typedef ReadListener::Implements ReadListenerImplements;

typedef ReadListenerImplements NullReadListenerTImplements;
typedef ::coke::lang::Object NullReadListenerTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullReadListenerT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullReadListenerTImplements, class TExtends = NullReadListenerTExtends>

class _EXPORT_CLASS NullReadListenerT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullReadListenerT(const NullReadListenerT& copy): Extends(copy) {
    }
    NullReadListenerT() {
    }
    virtual ~NullReadListenerT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullReadListenerT<> NullReadListener;
typedef NullReadListener::Implements NullReadListenerImplements;
typedef NullReadListener::Extends NullReadListenerExtends;

} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_READLISTENER_HPP 
