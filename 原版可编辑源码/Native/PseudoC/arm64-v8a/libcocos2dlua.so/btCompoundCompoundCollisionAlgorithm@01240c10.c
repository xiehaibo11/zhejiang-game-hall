
/* btCompoundCompoundCollisionAlgorithm::btCompoundCompoundCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btCompoundCompoundCollisionAlgorithm::btCompoundCompoundCollisionAlgorithm
          (btCompoundCompoundCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btHashedSimplePairCache *this_00;
  undefined8 uVar1;
  
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this,param_1,param_2,param_3);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  this[0x30] = (btCompoundCompoundCollisionAlgorithm)0x1;
  *(undefined ***)this = &PTR__btCompoundCompoundCollisionAlgorithm_017342b0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  this[0x40] = (btCompoundCompoundCollisionAlgorithm)0x0;
  *(undefined8 *)(this + 0x38) = uVar1;
  this_00 = (btHashedSimplePairCache *)btAlignedAllocInternal(0x70,0x10);
  btHashedSimplePairCache::btHashedSimplePairCache(this_00);
  *(btHashedSimplePairCache **)(this + 0x10) = this_00;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x60);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(*(long *)(param_3 + 8) + 0x60);
  return;
}

