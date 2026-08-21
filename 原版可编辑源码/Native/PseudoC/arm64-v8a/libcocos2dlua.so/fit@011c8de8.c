
/* btAngularLimit::fit(float&) const */

void __thiscall btAngularLimit::fit(btAngularLimit *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < *(float *)(this + 4)) {
    fVar1 = fmodf(*param_1 - *(float *)this,6.2831855);
    if (-3.1415927 <= fVar1) {
      if (3.1415927 < fVar1) {
        fVar1 = fVar1 + -6.2831855;
      }
    }
    else {
      fVar1 = fVar1 + 6.2831855;
    }
    fVar2 = *(float *)(this + 4);
    if ((fVar1 < -fVar2) || (fVar2 < fVar1)) {
      if (fVar1 <= 0.0) {
        fVar2 = *(float *)this - fVar2;
      }
      else {
        fVar2 = fVar2 + *(float *)this;
      }
      fVar1 = fmodf(fVar2,6.2831855);
      if (-3.1415927 <= fVar1) {
        if (3.1415927 < fVar1) {
          fVar1 = fVar1 + -6.2831855;
        }
      }
      else {
        fVar1 = fVar1 + 6.2831855;
      }
      *param_1 = fVar1;
    }
  }
  return;
}

