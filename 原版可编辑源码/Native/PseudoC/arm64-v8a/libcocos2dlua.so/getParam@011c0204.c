
/* btPoint2PointConstraint::getParam(int, int) const */

undefined4 __thiscall
btPoint2PointConstraint::getParam(btPoint2PointConstraint *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x7f7fffff;
  if (param_2 == -1) {
    if (param_1 - 3U < 2) {
      uVar1 = *(undefined4 *)(this + 0x16c);
    }
    else if (param_1 - 1U < 2) {
      return *(undefined4 *)(this + 0x168);
    }
  }
  return uVar1;
}

