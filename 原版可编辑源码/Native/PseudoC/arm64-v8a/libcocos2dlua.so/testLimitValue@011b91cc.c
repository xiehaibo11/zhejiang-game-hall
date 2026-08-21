
/* btRotationalLimitMotor::testLimitValue(float) */

undefined8 __thiscall
btRotationalLimitMotor::testLimitValue(btRotationalLimitMotor *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)this;
  fVar1 = *(float *)(this + 4);
  if (fVar2 <= fVar1) {
    if (param_1 < fVar2) {
      fVar2 = param_1 - fVar2;
      *(undefined4 *)(this + 0x38) = 1;
      *(float *)(this + 0x30) = fVar2;
      if (fVar2 <= 3.1415927) {
        if (-3.1415927 <= fVar2) {
          return 1;
        }
        fVar1 = 6.2831855;
      }
      else {
        fVar1 = -6.2831855;
      }
      *(float *)(this + 0x30) = fVar2 + fVar1;
      return 1;
    }
    if (fVar1 < param_1) {
      fVar1 = param_1 - fVar1;
      *(undefined4 *)(this + 0x38) = 2;
      *(float *)(this + 0x30) = fVar1;
      if (fVar1 <= 3.1415927) {
        if (-3.1415927 <= fVar1) {
          return 2;
        }
        fVar2 = 6.2831855;
      }
      else {
        fVar2 = -6.2831855;
      }
      *(float *)(this + 0x30) = fVar1 + fVar2;
      return 2;
    }
  }
  *(undefined4 *)(this + 0x38) = 0;
  return 0;
}

