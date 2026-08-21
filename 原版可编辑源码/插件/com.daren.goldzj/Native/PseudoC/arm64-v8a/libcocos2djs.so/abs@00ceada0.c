
/* spine::MathUtil::abs(float) */

float spine::MathUtil::abs(float param_1)

{
  float fVar1;
  
  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  return fVar1;
}

