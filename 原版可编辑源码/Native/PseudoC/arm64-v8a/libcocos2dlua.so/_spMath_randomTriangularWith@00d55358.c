
float _spMath_randomTriangularWith(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(*(code *)PTR__spInternalRandom_01777078)();
  fVar2 = param_2 - param_1;
  if (fVar1 <= (param_3 - param_1) / fVar2) {
    param_2 = SQRT((param_3 - param_1) * fVar2 * fVar1) + param_1;
  }
  else {
    param_2 = param_2 - SQRT((param_2 - param_3) * fVar2 * (1.0 - fVar1));
  }
  return param_2;
}

