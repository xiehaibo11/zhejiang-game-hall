
/* btSliderConstraint::getParam(int, int) const */

undefined4 __thiscall btSliderConstraint::getParam(btSliderConstraint *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x7f7fffff;
  if (param_1 == 4) {
    if (param_2 < 1) {
      return *(undefined4 *)(this + 0x10c);
    }
    if (param_2 < 3) {
      return *(undefined4 *)(this + 300);
    }
    if (param_2 == 3) {
      return *(undefined4 *)(this + 0x11c);
    }
    if (param_2 < 6) {
      uVar1 = *(undefined4 *)(this + 0x13c);
    }
  }
  else if (param_1 == 3) {
    if (param_2 < 1) {
      return *(undefined4 *)(this + 0xec);
    }
    if (param_2 == 3) {
      return *(undefined4 *)(this + 0xfc);
    }
  }
  else if (param_1 == 2) {
    if (param_2 < 1) {
      return *(undefined4 *)(this + 0x100);
    }
    if (param_2 < 3) {
      return *(undefined4 *)(this + 0x120);
    }
    if (param_2 == 3) {
      return *(undefined4 *)(this + 0x110);
    }
    if (param_2 < 6) {
      return *(undefined4 *)(this + 0x130);
    }
  }
  return uVar1;
}

