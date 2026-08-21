
float cpAreaForSegment(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  fVar1 = SQRT((param_2 - param_4) * (param_2 - param_4) + (param_1 - param_3) * (param_1 - param_3)
              );
  return (fVar1 + fVar1 + param_5 * 3.1415927) * param_5;
}

