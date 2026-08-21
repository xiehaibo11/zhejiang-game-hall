
/* btSequentialImpulseConstraintSolver::addRollingFrictionConstraint(btVector3 const&, int, int,
   int, btManifoldPoint&, btVector3 const&, btVector3 const&, btCollisionObject*,
   btCollisionObject*, float, float, float) */

btVector3 *
btSequentialImpulseConstraintSolver::addRollingFrictionConstraint
          (btVector3 *param_1,int param_2,int param_3,int param_4,btManifoldPoint *param_5,
          btVector3 *param_6,btVector3 *param_7,btCollisionObject *param_8,
          btCollisionObject *param_9,float param_10,float param_11,float param_12)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  btVector3 *pbVar5;
  long lVar6;
  long lVar7;
  float extraout_s0;
  float extraout_s0_00;
  btCollisionObject *in_stack_ffffffffffffff70;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  lVar6 = (long)iVar3;
  if (iVar3 == *(int *)(param_1 + 0x90)) {
    iVar1 = iVar3 << 1;
    if (iVar3 == 0) {
      iVar1 = 1;
    }
    if (iVar3 < iVar1) {
      if (iVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = btAlignedAllocInternal((long)iVar1 * 0xa0,0x10);
        iVar3 = *(int *)(param_1 + 0x8c);
        param_10 = extraout_s0;
      }
      if (0 < iVar3) {
        lVar7 = 0;
        lVar4 = (long)iVar3;
        do {
          memcpy((void *)(lVar2 + lVar7),(void *)(*(long *)(param_1 + 0x98) + lVar7),0xa0);
          lVar4 = lVar4 + -1;
          lVar7 = lVar7 + 0xa0;
          param_10 = extraout_s0_00;
        } while (lVar4 != 0);
      }
      if (*(void **)(param_1 + 0x98) != (void *)0x0) {
        if (param_1[0xa0] != (btVector3)0x0) {
          param_10 = (float)btAlignedFreeInternal(*(void **)(param_1 + 0x98));
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x8c);
      param_1[0xa0] = (btVector3)0x1;
      *(long *)(param_1 + 0x98) = lVar2;
      *(int *)(param_1 + 0x90) = iVar1;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar3 + 1;
  pbVar5 = (btVector3 *)(*(long *)(param_1 + 0x98) + lVar6 * 0xa0);
  *(int *)(pbVar5 + 0x94) = (int)param_5;
  setupRollingFrictionConstraint
            ((btSolverConstraint *)param_1,pbVar5,param_2,param_3,
             (btManifoldPoint *)(ulong)(uint)param_4,param_6,param_7,param_8,
             in_stack_ffffffffffffff70,param_10,param_11,param_12);
  return pbVar5;
}

