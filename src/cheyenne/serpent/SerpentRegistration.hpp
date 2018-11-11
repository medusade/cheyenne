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
///   File: SerpentRegistration.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_SERPENTREGISTRATION_HPP
#define _CHEYENNE_SERPENT_SERPENTREGISTRATION_HPP

#include "coke/lang/Object.hpp"


namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase SerpentRegistrationTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: SerpentRegistrationT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = SerpentRegistrationTImplements>

class _EXPORT_CLASS SerpentRegistrationT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef SerpentRegistrationT<> SerpentRegistration;
typedef SerpentRegistration::Implements SerpentRegistrationImplements;

typedef SerpentRegistrationImplements NullSerpentRegistrationTImplements;
typedef ::coke::lang::Object NullSerpentRegistrationTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullSerpentRegistrationT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullSerpentRegistrationTImplements, class TExtends = NullSerpentRegistrationTExtends>

class _EXPORT_CLASS NullSerpentRegistrationT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullSerpentRegistrationT(const NullSerpentRegistrationT& copy): Extends(copy) {
    }
    NullSerpentRegistrationT() {
    }
    virtual ~NullSerpentRegistrationT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullSerpentRegistrationT<> NullSerpentRegistration;
typedef NullSerpentRegistration::Implements NullSerpentRegistrationImplements;
typedef NullSerpentRegistration::Extends NullSerpentRegistrationExtends;

} // namespace serpent
} // namespace cheyenne


#endif // _CHEYENNE_SERPENT_SERPENTREGISTRATION_HPP 
