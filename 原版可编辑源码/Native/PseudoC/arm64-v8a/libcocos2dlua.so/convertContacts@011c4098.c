
/* btSequentialImpulseConstraintSolver::convertContacts(btPersistentManifold**, int,
   btContactSolverInfo const&) */

void __thiscall
btSequentialImpulseConstraintSolver::convertContacts
          (btSequentialImpulseConstraintSolver *this,btPersistentManifold **param_1,int param_2,
          btContactSolverInfo *param_3)

{
  ulong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulong)(uint)param_2;
    do {
      convertContact(this,*param_1,param_3);
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  return;
}

