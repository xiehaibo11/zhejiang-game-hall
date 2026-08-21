
float cpMomentForBox2(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_3 + param_5) * 0.5;
  fVar1 = (param_2 + param_4) * 0.5;
  return (fVar2 * fVar2 + fVar1 * fVar1 +
         ((param_4 - param_2) * (param_4 - param_2) + (param_5 - param_3) * (param_5 - param_3)) *
         0.083333336) * param_1;
}

