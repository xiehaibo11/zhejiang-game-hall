
float _spMath_pow2_apply(float param_1)

{
  float fVar1;
  
  if (0.5 < param_1) {
    fVar1 = param_1 + -1.0 + param_1 + -1.0;
    return fVar1 * fVar1 * -0.5 + 1.0;
  }
  return (param_1 + param_1) * (param_1 + param_1) * 0.5;
}

