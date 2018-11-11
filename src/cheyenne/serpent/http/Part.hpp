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
///   File: Part.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_PART_HPP
#define _CHEYENNE_SERPENT_PART_HPP

#include "coke/lang/Object.hpp"


namespace cheyenne {
namespace serpent {

typedef ClassImplements PartTImplements;
typedef ClassExtends PartTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: PartT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = PartTImplements, class TExtends = PartTExtends>

class _EXPORT_CLASS PartT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    PartT(const PartT& copy): Extends(copy) {
    }
    PartT() {
    }
    virtual ~PartT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef PartT<> Part;
typedef Part::Implements PartImplements;
typedef Part::Extends PartExtends;

} // namespace serpent
} // namespace cheyenne


#endif // _CHEYENNE_SERPENT_PART_HPP 
