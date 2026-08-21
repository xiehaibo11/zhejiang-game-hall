
/* btAngularLimit::set(float, float, float, float, float) */

void __thiscall
btAngularLimit::set(btAngularLimit *this,float param_1,float param_2,float param_3,float param_4,
                   float param_5)

{
  float fVar1;
  
  fVar1 = (param_2 - param_1) * 0.5;
  *(float *)(this + 4) = fVar1;
  fVar1 = fmodf(fVar1 + param_1,6.2831855);
  if (-3.1415927 <= fVar1) {
    if (3.1415927 < fVar1) {
      fVar1 = fVar1 + -6.2831855;
    }
  }
  else {
    fVar1 = fVar1 + 6.2831855;
  }
  *(float *)this = fVar1;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  *(float *)(this + 0x10) = param_5;
  return;
}

