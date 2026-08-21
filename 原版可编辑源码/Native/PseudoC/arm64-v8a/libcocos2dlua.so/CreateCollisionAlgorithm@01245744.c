
/* btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*) */

btActivatingCollisionAlgorithm * __thiscall
btConvexConvexAlgorithm::CreateFunc::CreateCollisionAlgorithm
          (CreateFunc *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  btActivatingCollisionAlgorithm *this_00;
  undefined8 uVar5;
  
  this_00 = (btActivatingCollisionAlgorithm *)
            (**(code **)(**(long **)param_1 + 0x70))(*(long **)param_1,0x40);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(this + 0x10);
  uVar4 = *(undefined8 *)(this + 0x18);
  uVar1 = *(undefined4 *)(this + 0x20);
  uVar2 = *(undefined4 *)(this + 0x24);
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm(this_00,param_1,param_2,param_3);
  *(undefined8 *)(this_00 + 0x10) = uVar4;
  *(undefined8 *)(this_00 + 0x18) = uVar3;
  this_00[0x20] = (btActivatingCollisionAlgorithm)0x0;
  *(undefined8 *)(this_00 + 0x28) = uVar5;
  this_00[0x30] = (btActivatingCollisionAlgorithm)0x0;
  *(undefined ***)this_00 = &PTR__btConvexConvexAlgorithm_01734478;
  *(undefined4 *)(this_00 + 0x34) = uVar1;
  *(undefined4 *)(this_00 + 0x38) = uVar2;
  return this_00;
}

