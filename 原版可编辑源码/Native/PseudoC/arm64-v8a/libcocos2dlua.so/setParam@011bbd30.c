
/* btGeneric6DofConstraint::setParam(int, float, int) */

void __thiscall
btGeneric6DofConstraint::setParam
          (btGeneric6DofConstraint *this,int param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)param_3 < 3) {
    if (param_1 == 4) {
      *(float *)(this + (long)param_3 * 4 + 0x31c) = param_2;
LAB_011bbdc0:
      uVar1 = *(uint *)(this + 0x530);
      iVar2 = 2;
      goto LAB_011bbde8;
    }
    if (param_1 == 3) {
      *(float *)(this + (long)param_3 * 4 + 0x2fc) = param_2;
LAB_011bbddc:
      uVar1 = *(uint *)(this + 0x530);
      iVar2 = 1;
      goto LAB_011bbde8;
    }
    if (param_1 != 2) {
      return;
    }
    *(float *)(this + (long)param_3 * 4 + 0x30c) = param_2;
  }
  else {
    uVar1 = param_3 - 3;
    if (2 < uVar1) {
      return;
    }
    if (param_1 == 4) {
      *(float *)(this + (long)(int)uVar1 * 0x40 + 0x3a0) = param_2;
      goto LAB_011bbdc0;
    }
    if (param_1 == 3) {
      *(float *)(this + (long)(int)uVar1 * 0x40 + 0x398) = param_2;
      goto LAB_011bbddc;
    }
    if (param_1 != 2) {
      return;
    }
    *(float *)(this + (long)(int)uVar1 * 0x40 + 0x39c) = param_2;
  }
  uVar1 = *(uint *)(this + 0x530);
  iVar2 = 4;
LAB_011bbde8:
  *(uint *)(this + 0x530) = uVar1 | iVar2 << (ulong)(param_3 * 3 & 0x1f);
  return;
}

