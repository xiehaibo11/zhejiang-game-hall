
/* btAngularLimit::getLow() const */

float __thiscall btAngularLimit::getLow(btAngularLimit *this)

{
  float fVar1;
  
  fVar1 = fmodf(*(float *)this - *(float *)(this + 4),6.2831855);
  if (-3.1415927 <= fVar1) {
    if (3.1415927 < fVar1) {
      fVar1 = fVar1 + -6.2831855;
    }
  }
  else {
    fVar1 = fVar1 + 6.2831855;
  }
  return fVar1;
}

