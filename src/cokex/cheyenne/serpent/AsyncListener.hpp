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
///   File: AsyncListener.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_ASYNCLISTENER_HPP
#define _COKEX_CHEYENNE_SERPENT_ASYNCLISTENER_HPP

#include "cokex/cheyenne/Base.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase AsyncListenerTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: AsyncListenerT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = AsyncListenerTImplements>

class _EXPORT_CLASS AsyncListenerT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef AsyncListenerT<> AsyncListener;
typedef AsyncListener::Implements AsyncListenerImplements;

typedef AsyncListenerImplements NullAsyncListenerTImplements;
typedef ::coke::lang::Object NullAsyncListenerTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullAsyncListenerT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullAsyncListenerTImplements, class TExtends = NullAsyncListenerTExtends>

class _EXPORT_CLASS NullAsyncListenerT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullAsyncListenerT(const NullAsyncListenerT& copy): Extends(copy) {
    }
    NullAsyncListenerT() {
    }
    virtual ~NullAsyncListenerT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullAsyncListenerT<> NullAsyncListener;
typedef NullAsyncListener::Implements NullAsyncListenerImplements;
typedef NullAsyncListener::Extends NullAsyncListenerExtends;

} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_ASYNCLISTENER_HPP 
