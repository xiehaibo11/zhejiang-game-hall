
/* btConeTwistConstraint::setParam(int, float, int) */

void __thiscall
btConeTwistConstraint::setParam(btConeTwistConstraint *this,int param_1,float param_2,int param_3)

{
  btConeTwistConstraint *pbVar1;
  uint uVar2;
  
  if (param_1 - 3U < 2) {
    pbVar1 = this + 0x26c;
    if (2U < (uint)param_3) {
      pbVar1 = this + 0x274;
    }
    *(float *)pbVar1 = param_2;
    uVar2 = 4;
    if (2U >= (uint)param_3) {
      uVar2 = 1;
    }
    uVar2 = *(uint *)(this + 0x268) | uVar2;
  }
  else {
    if (1 < param_1 - 1U) {
      return;
    }
    if (2 < (uint)param_3) {
      *(float *)(this + 0x1c8) = param_2;
      return;
    }
    *(float *)(this + 0x270) = param_2;
    uVar2 = *(uint *)(this + 0x268) | 2;
  }
  *(uint *)(this + 0x268) = uVar2;
  return;
}

