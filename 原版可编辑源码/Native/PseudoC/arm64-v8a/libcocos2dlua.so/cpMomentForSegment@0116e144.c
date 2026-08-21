
float cpMomentForSegment(float param_1,float param_2,float param_3,float param_4,float param_5,
                        float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_4 + param_2) * 0.5;
  fVar3 = (param_5 + param_3) * 0.5;
  fVar1 = param_6 + param_6 + SQRT((param_5 - param_3) * (param_5 - param_3) +
                                   (param_4 - param_2) * (param_4 - param_2));
  return (fVar3 * fVar3 + fVar2 * fVar2 + (param_6 * param_6 * 4.0 + fVar1 * fVar1) * 0.083333336) *
         param_1;
}

