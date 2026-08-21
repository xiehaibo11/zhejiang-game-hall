
/* cocos2d::Timer::update(float) */

void __thiscall cocos2d::Timer::update(Timer *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(float *)(this + 0x30) == -1.0) {
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  else {
    fVar2 = *(float *)(this + 0x30) + param_1;
    *(float *)(this + 0x30) = fVar2;
    if (this[0x35] != (Timer)0x0) {
      if (fVar2 < *(float *)(this + 0x40)) {
        return;
      }
      *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
      (**(code **)(*(long *)this + 0x10))(this);
      this[0x35] = (Timer)0x0;
      fVar2 = *(float *)(this + 0x30) - *(float *)(this + 0x40);
      *(float *)(this + 0x30) = fVar2;
      if ((this[0x34] == (Timer)0x0) && (*(uint *)(this + 0x3c) < *(uint *)(this + 0x38))) {
LAB_00fb2250:
                    /* WARNING: Could not recover jumptable at 0x00fb2268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x18))(this);
        return;
      }
    }
    fVar1 = *(float *)(this + 0x44);
    if (*(float *)(this + 0x44) <= 0.0) {
      fVar1 = fVar2;
    }
    do {
      if (fVar2 < fVar1) {
        return;
      }
      if (this[0x48] != (Timer)0x0) {
        return;
      }
      *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
      (**(code **)(*(long *)this + 0x10))(fVar1,this);
      fVar2 = *(float *)(this + 0x30) - fVar1;
      *(float *)(this + 0x30) = fVar2;
      if ((this[0x34] == (Timer)0x0) && (*(uint *)(this + 0x3c) < *(uint *)(this + 0x38)))
      goto LAB_00fb2250;
    } while (0.0 < fVar2);
  }
  return;
}

