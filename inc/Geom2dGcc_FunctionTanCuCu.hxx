// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_FunctionTanCuCu_HeaderFile
#define _Geom2dGcc_FunctionTanCuCu_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Geom2dAdaptor_Curve.hxx>
#include <gp_Circ2d.hxx>
#include <Geom2dGcc_Type3.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Vector.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_ConstructionError;
class Geom2dAdaptor_Curve;
class gp_Circ2d;
class gp_Pnt2d;
class gp_Vec2d;
class math_Matrix;


//! This abstract class describes a Function of 1 Variable
//! used to find a line tangent to two curves.
class Geom2dGcc_FunctionTanCuCu  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dGcc_FunctionTanCuCu(const Geom2dAdaptor_Curve& Curv1, const Geom2dAdaptor_Curve& Curv2);
  
  Standard_EXPORT Geom2dGcc_FunctionTanCuCu(const gp_Circ2d& Circ1, const Geom2dAdaptor_Curve& Curv2);
  
  Standard_EXPORT   void InitDerivative (const math_Vector& X, gp_Pnt2d& Point1, gp_Pnt2d& Point2, gp_Vec2d& Tan1, gp_Vec2d& Tan2, gp_Vec2d& D21, gp_Vec2d& D22) ;
  
  //! returns the number of variables of the function.
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  //! returns the number of equations of the function.
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  //! Computes the value of the function F for the variable X.
  //! It returns True if the computation is successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  //! Computes the derivative of the function F for the variable X.
  //! It returns True if the computation is successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& Deriv) ;
  
  //! Computes the value and the derivative of the function F
  //! for the variable X.
  //! It returns True if the computation is successfully done,
  //! False otherwise.
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& Deriv) ;




protected:





private:



  Geom2dAdaptor_Curve TheCurve1;
  Geom2dAdaptor_Curve TheCurve2;
  gp_Circ2d TheCirc1;
  Geom2dGcc_Type3 TheType;


};







#endif // _Geom2dGcc_FunctionTanCuCu_HeaderFile
