
/* btHingeConstraint::getParam(int, int) const */

undefined4 __thiscall btHingeConstraint::getParam(btHingeConstraint *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 == 5) || (param_2 == -1)) {
    if (param_1 == 4) {
      return *(undefined4 *)(this + 0x30c);
    }
    if (param_1 == 3) {
      uVar1 = *(undefined4 *)(this + 0x308);
    }
    else if (param_1 == 2) {
      return *(undefined4 *)(this + 0x310);
    }
  }
  return uVar1;
}

