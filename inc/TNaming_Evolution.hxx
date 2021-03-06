// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_Evolution_HeaderFile
#define _TNaming_Evolution_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Defines the type of evolution in old shape - new shape pairs.
//! The definitions - in the form of the terms of
//! the enumeration - are needed by the
//! TNaming_NamedShape attribute and
//! indicate what entities this attribute records as follows:
//! -   PRIMITIVE
//! -   New entities; in each pair, old shape is a
//! null shape and new shape is a created
//! entity.
//! -   GENERATED
//! -   Entities created from other entities; in
//! each pair, old shape is the generator and
//! new shape is the created entity.
//! -   MODIFY
//! -   Split or merged entities, in each pair, old
//! shape is the entity before the operation
//! and new shape is the new entity after the
//! operation.
//! -   DELETE
//! -   Deletion of entities; in each pair, old
//! shape is a deleted entity and new shape is null.
//! -   SELECTED
//! -   Named topological entities; in each pair,
//! the new shape is a named entity and the
//! old shape is not used.
//!
//! For a split which generates multiple faces, the
//! attribute will contain many pairs with the same
//! old shape; for a merge, it will contain many
//! pairs with the same new shape.
//! Finally, an example of delete would be a face
//! removed by a Boolean operation.
enum TNaming_Evolution
{
TNaming_PRIMITIVE,
TNaming_GENERATED,
TNaming_MODIFY,
TNaming_DELETE,
TNaming_REPLACE,
TNaming_SELECTED
};

#endif // _TNaming_Evolution_HeaderFile
