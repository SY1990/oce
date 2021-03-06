// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_Array1OfDataMapOfGUIDDriver_HeaderFile
#define _TFunction_Array1OfDataMapOfGUIDDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TFunction_DataMapOfGUIDDriver;



class TFunction_Array1OfDataMapOfGUIDDriver 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TFunction_Array1OfDataMapOfGUIDDriver(const Standard_Integer Low, const Standard_Integer Up);
  
    TFunction_Array1OfDataMapOfGUIDDriver(const TFunction_DataMapOfGUIDDriver& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const TFunction_DataMapOfGUIDDriver& V) ;
  
      void Destroy() ;
~TFunction_Array1OfDataMapOfGUIDDriver()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TFunction_Array1OfDataMapOfGUIDDriver& Assign (const TFunction_Array1OfDataMapOfGUIDDriver& Other) ;
 const  TFunction_Array1OfDataMapOfGUIDDriver& operator = (const TFunction_Array1OfDataMapOfGUIDDriver& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TFunction_DataMapOfGUIDDriver& Value) ;
  
     const  TFunction_DataMapOfGUIDDriver& Value (const Standard_Integer Index)  const;
   const  TFunction_DataMapOfGUIDDriver& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      TFunction_DataMapOfGUIDDriver& ChangeValue (const Standard_Integer Index) ;
    TFunction_DataMapOfGUIDDriver& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TFunction_Array1OfDataMapOfGUIDDriver(const TFunction_Array1OfDataMapOfGUIDDriver& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item TFunction_DataMapOfGUIDDriver
#define Array1Item_hxx <TFunction_DataMapOfGUIDDriver.hxx>
#define TCollection_Array1 TFunction_Array1OfDataMapOfGUIDDriver
#define TCollection_Array1_hxx <TFunction_Array1OfDataMapOfGUIDDriver.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TFunction_Array1OfDataMapOfGUIDDriver_HeaderFile
