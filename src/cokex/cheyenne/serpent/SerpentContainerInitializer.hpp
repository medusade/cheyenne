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
///   File: SerpentContainerInitializer.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_SERPENTCONTAINERINITIALIZER_HPP
#define _COKEX_CHEYENNE_SERPENT_SERPENTCONTAINERINITIALIZER_HPP

#include "coke/lang/Object.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase SerpentContainerInitializerTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: SerpentContainerInitializerT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = SerpentContainerInitializerTImplements>

class _EXPORT_CLASS SerpentContainerInitializerT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef SerpentContainerInitializerT<> SerpentContainerInitializer;
typedef SerpentContainerInitializer::Implements SerpentContainerInitializerImplements;

typedef SerpentContainerInitializerImplements NullSerpentContainerInitializerTImplements;
typedef ::coke::lang::Object NullSerpentContainerInitializerTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullSerpentContainerInitializerT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullSerpentContainerInitializerTImplements, class TExtends = NullSerpentContainerInitializerTExtends>

class _EXPORT_CLASS NullSerpentContainerInitializerT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullSerpentContainerInitializerT(const NullSerpentContainerInitializerT& copy): Extends(copy) {
    }
    NullSerpentContainerInitializerT() {
    }
    virtual ~NullSerpentContainerInitializerT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullSerpentContainerInitializerT<> NullSerpentContainerInitializer;
typedef NullSerpentContainerInitializer::Implements NullSerpentContainerInitializerImplements;
typedef NullSerpentContainerInitializer::Extends NullSerpentContainerInitializerExtends;

} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_SERPENTCONTAINERINITIALIZER_HPP 
