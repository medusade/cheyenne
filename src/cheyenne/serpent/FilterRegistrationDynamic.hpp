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
///   File: FilterRegistrationDynamic.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_FILTERREGISTRATIONDYNAMIC_HPP
#define _CHEYENNE_SERPENT_FILTERREGISTRATIONDYNAMIC_HPP

#include "coke/lang/Object.hpp"

namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase FilterRegistrationDynamicTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: FilterRegistrationDynamicT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = FilterRegistrationDynamicTImplements>

class _EXPORT_CLASS FilterRegistrationDynamicT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef FilterRegistrationDynamicT<> FilterRegistrationDynamic;
typedef FilterRegistrationDynamic::Implements FilterRegistrationDynamicImplements;

typedef FilterRegistrationDynamicImplements NullFilterRegistrationDynamicTImplements;
typedef ::coke::lang::Object NullFilterRegistrationDynamicTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullFilterRegistrationDynamicT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullFilterRegistrationDynamicTImplements, class TExtends = NullFilterRegistrationDynamicTExtends>

class _EXPORT_CLASS NullFilterRegistrationDynamicT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullFilterRegistrationDynamicT(const NullFilterRegistrationDynamicT& copy): Extends(copy) {
    }
    NullFilterRegistrationDynamicT() {
    }
    virtual ~NullFilterRegistrationDynamicT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullFilterRegistrationDynamicT<> NullFilterRegistrationDynamic;
typedef NullFilterRegistrationDynamic::Implements NullFilterRegistrationDynamicImplements;
typedef NullFilterRegistrationDynamic::Extends NullFilterRegistrationDynamicExtends;

} // namespace serpent
} // namespace cheyenne

#endif // _CHEYENNE_SERPENT_FILTERREGISTRATIONDYNAMIC_HPP 
