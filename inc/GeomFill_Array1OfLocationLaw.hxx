// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Array1OfLocationLaw_HeaderFile
#define _GeomFill_Array1OfLocationLaw_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_GeomFill_LocationLaw.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class GeomFill_LocationLaw;



class GeomFill_Array1OfLocationLaw 
{
public:

  DEFINE_STANDARD_ALLOC

  
    GeomFill_Array1OfLocationLaw(const Standard_Integer Low, const Standard_Integer Up);
  
    GeomFill_Array1OfLocationLaw(const Handle(GeomFill_LocationLaw)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(GeomFill_LocationLaw)& V) ;
  
      void Destroy() ;
~GeomFill_Array1OfLocationLaw()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  GeomFill_Array1OfLocationLaw& Assign (const GeomFill_Array1OfLocationLaw& Other) ;
 const  GeomFill_Array1OfLocationLaw& operator = (const GeomFill_Array1OfLocationLaw& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(GeomFill_LocationLaw)& Value) ;
  
     const  Handle(GeomFill_LocationLaw)& Value (const Standard_Integer Index)  const;
   const  Handle(GeomFill_LocationLaw)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(GeomFill_LocationLaw)& ChangeValue (const Standard_Integer Index) ;
    Handle(GeomFill_LocationLaw)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT GeomFill_Array1OfLocationLaw(const GeomFill_Array1OfLocationLaw& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(GeomFill_LocationLaw)
#define Array1Item_hxx <GeomFill_LocationLaw.hxx>
#define TCollection_Array1 GeomFill_Array1OfLocationLaw
#define TCollection_Array1_hxx <GeomFill_Array1OfLocationLaw.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _GeomFill_Array1OfLocationLaw_HeaderFile
