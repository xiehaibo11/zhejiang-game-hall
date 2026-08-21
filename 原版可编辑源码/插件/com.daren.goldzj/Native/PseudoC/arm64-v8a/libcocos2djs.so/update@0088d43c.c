
/* cocos2d::Timer::update(float) */

void __thiscall cocos2d::Timer::update(Timer *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(this + 0x18) == -1.0) {
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  else {
    fVar2 = *(float *)(this + 0x18) + param_1;
    *(float *)(this + 0x18) = fVar2;
    if (this[0x1d] != (Timer)0x0) {
      if (fVar2 < *(float *)(this + 0x28)) {
        return;
      }
      (**(code **)(*(long *)this + 0x10))(this);
      iVar1 = *(int *)(this + 0x20);
      this[0x1d] = (Timer)0x0;
      fVar2 = *(float *)(this + 0x18) - *(float *)(this + 0x28);
      *(float *)(this + 0x18) = fVar2;
      *(uint *)(this + 0x20) = iVar1 + 1U;
      if ((this[0x1c] == (Timer)0x0) && (*(uint *)(this + 0x24) < iVar1 + 1U)) {
LAB_0088d544:
                    /* WARNING: Could not recover jumptable at 0x0088d55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x18))(this);
        return;
      }
    }
    fVar3 = *(float *)(this + 0x2c);
    if (*(float *)(this + 0x2c) <= 0.0) {
      fVar3 = fVar2;
    }
    while (fVar3 <= fVar2) {
      (**(code **)(*(long *)this + 0x10))(fVar3,this);
      iVar1 = *(int *)(this + 0x20);
      fVar2 = *(float *)(this + 0x18) - fVar3;
      *(float *)(this + 0x18) = fVar2;
      *(uint *)(this + 0x20) = iVar1 + 1U;
      if ((this[0x1c] == (Timer)0x0) && (*(uint *)(this + 0x24) < iVar1 + 1U)) goto LAB_0088d544;
      if (fVar2 <= 0.0) {
        return;
      }
      if (*(char *)(*(long *)(this + 0x10) + 0x10) != '\0') {
        return;
      }
    }
  }
  return;
}

