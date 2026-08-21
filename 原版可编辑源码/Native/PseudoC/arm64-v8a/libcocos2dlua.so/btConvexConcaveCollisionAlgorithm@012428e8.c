
/* btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btConvexConcaveCollisionAlgorithm::btConvexConcaveCollisionAlgorithm
          (btConvexConcaveCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  
  btActivatingCollisionAlgorithm::btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this,param_1,param_2,param_3);
  this[0x10] = (btConvexConcaveCollisionAlgorithm)param_4;
  *(undefined ***)this = &PTR__btConvexConcaveCollisionAlgorithm_01734370;
  plVar2 = *(long **)param_1;
  pbVar1 = param_2;
  if (!param_4) {
    pbVar1 = param_3;
    param_3 = param_2;
  }
  *(undefined ***)(this + 0x18) = &PTR__btConvexTriangleCallback_017343a8;
  *(btCollisionObjectWrapper **)(this + 0x20) = param_3;
  *(btCollisionObjectWrapper **)(this + 0x28) = pbVar1;
  *(long **)(this + 0x58) = plVar2;
  *(undefined8 *)(this + 0x60) = 0;
  uVar3 = (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(pbVar1 + 0x10));
  *(undefined8 *)(this + 0x70) = uVar3;
  (**(code **)(**(long **)(this + 0x58) + 0x28))(*(long **)(this + 0x58),uVar3);
  return;
}

