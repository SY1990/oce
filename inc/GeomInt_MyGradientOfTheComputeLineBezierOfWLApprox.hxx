// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile
#define _GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <AppParCurves_MultiCurve.hxx>
#include <math_Vector.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
class Standard_OutOfRange;
class StdFail_NotDone;
class GeomInt_TheMultiLineOfWLApprox;
class GeomInt_TheMultiLineToolOfWLApprox;
class GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox;
class GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox;
class AppParCurves_HArray1OfConstraintCouple;
class AppParCurves_MultiCurve;



class GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox(const GeomInt_TheMultiLineOfWLApprox& SSP, const Standard_Integer FirstPoint, const Standard_Integer LastPoint, const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints, math_Vector& Parameters, const Standard_Integer Deg, const Standard_Real Tol3d, const Standard_Real Tol2d, const Standard_Integer NbIterations = 200);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   AppParCurves_MultiCurve Value()  const;
  
  Standard_EXPORT   Standard_Real Error (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Real MaxError3d()  const;
  
  Standard_EXPORT   Standard_Real MaxError2d()  const;
  
  Standard_EXPORT   Standard_Real AverageError()  const;




protected:





private:



  AppParCurves_MultiCurve SCU;
  math_Vector ParError;
  Standard_Real AvError;
  Standard_Real MError3d;
  Standard_Real MError2d;
  Standard_Boolean Done;


};







#endif // _GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox_HeaderFile
