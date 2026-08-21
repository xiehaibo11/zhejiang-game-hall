
/* btBvhTriangleMeshShape::refitTree(btVector3 const&, btVector3 const&) */

void __thiscall
btBvhTriangleMeshShape::refitTree
          (btBvhTriangleMeshShape *this,btVector3 *param_1,btVector3 *param_2)

{
  btOptimizedBvh::refit
            (*(btOptimizedBvh **)(this + 0x48),*(btStridingMeshInterface **)(this + 0x40),param_1,
             param_2);
  btTriangleMeshShape::recalcLocalAabb();
  return;
}

