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
///   File: CspPropertyGroupDescriptor.hpp
///
/// Author: $author
///   Date: 2/3/2018
///////////////////////////////////////////////////////////////////////
#ifndef _CHEYENNE_SERPENT_CSPPROPERTYGROUPDESCRIPTOR_HPP
#define _CHEYENNE_SERPENT_CSPPROPERTYGROUPDESCRIPTOR_HPP

#include "coke/lang/Object.hpp"


namespace cheyenne {
namespace serpent {

typedef ClassImplements CspPropertyGroupDescriptorTImplements;
typedef ClassExtends CspPropertyGroupDescriptorTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: CspPropertyGroupDescriptorT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = CspPropertyGroupDescriptorTImplements, class TExtends = CspPropertyGroupDescriptorTExtends>

class _EXPORT_CLASS CspPropertyGroupDescriptorT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    CspPropertyGroupDescriptorT(const CspPropertyGroupDescriptorT& copy): Extends(copy) {
    }
    CspPropertyGroupDescriptorT() {
    }
    virtual ~CspPropertyGroupDescriptorT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef CspPropertyGroupDescriptorT<> CspPropertyGroupDescriptor;
typedef CspPropertyGroupDescriptor::Implements CspPropertyGroupDescriptorImplements;
typedef CspPropertyGroupDescriptor::Extends CspPropertyGroupDescriptorExtends;

} // namespace serpent
} // namespace cheyenne


#endif // _CHEYENNE_SERPENT_CSPPROPERTYGROUPDESCRIPTOR_HPP 
