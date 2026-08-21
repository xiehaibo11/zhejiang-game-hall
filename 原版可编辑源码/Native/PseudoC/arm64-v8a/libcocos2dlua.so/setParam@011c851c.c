
/* btSliderConstraint::setParam(int, float, int) */

void __thiscall
btSliderConstraint::setParam(btSliderConstraint *this,int param_1,float param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == 4) {
    if (param_3 < 1) {
      *(float *)(this + 0x10c) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x100;
    }
    else if (param_3 < 3) {
      *(float *)(this + 300) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x10;
    }
    else if (param_3 == 3) {
      *(float *)(this + 0x11c) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x400;
    }
    else {
      if (5 < param_3) {
        return;
      }
      *(float *)(this + 0x13c) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x40;
    }
  }
  else if (param_1 == 3) {
    if (param_3 < 1) {
      *(float *)(this + 0xec) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 1;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      *(float *)(this + 0xfc) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 4;
    }
  }
  else {
    if (param_1 != 2) {
      return;
    }
    if (param_3 < 1) {
      *(float *)(this + 0x100) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x200;
    }
    else if (param_3 < 3) {
      *(float *)(this + 0x120) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x20;
    }
    else if (param_3 == 3) {
      *(float *)(this + 0x110) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x800;
    }
    else {
      if (5 < param_3) {
        return;
      }
      *(float *)(this + 0x130) = param_2;
      uVar1 = *(uint *)(this + 0x144) | 0x80;
    }
  }
  *(uint *)(this + 0x144) = uVar1;
  return;
}

