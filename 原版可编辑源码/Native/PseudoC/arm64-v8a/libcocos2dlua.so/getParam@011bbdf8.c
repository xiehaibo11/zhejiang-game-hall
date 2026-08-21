
/* btGeneric6DofConstraint::getParam(int, int) const */

undefined4 __thiscall
btGeneric6DofConstraint::getParam(btGeneric6DofConstraint *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((uint)param_2 < 3) {
    if (param_1 == 4) {
      return *(undefined4 *)(this + (long)param_2 * 4 + 0x31c);
    }
    if (param_1 == 3) {
      return *(undefined4 *)(this + (long)param_2 * 4 + 0x2fc);
    }
    uVar2 = 0;
    if (param_1 == 2) {
      return *(undefined4 *)(this + (long)param_2 * 4 + 0x30c);
    }
  }
  else {
    uVar1 = param_2 - 3;
    uVar2 = 0;
    if (uVar1 < 3) {
      if (param_1 == 4) {
        return *(undefined4 *)(this + (long)(int)uVar1 * 0x40 + 0x3a0);
      }
      if (param_1 == 3) {
        uVar2 = *(undefined4 *)(this + (long)(int)uVar1 * 0x40 + 0x398);
      }
      else if (param_1 == 2) {
        return *(undefined4 *)(this + (long)(int)uVar1 * 0x40 + 0x39c);
      }
    }
  }
  return uVar2;
}

