
void spColor_addFloats(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  
  param_1 = *param_5 + param_1;
  param_2 = param_5[1] + param_2;
  param_3 = param_5[2] + param_3;
  param_4 = param_5[3] + param_4;
  fVar1 = 0.0;
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  if ((param_1 < 0.0) || (fVar1 = 1.0, 1.0 < param_1)) {
    *param_5 = fVar1;
  }
  fVar1 = 0.0;
  if ((param_2 < 0.0) || (fVar1 = 1.0, 1.0 < param_2)) {
    param_5[1] = fVar1;
  }
  fVar1 = 0.0;
  if ((param_3 < 0.0) || (fVar1 = 1.0, 1.0 < param_3)) {
    param_5[2] = fVar1;
  }
  fVar1 = 0.0;
  if ((param_4 < 0.0) || (fVar1 = 1.0, 1.0 < param_4)) {
    param_5[3] = fVar1;
  }
  return;
}

