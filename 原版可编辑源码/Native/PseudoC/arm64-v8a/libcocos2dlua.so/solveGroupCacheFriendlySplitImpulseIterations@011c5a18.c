
/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySplitImpulseIterations(btCollisionObject**,
   int, btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&,
   btIDebugDraw*) */

void btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySplitImpulseIterations
               (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
               btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,
               btIDebugDraw *param_8)

{
  uint uVar1;
  btSequentialImpulseConstraintSolver *pbVar2;
  btSolverConstraint *pbVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  if (*(int *)(param_8 + 0x2c) != 0) {
    iVar4 = *(int *)(param_8 + 0x14);
    if (((byte)param_8[0x41] & 1) == 0) {
      if (0 < iVar4) {
        iVar5 = 0;
        pbVar2 = (btSequentialImpulseConstraintSolver *)param_1;
        do {
          uVar1 = *(uint *)((long)param_1 + 0x2c);
          if (0 < (int)uVar1) {
            uVar6 = 0;
            do {
              pbVar3 = (btSolverConstraint *)
                       (param_1[7] + (long)*(int *)(param_1[0x17] + uVar6 * 4) * 0xa0);
              pbVar2 = (btSequentialImpulseConstraintSolver *)
                       resolveSplitPenetrationImpulseCacheFriendly
                                 (pbVar2,(btSolverBody *)
                                         (param_1[3] + (long)*(int *)(pbVar3 + 0x98) * 0xf8),
                                  (btSolverBody *)
                                  (param_1[3] + (long)*(int *)(pbVar3 + 0x9c) * 0xf8),pbVar3);
              uVar6 = uVar6 + 1;
            } while (uVar1 != uVar6);
            iVar4 = *(int *)(param_8 + 0x14);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
    else if (0 < iVar4) {
      iVar5 = 0;
      pbVar2 = (btSequentialImpulseConstraintSolver *)param_1;
      do {
        uVar1 = *(uint *)((long)param_1 + 0x2c);
        if (0 < (int)uVar1) {
          uVar6 = 0;
          do {
            pbVar3 = (btSolverConstraint *)
                     (param_1[7] + (long)*(int *)(param_1[0x17] + uVar6 * 4) * 0xa0);
            pbVar2 = (btSequentialImpulseConstraintSolver *)
                     resolveSplitPenetrationImpulseCacheFriendly
                               (pbVar2,(btSolverBody *)
                                       (param_1[3] + (long)*(int *)(pbVar3 + 0x98) * 0xf8),
                                (btSolverBody *)(param_1[3] + (long)*(int *)(pbVar3 + 0x9c) * 0xf8),
                                pbVar3);
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
          iVar4 = *(int *)(param_8 + 0x14);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return;
}

