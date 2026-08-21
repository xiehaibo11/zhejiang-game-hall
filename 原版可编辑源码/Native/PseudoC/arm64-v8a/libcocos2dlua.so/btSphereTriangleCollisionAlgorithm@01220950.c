
/* btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm(btPersistentManifold*,
   btCollisionAlgorithmConstructionInfo const&, btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, bool) */

void __thiscall
btSphereTriangleCollisionAlgorithm::btSphereTriangleCollisionAlgorithm
          (btSphereTriangleCollisionAlgorithm *this,btPersistentManifold *param_1,
          btCollisionAlgorithmConstructionInfo *param_2,btCollisionObjectWrapper *param_3,
          btCollisionObjectWrapper *param_4,bool param_5)

{
  undefined8 uVar1;
  
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this,param_2,param_3,param_4);
  this[0x10] = (btSphereTriangleCollisionAlgorithm)0x0;
  *(btPersistentManifold **)(this + 0x18) = param_1;
  this[0x20] = (btSphereTriangleCollisionAlgorithm)param_5;
  *(undefined ***)this = &PTR__btSphereTriangleCollisionAlgorithm_017324e0;
  if (param_1 == (btPersistentManifold *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 8) + 0x18))
                      (*(long **)(this + 8),*(undefined8 *)(param_3 + 0x10),
                       *(undefined8 *)(param_4 + 0x10));
    *(undefined8 *)(this + 0x18) = uVar1;
    this[0x10] = (btSphereTriangleCollisionAlgorithm)0x1;
  }
  return;
}

