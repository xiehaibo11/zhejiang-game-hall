
/* btSequentialImpulseConstraintSolver::solveGroup(btCollisionObject**, int, btPersistentManifold**,
   int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*, btDispatcher*) */

undefined1  [16]
btSequentialImpulseConstraintSolver::solveGroup
          (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
          btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,btIDebugDraw *param_8
          ,btDispatcher *param_9)

{
  CProfileManager *this;
  ulong uVar1;
  
  uVar1 = (ulong)param_3 & 0xffffffff;
  CProfileManager::Start_Profile("solveGroup");
  (**(code **)(*param_1 + 0x58))
            (param_1,param_2,uVar1,param_4,(ulong)param_5 & 0xffffffff,param_6,
             (ulong)param_7 & 0xffffffff,param_8,param_9);
  (**(code **)(*param_1 + 0x60))
            (param_1,param_2,uVar1,param_4,(ulong)param_5 & 0xffffffff,param_6,
             (ulong)param_7 & 0xffffffff,param_8,param_9);
  this = (CProfileManager *)(**(code **)(*param_1 + 0x48))(param_1,param_2,uVar1,param_8);
  CProfileManager::Stop_Profile(this);
  return ZEXT816(0);
}

