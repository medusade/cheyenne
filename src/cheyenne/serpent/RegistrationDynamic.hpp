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
///   File: RegistrationDynamic.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_REGISTRATIONDYNAMIC_HPP
#define _CHEYENNE_SERPENT_REGISTRATIONDYNAMIC_HPP

#include "coke/lang/Object.hpp"

namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase RegistrationDynamicTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: RegistrationDynamicT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = RegistrationDynamicTImplements>

class _EXPORT_CLASS RegistrationDynamicT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef RegistrationDynamicT<> RegistrationDynamic;
typedef RegistrationDynamic::Implements RegistrationDynamicImplements;

typedef RegistrationDynamicImplements NullRegistrationDynamicTImplements;
typedef ::coke::lang::Object NullRegistrationDynamicTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullRegistrationDynamicT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullRegistrationDynamicTImplements, class TExtends = NullRegistrationDynamicTExtends>

class _EXPORT_CLASS NullRegistrationDynamicT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullRegistrationDynamicT(const NullRegistrationDynamicT& copy): Extends(copy) {
    }
    NullRegistrationDynamicT() {
    }
    virtual ~NullRegistrationDynamicT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullRegistrationDynamicT<> NullRegistrationDynamic;
typedef NullRegistrationDynamic::Implements NullRegistrationDynamicImplements;
typedef NullRegistrationDynamic::Extends NullRegistrationDynamicExtends;

} // namespace serpent
} // namespace cheyenne

#endif // _CHEYENNE_SERPENT_REGISTRATIONDYNAMIC_HPP 
