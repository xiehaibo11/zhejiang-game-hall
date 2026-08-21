
float cpAreaForCircle(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 * param_1 - param_2 * param_2;
  fVar1 = param_2 * param_2 - param_1 * param_1;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1 * 3.1415927;
}

