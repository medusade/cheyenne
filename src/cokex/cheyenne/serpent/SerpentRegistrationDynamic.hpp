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
///   File: SerpentRegistrationDynamic.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_SERPENTREGISTRATIONDYNAMIC_HPP
#define _COKEX_CHEYENNE_SERPENT_SERPENTREGISTRATIONDYNAMIC_HPP

#include "coke/lang/Object.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase SerpentRegistrationDynamicTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: SerpentRegistrationDynamicT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = SerpentRegistrationDynamicTImplements>

class _EXPORT_CLASS SerpentRegistrationDynamicT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef SerpentRegistrationDynamicT<> SerpentRegistrationDynamic;
typedef SerpentRegistrationDynamic::Implements SerpentRegistrationDynamicImplements;

typedef SerpentRegistrationDynamicImplements NullSerpentRegistrationDynamicTImplements;
typedef ::coke::lang::Object NullSerpentRegistrationDynamicTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullSerpentRegistrationDynamicT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullSerpentRegistrationDynamicTImplements, class TExtends = NullSerpentRegistrationDynamicTExtends>

class _EXPORT_CLASS NullSerpentRegistrationDynamicT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullSerpentRegistrationDynamicT(const NullSerpentRegistrationDynamicT& copy): Extends(copy) {
    }
    NullSerpentRegistrationDynamicT() {
    }
    virtual ~NullSerpentRegistrationDynamicT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullSerpentRegistrationDynamicT<> NullSerpentRegistrationDynamic;
typedef NullSerpentRegistrationDynamic::Implements NullSerpentRegistrationDynamicImplements;
typedef NullSerpentRegistrationDynamic::Extends NullSerpentRegistrationDynamicExtends;

} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_SERPENTREGISTRATIONDYNAMIC_HPP 
