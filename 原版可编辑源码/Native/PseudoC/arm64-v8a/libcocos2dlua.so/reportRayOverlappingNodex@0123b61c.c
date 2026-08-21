
/* btQuantizedBvh::reportRayOverlappingNodex(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&) const */

void btQuantizedBvh::reportRayOverlappingNodex
               (btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3)

{
  btVector3 *in_x3;
  int in_w6;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  if (param_1[0x40] == (btNodeOverlapCallback)0x0) {
    walkStacklessTreeAgainstRay
              (param_1,param_2,param_3,in_x3,(btVector3 *)&local_20,(int)&local_30,in_w6);
  }
  else {
    walkStacklessQuantizedTreeAgainstRay
              ((btQuantizedBvh *)param_1,(btNodeOverlapCallback *)param_2,param_3,in_x3,
               (btVector3 *)&local_20,(btVector3 *)&local_30,0,*(int *)(param_1 + 0x3c));
  }
  return;
}

