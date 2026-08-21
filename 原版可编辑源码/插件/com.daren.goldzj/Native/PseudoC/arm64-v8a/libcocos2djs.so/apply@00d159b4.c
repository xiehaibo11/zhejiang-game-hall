
/* spine::PowOutInterpolation::apply(float) */

float __thiscall spine::PowOutInterpolation::apply(PowOutInterpolation *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = -1.0;
  fVar1 = (float)MathUtil::pow(param_1 + -1.0,(float)*(int *)(this + 8));
  if (((byte)this[8] & 1) != 0) {
    fVar2 = 1.0;
  }
  return fVar1 * fVar2 + 1.0;
}

