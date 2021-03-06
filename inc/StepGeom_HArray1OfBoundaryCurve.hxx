// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_HArray1OfBoundaryCurve_HeaderFile
#define _StepGeom_HArray1OfBoundaryCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_HArray1OfBoundaryCurve.hxx>

#include <StepGeom_Array1OfBoundaryCurve.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_StepGeom_BoundaryCurve.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_BoundaryCurve;
class StepGeom_Array1OfBoundaryCurve;



class StepGeom_HArray1OfBoundaryCurve : public MMgt_TShared
{

public:

  
    StepGeom_HArray1OfBoundaryCurve(const Standard_Integer Low, const Standard_Integer Up);
  
    StepGeom_HArray1OfBoundaryCurve(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepGeom_BoundaryCurve)& V);
  
      void Init (const Handle(StepGeom_BoundaryCurve)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepGeom_BoundaryCurve)& Value) ;
  
     const  Handle(StepGeom_BoundaryCurve)& Value (const Standard_Integer Index)  const;
  
      Handle(StepGeom_BoundaryCurve)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepGeom_Array1OfBoundaryCurve& Array1()  const;
  
      StepGeom_Array1OfBoundaryCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepGeom_HArray1OfBoundaryCurve)

protected:




private: 


  StepGeom_Array1OfBoundaryCurve myArray;


};

#define ItemHArray1 Handle(StepGeom_BoundaryCurve)
#define ItemHArray1_hxx <StepGeom_BoundaryCurve.hxx>
#define TheArray1 StepGeom_Array1OfBoundaryCurve
#define TheArray1_hxx <StepGeom_Array1OfBoundaryCurve.hxx>
#define TCollection_HArray1 StepGeom_HArray1OfBoundaryCurve
#define TCollection_HArray1_hxx <StepGeom_HArray1OfBoundaryCurve.hxx>
#define Handle_TCollection_HArray1 Handle_StepGeom_HArray1OfBoundaryCurve
#define TCollection_HArray1_Type_() StepGeom_HArray1OfBoundaryCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepGeom_HArray1OfBoundaryCurve_HeaderFile
