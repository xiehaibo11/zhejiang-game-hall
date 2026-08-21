
/* spine::PowInterpolation::apply(float) */

float __thiscall spine::PowInterpolation::apply(PowInterpolation *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 <= 0.5) {
    fVar1 = (float)MathUtil::pow(param_1 + param_1,(float)*(int *)(this + 8));
    fVar1 = fVar1 * 0.5;
  }
  else {
    fVar1 = (float)MathUtil::pow(param_1 + -1.0 + param_1 + -1.0,(float)*(int *)(this + 8));
    fVar2 = -2.0;
    if (((byte)this[8] & 1) != 0) {
      fVar2 = 2.0;
    }
    fVar1 = fVar1 / fVar2 + 1.0;
  }
  return fVar1;
}

