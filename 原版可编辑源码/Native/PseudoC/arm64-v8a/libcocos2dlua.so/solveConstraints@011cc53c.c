
/* btDiscreteDynamicsWorld::solveConstraints(btContactSolverInfo&) */

void __thiscall
btDiscreteDynamicsWorld::solveConstraints
          (btDiscreteDynamicsWorld *this,btContactSolverInfo *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  btIDebugDraw *pbVar6;
  CProfileManager *this_00;
  long lVar7;
  int iVar8;
  long lVar9;
  btTypedConstraint **ppbVar10;
  long *plVar11;
  InplaceSolverIslandCallback *this_01;
  code *pcVar12;
  btSortConstraintOnIslandPredicate abStack_48 [8];
  
  CProfileManager::Start_Profile("solveConstraints");
  iVar3 = *(int *)(this + 0x124);
  iVar1 = *(int *)(this + 0xec);
  if (iVar1 < iVar3) {
    if (*(int *)(this + 0xf0) < iVar3) {
      if (iVar3 == 0) {
        lVar5 = 0;
        iVar8 = iVar1;
      }
      else {
        lVar5 = btAlignedAllocInternal((long)iVar3 << 3,0x10);
        iVar8 = *(int *)(this + 0xec);
      }
      if (0 < iVar8) {
        lVar7 = 0;
        do {
          lVar9 = lVar7 * 8;
          lVar7 = lVar7 + 1;
          *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(*(long *)(this + 0xf8) + lVar9);
        } while (iVar8 != lVar7);
      }
      if (*(void **)(this + 0xf8) != (void *)0x0) {
        if (this[0x100] != (btDiscreteDynamicsWorld)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xf8));
        }
        *(undefined8 *)(this + 0xf8) = 0;
      }
      *(long *)(this + 0xf8) = lVar5;
      this[0x100] = (btDiscreteDynamicsWorld)0x1;
      *(int *)(this + 0xf0) = iVar3;
    }
    lVar5 = (long)iVar1;
    do {
      *(undefined8 *)(*(long *)(this + 0xf8) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (iVar3 != lVar5);
  }
  *(int *)(this + 0xec) = iVar3;
  for (lVar5 = 0; iVar3 = (**(code **)(*(long *)this + 0xd0))(this), lVar5 < iVar3;
      lVar5 = lVar5 + 1) {
    *(undefined8 *)(*(long *)(this + 0xf8) + lVar5 * 8) =
         *(undefined8 *)(*(long *)(this + 0x130) + lVar5 * 8);
  }
  if (1 < *(int *)(this + 0xec)) {
    btAlignedObjectArray<btTypedConstraint*>::quickSortInternal<btSortConstraintOnIslandPredicate>
              ((btAlignedObjectArray<btTypedConstraint*> *)(this + 0xe8),abStack_48,0,
               *(int *)(this + 0xec) + -1);
  }
  iVar3 = (**(code **)(*(long *)this + 0xd0))(this);
  if (iVar3 == 0) {
    ppbVar10 = (btTypedConstraint **)0x0;
  }
  else {
    ppbVar10 = *(btTypedConstraint ***)(this + 0xf8);
  }
  this_01 = *(InplaceSolverIslandCallback **)(this + 0x108);
  iVar3 = *(int *)(this + 0xec);
  pbVar6 = (btIDebugDraw *)(**(code **)(*(long *)this + 0x28))(this);
  InplaceSolverIslandCallback::setup(this_01,param_1,ppbVar10,iVar3,pbVar6);
  plVar11 = *(long **)(this + 0x110);
  uVar2 = *(undefined4 *)(this + 0xc);
  pcVar12 = *(code **)(*plVar11 + 0x10);
  uVar4 = (**(code **)(**(long **)(this + 0x28) + 0x48))();
  (*pcVar12)(plVar11,uVar2,uVar4);
  btSimulationIslandManager::buildAndProcessIslands
            (*(btSimulationIslandManager **)(this + 0x118),*(btDispatcher **)(this + 0x28),
             (btCollisionWorld *)this,*(IslandCallback **)(this + 0x108));
  InplaceSolverIslandCallback::processConstraints(*(InplaceSolverIslandCallback **)(this + 0x108));
  this_00 = (CProfileManager *)
            (**(code **)(**(long **)(this + 0x110) + 0x20))
                      (*(long **)(this + 0x110),param_1,*(undefined8 *)(this + 0x68));
  CProfileManager::Stop_Profile(this_00);
  return;
}

