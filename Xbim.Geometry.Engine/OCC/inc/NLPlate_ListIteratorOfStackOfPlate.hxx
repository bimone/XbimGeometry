// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_ListIteratorOfStackOfPlate_HeaderFile
#define _NLPlate_ListIteratorOfStackOfPlate_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_NLPlate_ListNodeOfStackOfPlate.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class NLPlate_StackOfPlate;
class Plate_Plate;
class NLPlate_ListNodeOfStackOfPlate;



class NLPlate_ListIteratorOfStackOfPlate 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT NLPlate_ListIteratorOfStackOfPlate();
  
  Standard_EXPORT NLPlate_ListIteratorOfStackOfPlate(const NLPlate_StackOfPlate& L);
  
  Standard_EXPORT   void Initialize (const NLPlate_StackOfPlate& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Plate_Plate& Value()  const;


friend class NLPlate_StackOfPlate;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Plate_Plate
#define Item_hxx <Plate_Plate.hxx>
#define TCollection_ListNode NLPlate_ListNodeOfStackOfPlate
#define TCollection_ListNode_hxx <NLPlate_ListNodeOfStackOfPlate.hxx>
#define TCollection_ListIterator NLPlate_ListIteratorOfStackOfPlate
#define TCollection_ListIterator_hxx <NLPlate_ListIteratorOfStackOfPlate.hxx>
#define Handle_TCollection_ListNode Handle_NLPlate_ListNodeOfStackOfPlate
#define TCollection_ListNode_Type_() NLPlate_ListNodeOfStackOfPlate_Type_()
#define TCollection_List NLPlate_StackOfPlate
#define TCollection_List_hxx <NLPlate_StackOfPlate.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _NLPlate_ListIteratorOfStackOfPlate_HeaderFile