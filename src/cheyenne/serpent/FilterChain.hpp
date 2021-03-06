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
///   File: FilterChain.hpp
///
/// Author: $author
///   Date: 2/2/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_FILTERCHAIN_HPP
#define _CHEYENNE_SERPENT_FILTERCHAIN_HPP

#include "cheyenne/base/Base.hpp"

namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase FilterChainTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: FilterChainT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = FilterChainTImplements>

class _EXPORT_CLASS FilterChainT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef FilterChainT<> FilterChain;
typedef FilterChain::Implements FilterChainImplements;

typedef FilterChain NullFilterChainTImplements;
typedef ::coke::lang::Object NullFilterChainTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullFilterChainT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullFilterChainTImplements, class TExtends = NullFilterChainTExtends>

class _EXPORT_CLASS NullFilterChainT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullFilterChainT(const NullFilterChainT& copy): Extends(copy) {
    }
    NullFilterChainT() {
    }
    virtual ~NullFilterChainT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return false;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullFilterChainT<> NullFilterChain;
typedef NullFilterChain::Implements NullFilterChainImplements;
typedef NullFilterChain::Extends NullFilterChainExtends;

} // namespace serpent
} // namespace cheyenne

#endif // _CHEYENNE_SERPENT_FILTERCHAIN_HPP 
