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
///   File: SerpentContext.hpp
///
/// Author: $author
///   Date: 2/2/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKEX_CHEYENNE_SERPENT_SERPENTCONTEXT_HPP
#define _COKEX_CHEYENNE_SERPENT_SERPENTCONTEXT_HPP

#include "cokex/cheyenne/Base.hpp"

namespace cokex {
namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase SerpentContextTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: SerpentContextT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = SerpentContextTImplements>

class _EXPORT_CLASS SerpentContextT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef SerpentContextT<> SerpentContext;
typedef SerpentContext::Implements SerpentContextImplements;

typedef SerpentContext NullSerpentContextTImplements;
typedef ::coke::lang::Object NullSerpentContextTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullSerpentContextT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullSerpentContextTImplements, class TExtends = NullSerpentContextTExtends>

class _EXPORT_CLASS NullSerpentContextT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullSerpentContextT(const NullSerpentContextT& copy): Extends(copy) {
    }
    NullSerpentContextT() {
    }
    virtual ~NullSerpentContextT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullSerpentContextT<> NullSerpentContext;
typedef NullSerpentContext::Implements NullSerpentContextImplements;
typedef NullSerpentContext::Extends NullSerpentContextExtends;

} // namespace serpent
} // namespace cheyenne
} // namespace cokex

#endif // _COKEX_CHEYENNE_SERPENT_SERPENTCONTEXT_HPP 
