
/* btSequentialImpulseConstraintSolver::addFrictionConstraint(btVector3 const&, int, int, int,
   btManifoldPoint&, btVector3 const&, btVector3 const&, btCollisionObject*, btCollisionObject*,
   float, float, float) */

btVector3 *
btSequentialImpulseConstraintSolver::addFrictionConstraint
          (btVector3 *param_1,int param_2,int param_3,int param_4,btManifoldPoint *param_5,
          btVector3 *param_6,btVector3 *param_7,btCollisionObject *param_8,
          btCollisionObject *param_9,float param_10,float param_11,float param_12)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  btVector3 *pbVar6;
  long lVar7;
  btCollisionObject *in_stack_ffffffffffffff60;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  lVar7 = (long)iVar3;
  if (iVar3 == *(int *)(param_1 + 0x70)) {
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
        iVar3 = *(int *)(param_1 + 0x6c);
      }
      if (0 < iVar3) {
        lVar4 = 0;
        lVar5 = (long)iVar3;
        do {
          memcpy((void *)(lVar2 + lVar4),(void *)(*(long *)(param_1 + 0x78) + lVar4),0xa0);
          lVar5 = lVar5 + -1;
          lVar4 = lVar4 + 0xa0;
        } while (lVar5 != 0);
      }
      if (*(void **)(param_1 + 0x78) != (void *)0x0) {
        if (param_1[0x80] != (btVector3)0x0) {
          btAlignedFreeInternal(*(void **)(param_1 + 0x78));
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      param_1[0x80] = (btVector3)0x1;
      *(long *)(param_1 + 0x78) = lVar2;
      *(int *)(param_1 + 0x70) = iVar1;
    }
  }
  *(int *)(param_1 + 0x6c) = iVar3 + 1;
  pbVar6 = (btVector3 *)(*(long *)(param_1 + 0x78) + lVar7 * 0xa0);
  *(int *)(pbVar6 + 0x94) = (int)param_5;
  setupFrictionConstraint
            ((btSolverConstraint *)param_1,pbVar6,param_2,param_3,
             (btManifoldPoint *)(ulong)(uint)param_4,param_6,param_7,param_8,
             in_stack_ffffffffffffff60,param_10,param_11,param_12);
  return pbVar6;
}

