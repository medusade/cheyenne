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
///   File: Registration.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_REGISTRATION_HPP
#define _CHEYENNE_SERPENT_REGISTRATION_HPP

#include "coke/lang/Object.hpp"

namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase RegistrationTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: RegistrationT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = RegistrationTImplements>

class _EXPORT_CLASS RegistrationT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef RegistrationT<> Registration;
typedef Registration::Implements RegistrationImplements;

typedef RegistrationImplements NullRegistrationTImplements;
typedef ::coke::lang::Object NullRegistrationTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullRegistrationT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullRegistrationTImplements, class TExtends = NullRegistrationTExtends>

class _EXPORT_CLASS NullRegistrationT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullRegistrationT(const NullRegistrationT& copy): Extends(copy) {
    }
    NullRegistrationT() {
    }
    virtual ~NullRegistrationT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullRegistrationT<> NullRegistration;
typedef NullRegistration::Implements NullRegistrationImplements;
typedef NullRegistration::Extends NullRegistrationExtends;

} // namespace serpent
} // namespace cheyenne

#endif // _CHEYENNE_SERPENT_REGISTRATION_HPP 
