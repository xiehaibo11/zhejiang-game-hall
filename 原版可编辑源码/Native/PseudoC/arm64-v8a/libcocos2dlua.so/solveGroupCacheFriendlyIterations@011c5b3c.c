
/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyIterations(btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

undefined1  [16] __thiscall
btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyIterations
          (btSequentialImpulseConstraintSolver *this,btCollisionObject **param_1,int param_2,
          btPersistentManifold **param_3,int param_4,btTypedConstraint **param_5,int param_6,
          btContactSolverInfo *param_7,btIDebugDraw *param_8)

{
  int iVar1;
  CProfileManager *this_00;
  int iVar2;
  
  CProfileManager::Start_Profile("solveGroupCacheFriendlyIterations");
  this_00 = (CProfileManager *)
            (**(code **)(*(long *)this + 0x40))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = *(int *)(this + 0x128);
  if (*(int *)(this + 0x128) <= *(int *)(param_7 + 0x14)) {
    iVar1 = *(int *)(param_7 + 0x14);
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      this_00 = (CProfileManager *)
                (**(code **)(*(long *)this + 0x50))
                          (this,iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  CProfileManager::Stop_Profile(this_00);
  return ZEXT816(0);
}

