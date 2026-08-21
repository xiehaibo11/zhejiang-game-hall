
/* btBvhTriangleMeshShape::performRaycast(btTriangleCallback*, btVector3 const&, btVector3 const&)
    */

void btBvhTriangleMeshShape::performRaycast
               (btTriangleCallback *param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined **local_28;
  undefined8 uStack_20;
  btVector3 *local_18;
  
  uStack_20 = *(undefined8 *)(param_1 + 0x40);
  local_28 = &PTR__btNodeOverlapCallback_017327a8;
  local_18 = param_2;
  btQuantizedBvh::reportRayOverlappingNodex
            (*(btNodeOverlapCallback **)(param_1 + 0x48),(btVector3 *)&local_28,param_3);
  return;
}

