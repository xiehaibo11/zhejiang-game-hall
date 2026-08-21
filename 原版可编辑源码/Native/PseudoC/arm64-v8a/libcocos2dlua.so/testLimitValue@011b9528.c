
/* btTranslationalLimitMotor::testLimitValue(int, float) */

undefined4 __thiscall
btTranslationalLimitMotor::testLimitValue(btTranslationalLimitMotor *this,int param_1,float param_2)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + (long)param_1 * 4);
  fVar3 = *(float *)(this + (long)param_1 * 4 + 0x10);
  lVar2 = (long)param_1;
  if (fVar4 <= fVar3) {
    if (param_2 < fVar4) {
      uVar1 = 2;
      *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 2;
      fVar4 = param_2 - fVar4;
      goto LAB_011b9598;
    }
    if (fVar3 < param_2) {
      uVar1 = 1;
      *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 1;
      fVar4 = param_2 - fVar3;
      goto LAB_011b9598;
    }
    *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 0;
  }
  uVar1 = 0;
  fVar4 = 0.0;
LAB_011b9598:
  *(float *)(this + lVar2 * 4 + 0x90) = fVar4;
  return uVar1;
}

