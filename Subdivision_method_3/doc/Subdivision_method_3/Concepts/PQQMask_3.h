
/*!
\ingroup PkgSurfaceSubdivisionMethods3Concepts
\cgalConcept

Required member functions for the `PQQMask_3` concept. This 
policy concept of geometric computations is used in 
`CGAL::Subdivision_method_3::PQQ<Polyhedron_3, Mask>`. 

\image html CCBorderMask.png
\image latex CCBorderMask.png

\cgalRefines `SubdivisionMask`

\cgalHasModel `CGAL::CatmullClark_mask_3<Polyhedron_3>`

\sa `CGAL::Subdivision_method_3`

*/

class PQQMask_3 {
public:

/// \name Operations 
/// @{

/*! Constructor
 */

  PQQMask_3(PolygonMesh& pm);

/*!
computes the facet-point `pt` based on the neighborhood 
of the facet `f`. 
*/ 
void facet_node(face_descriptor facet, Point_3& pt); 

/*!

computes the edge-point `pt` based on the neighborhood 
of the edge `e`. 
*/ 
void edge_node(halfedge_descriptor e, Point_3& pt); 

/*!

computes the vertex-point `pt` based on the neighborhood 
of the vertex `v`. 
*/ 
void vertex_node(vertex_descriptor v, Point_3& pt); 

/*!

computes the edge-point `ept` and the vertex-point `vpt` 
based on the neighborhood of the border edge `e`. 
*/ 
void border_node(halfedge_descriptor e, Point_3& ept, Point_3& vpt); 

/// @}

}; /* end PQQMask_3 */

