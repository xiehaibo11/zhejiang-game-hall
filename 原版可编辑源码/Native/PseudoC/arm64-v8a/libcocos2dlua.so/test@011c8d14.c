
/* btAngularLimit::test(float) */

void __thiscall btAngularLimit::test(btAngularLimit *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  this[0x1c] = (btAngularLimit)0x0;
  *(undefined8 *)(this + 0x14) = 0;
  if (0.0 <= *(float *)(this + 4)) {
    fVar1 = fmodf(param_1 - *(float *)this,6.2831855);
    if (-3.1415927 <= fVar1) {
      if (3.1415927 < fVar1) {
        fVar1 = fVar1 + -6.2831855;
      }
    }
    else {
      fVar1 = fVar1 + 6.2831855;
    }
    fVar2 = *(float *)(this + 4);
    if (-fVar2 <= fVar1) {
      if (fVar1 <= fVar2) {
        return;
      }
      fVar2 = fVar2 - fVar1;
      uVar3 = 0xbf800000;
      this[0x1c] = (btAngularLimit)0x1;
    }
    else {
      this[0x1c] = (btAngularLimit)0x1;
      fVar2 = -(fVar1 + fVar2);
      uVar3 = 0x3f800000;
    }
    *(float *)(this + 0x14) = fVar2;
    *(undefined4 *)(this + 0x18) = uVar3;
  }
  return;
}

