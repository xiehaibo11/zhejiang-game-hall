
void spColor_clamp(float *param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((*param_1 < 0.0) || (fVar1 = 1.0, 1.0 < *param_1)) {
    *param_1 = fVar1;
  }
  fVar1 = 0.0;
  if ((param_1[1] < 0.0) || (fVar1 = 1.0, 1.0 < param_1[1])) {
    param_1[1] = fVar1;
  }
  fVar1 = 0.0;
  if ((param_1[2] < 0.0) || (fVar1 = 1.0, 1.0 < param_1[2])) {
    param_1[2] = fVar1;
  }
  fVar1 = 0.0;
  if ((param_1[3] < 0.0) || (fVar1 = 1.0, 1.0 < param_1[3])) {
    param_1[3] = fVar1;
  }
  return;
}

