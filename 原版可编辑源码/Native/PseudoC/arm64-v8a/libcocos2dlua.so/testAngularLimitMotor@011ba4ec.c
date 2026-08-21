
/* btGeneric6DofConstraint::testAngularLimitMotor(int) */

undefined8 __thiscall
btGeneric6DofConstraint::testAngularLimitMotor(btGeneric6DofConstraint *this,int param_1)

{
  btGeneric6DofConstraint *pbVar1;
  btGeneric6DofConstraint *pbVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = (long)param_1;
  fVar4 = (float)btAdjustAngleToLimits
                           (*(float *)(this + (long)param_1 * 4 + 0x4c0),
                            *(float *)(this + lVar3 * 0x40 + 0x37c),
                            *(float *)(this + lVar3 * 0x40 + 0x380));
  fVar6 = *(float *)(this + lVar3 * 0x40 + 0x37c);
  fVar5 = *(float *)(this + lVar3 * 0x40 + 0x380);
  *(float *)(this + lVar3 * 0x40 + 0x3b0) = fVar4;
  if (fVar6 <= fVar5) {
    if (fVar6 <= fVar4) {
      pbVar1 = this + lVar3 * 0x40;
      pbVar2 = pbVar1 + 0x3b4;
      if (fVar4 <= fVar5) goto LAB_011ba534;
      fVar4 = fVar4 - fVar5;
      *(undefined4 *)pbVar2 = 2;
      *(float *)(pbVar1 + 0x3ac) = fVar4;
    }
    else {
      fVar4 = fVar4 - fVar6;
      pbVar1 = this + lVar3 * 0x40;
      *(undefined4 *)(pbVar1 + 0x3b4) = 1;
      *(float *)(pbVar1 + 0x3ac) = fVar4;
    }
    if (fVar4 <= 3.1415927) {
      if (-3.1415927 <= fVar4) {
        return 1;
      }
      fVar5 = 6.2831855;
    }
    else {
      fVar5 = -6.2831855;
    }
    *(float *)(pbVar1 + 0x3ac) = fVar4 + fVar5;
  }
  else {
    pbVar2 = this + lVar3 * 0x40 + 0x3b4;
LAB_011ba534:
    *(undefined4 *)pbVar2 = 0;
    if (this[lVar3 * 0x40 + 0x3a8] == (btGeneric6DofConstraint)0x0) {
      return 0;
    }
  }
  return 1;
}

