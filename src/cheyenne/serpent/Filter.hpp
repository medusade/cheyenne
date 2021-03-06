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
///   File: Filter.hpp
///
/// Author: $author
///   Date: 2/2/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_FILTER_HPP
#define _CHEYENNE_SERPENT_FILTER_HPP

#include "cheyenne/base/Base.hpp"

namespace cheyenne {
namespace serpent {

typedef ::coke::lang::ImplementBase FilterTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: FilterT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = FilterTImplements>

class _EXPORT_CLASS FilterT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef FilterT<> Filter;
typedef Filter::Implements FilterImplements;

typedef Filter NullFilterTImplements;
typedef ::coke::lang::Object NullFilterTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullFilterT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullFilterTImplements, class TExtends = NullFilterTExtends>

class _EXPORT_CLASS NullFilterT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullFilterT(const NullFilterT& copy): Extends(copy) {
    }
    NullFilterT() {
    }
    virtual ~NullFilterT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullFilterT<> NullFilter;
typedef NullFilter::Implements NullFilterImplements;
typedef NullFilter::Extends NullFilterExtends;

} // namespace serpent
} // namespace cheyenne

#endif // _CHEYENNE_SERPENT_FILTER_HPP 
