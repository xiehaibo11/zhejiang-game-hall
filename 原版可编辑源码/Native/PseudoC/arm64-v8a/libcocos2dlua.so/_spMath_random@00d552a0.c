
float _spMath_random(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR__spInternalRandom_01777078)();
  return (param_2 - param_1) * fVar1 + param_1;
}

