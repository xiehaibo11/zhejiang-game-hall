
/* btHingeConstraint::setParam(int, float, int) */

void __thiscall
btHingeConstraint::setParam(btHingeConstraint *this,int param_1,float param_2,int param_3)

{
  uint uVar1;
  
  if ((param_3 == 5) || (param_3 == -1)) {
    if (param_1 == 4) {
      *(float *)(this + 0x30c) = param_2;
      uVar1 = *(uint *)(this + 0x304) | 1;
    }
    else if (param_1 == 3) {
      *(float *)(this + 0x308) = param_2;
      uVar1 = *(uint *)(this + 0x304) | 4;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      *(float *)(this + 0x310) = param_2;
      uVar1 = *(uint *)(this + 0x304) | 2;
    }
    *(uint *)(this + 0x304) = uVar1;
  }
  return;
}

