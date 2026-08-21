
/* btSequentialImpulseConstraintSolver::btRandInt2(int) */

int __thiscall
btSequentialImpulseConstraintSolver::btRandInt2
          (btSequentialImpulseConstraintSolver *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *(int *)(this + 0x130) * 0x19660d + 0x3c6ef35f;
  uVar3 = (ulong)uVar1;
  *(ulong *)(this + 0x130) = uVar3;
  if ((uint)param_1 < 0x10001) {
    uVar1 = uVar1 ^ uVar1 >> 0x10;
    uVar3 = (ulong)uVar1;
    if ((uint)param_1 < 0x101) {
      uVar1 = uVar1 ^ uVar1 >> 8;
      uVar3 = (ulong)uVar1;
      if ((uint)param_1 < 0x11) {
        uVar1 = uVar1 ^ uVar1 >> 4;
        uVar3 = (ulong)uVar1;
        if ((uint)param_1 < 5) {
          uVar1 = uVar1 ^ uVar1 >> 2;
          uVar3 = (ulong)uVar1;
          if ((uint)param_1 < 3) {
            uVar3 = (ulong)(uVar1 ^ uVar1 >> 1);
          }
        }
      }
    }
  }
  iVar2 = 0;
  if ((long)param_1 != 0) {
    iVar2 = (int)(uVar3 / (ulong)(long)param_1);
  }
  return (int)uVar3 - iVar2 * param_1;
}

