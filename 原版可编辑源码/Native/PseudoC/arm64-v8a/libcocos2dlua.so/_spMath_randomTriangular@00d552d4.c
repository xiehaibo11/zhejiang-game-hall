
float _spMath_randomTriangular(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (param_1 + param_2) * 0.5;
  fVar1 = (float)(*(code *)PTR__spInternalRandom_01777078)();
  fVar2 = param_2 - param_1;
  fVar3 = fVar4 - param_1;
  if (fVar1 <= fVar3 / fVar2) {
    param_2 = SQRT(fVar3 * fVar2 * fVar1) + param_1;
  }
  else {
    param_2 = param_2 - SQRT((param_2 - fVar4) * fVar2 * (1.0 - fVar1));
  }
  return param_2;
}

