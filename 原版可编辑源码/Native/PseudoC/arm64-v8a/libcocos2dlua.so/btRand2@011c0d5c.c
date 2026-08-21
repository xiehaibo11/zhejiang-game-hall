
/* btSequentialImpulseConstraintSolver::btRand2() */

ulong __thiscall
btSequentialImpulseConstraintSolver::btRand2(btSequentialImpulseConstraintSolver *this)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)(this + 0x130) * 0x19660d + 0x3c6ef35f);
  *(ulong *)(this + 0x130) = uVar1;
  return uVar1;
}

