
/* btCompoundCollisionAlgorithm::btCompoundCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btCompoundCollisionAlgorithm::btCompoundCollisionAlgorithm
          (btCompoundCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this,param_1,param_2,param_3);
  this[0x30] = (btCompoundCollisionAlgorithm)param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  this[0x28] = (btCompoundCollisionAlgorithm)0x1;
  *(undefined ***)this = &PTR__btCompoundCollisionAlgorithm_017341f0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  this[0x40] = (btCompoundCollisionAlgorithm)0x0;
  *(undefined8 *)(this + 0x38) = uVar2;
  pbVar1 = param_3;
  if (!param_4) {
    pbVar1 = param_2;
  }
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(*(long *)(pbVar1 + 8) + 0x60);
  preallocateChildAlgorithms(this,param_2,param_3);
  return;
}

