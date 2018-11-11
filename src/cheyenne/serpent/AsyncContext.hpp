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
///   File: AsyncContext.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_ASYNCCONTEXT_HPP
#define _CHEYENNE_SERPENT_ASYNCCONTEXT_HPP

#include "coke/lang/Object.hpp"

namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase AsyncContextTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: AsyncContextT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = AsyncContextTImplements>

class _EXPORT_CLASS AsyncContextT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef AsyncContextT<> AsyncContext;
typedef AsyncContext::Implements AsyncContextImplements;

typedef AsyncContextImplements NullAsyncContextTImplements;
typedef ::coke::lang::Object NullAsyncContextTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullAsyncContextT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullAsyncContextTImplements, class TExtends = NullAsyncContextTExtends>

class _EXPORT_CLASS NullAsyncContextT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullAsyncContextT(const NullAsyncContextT& copy): Extends(copy) {
    }
    NullAsyncContextT() {
    }
    virtual ~NullAsyncContextT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullAsyncContextT<> NullAsyncContext;
typedef NullAsyncContext::Implements NullAsyncContextImplements;
typedef NullAsyncContext::Extends NullAsyncContextExtends;

} // namespace serpent
} // namespace cheyenne

#endif // _CHEYENNE_SERPENT_ASYNCCONTEXT_HPP 
