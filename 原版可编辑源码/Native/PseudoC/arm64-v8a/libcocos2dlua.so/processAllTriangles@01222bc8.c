
/* btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback*, btVector3 const&, btVector3
   const&) const */

void __thiscall
btBvhTriangleMeshShape::processAllTriangles
          (btBvhTriangleMeshShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  undefined **local_58;
  undefined8 uStack_50;
  btTriangleCallback *local_48;
  
  uStack_50 = *(undefined8 *)(this + 0x40);
  local_58 = &PTR__btNodeOverlapCallback_01732828;
  local_48 = param_1;
  btQuantizedBvh::reportAabbOverlappingNodex
            (*(btQuantizedBvh **)(this + 0x48),(btNodeOverlapCallback *)&local_58,param_2,param_3);
  return;
}

