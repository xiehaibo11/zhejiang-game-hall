
/* btQuantizedBvh::reportBoxCastOverlappingNodex(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&) const */

void btQuantizedBvh::reportBoxCastOverlappingNodex
               (btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3,
               btVector3 *param_4,btVector3 *param_5)

{
  int in_w5;
  undefined4 in_register_0000402c;
  int in_w6;
  
  if (param_1[0x40] != (btNodeOverlapCallback)0x0) {
    walkStacklessQuantizedTreeAgainstRay
              ((btQuantizedBvh *)param_1,(btNodeOverlapCallback *)param_2,param_3,param_4,param_5,
               (btVector3 *)CONCAT44(in_register_0000402c,in_w5),0,*(int *)(param_1 + 0x3c));
    return;
  }
  walkStacklessTreeAgainstRay(param_1,param_2,param_3,param_4,param_5,in_w5,in_w6);
  return;
}

