
float _spMath_interpolate(float param_1,float param_2,undefined8 param_3,code *param_4)

{
  float fVar1;
  
  fVar1 = (float)(*param_4)(param_3);
  return (param_2 - param_1) * fVar1 + param_1;
}

