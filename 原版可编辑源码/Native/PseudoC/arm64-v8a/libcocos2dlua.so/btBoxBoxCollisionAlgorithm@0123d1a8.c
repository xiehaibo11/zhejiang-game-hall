
/* btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*) */

void __thiscall
btBoxBoxCollisionAlgorithm::btBoxBoxCollisionAlgorithm
          (btBoxBoxCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this,param_2,param_3,param_4);
  this[0x10] = (btBoxBoxCollisionAlgorithm)0x0;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__btBoxBoxCollisionAlgorithm_01734140;
  if ((param_1 == (btPersistentManifold *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(this + 8) + 0x30))
                        (*(long **)(this + 8),*(undefined8 *)(param_3 + 0x10),
                         *(undefined8 *)(param_4 + 0x10)), (uVar1 & 1) != 0)) {
    uVar2 = (**(code **)(**(long **)(this + 8) + 0x18))
                      (*(long **)(this + 8),*(undefined8 *)(param_3 + 0x10),
                       *(undefined8 *)(param_4 + 0x10));
    *(undefined8 *)(this + 0x18) = uVar2;
    this[0x10] = (btBoxBoxCollisionAlgorithm)0x1;
  }
  return;
}

