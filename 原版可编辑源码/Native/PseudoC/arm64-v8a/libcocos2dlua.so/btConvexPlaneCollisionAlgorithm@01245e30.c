
/* btConvexPlaneCollisionAlgorithm::btConvexPlaneCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, bool, int, int) */

void __thiscall
btConvexPlaneCollisionAlgorithm::btConvexPlaneCollisionAlgorithm
          (btConvexPlaneCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4,bool param_5,int param_6,int param_7)

{
  btCollisionObjectWrapper *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  btCollisionAlgorithm::btCollisionAlgorithm((btCollisionAlgorithm *)this,param_2);
  this[0x10] = (btConvexPlaneCollisionAlgorithm)0x0;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  this[0x20] = (btConvexPlaneCollisionAlgorithm)param_5;
  *(undefined ***)this = &PTR__btConvexPlaneCollisionAlgorithm_017345e0;
  *(int *)(this + 0x24) = param_6;
  *(int *)(this + 0x28) = param_7;
  if (param_1 == (btPersistentManifold *)0x0) {
    pbVar1 = param_4;
    if (!param_5) {
      pbVar1 = param_3;
      param_3 = param_4;
    }
    uVar2 = (**(code **)(**(long **)(this + 8) + 0x30))
                      (*(long **)(this + 8),*(undefined8 *)(pbVar1 + 0x10),
                       *(undefined8 *)(param_3 + 0x10));
    if ((uVar2 & 1) != 0) {
      uVar3 = (**(code **)(**(long **)(this + 8) + 0x18))
                        (*(long **)(this + 8),*(undefined8 *)(pbVar1 + 0x10),
                         *(undefined8 *)(param_3 + 0x10));
      *(undefined8 *)(this + 0x18) = uVar3;
      this[0x10] = (btConvexPlaneCollisionAlgorithm)0x1;
    }
  }
  return;
}

