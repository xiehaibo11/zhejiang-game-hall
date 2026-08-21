
/* btConeTwistConstraint::getParam(int, int) const */

undefined4 __thiscall
btConeTwistConstraint::getParam(btConeTwistConstraint *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 3U < 2) {
    if ((uint)param_2 < 3) {
      return *(undefined4 *)(this + 0x26c);
    }
    if (param_2 - 3U < 3) {
      uVar1 = *(undefined4 *)(this + 0x274);
    }
  }
  else if (param_1 - 1U < 2) {
    if ((uint)param_2 < 3) {
      return *(undefined4 *)(this + 0x270);
    }
    if (param_2 - 3U < 3) {
      return *(undefined4 *)(this + 0x1c8);
    }
  }
  return uVar1;
}

