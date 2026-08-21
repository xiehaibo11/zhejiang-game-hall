
/* btPoint2PointConstraint::setParam(int, float, int) */

void __thiscall
btPoint2PointConstraint::setParam
          (btPoint2PointConstraint *this,int param_1,float param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == -1) {
    if (param_1 - 3U < 2) {
      *(float *)(this + 0x16c) = param_2;
      uVar1 = *(uint *)(this + 0x164) | 2;
    }
    else {
      if (1 < param_1 - 1U) {
        return;
      }
      *(float *)(this + 0x168) = param_2;
      uVar1 = *(uint *)(this + 0x164) | 1;
    }
    *(uint *)(this + 0x164) = uVar1;
  }
  return;
}

