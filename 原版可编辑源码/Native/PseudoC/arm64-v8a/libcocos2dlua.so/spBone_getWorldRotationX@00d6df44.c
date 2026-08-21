
float spBone_getWorldRotationX(long param_1)

{
  float fVar1;
  
  fVar1 = atan2f(*(float *)(param_1 + 0x70),*(float *)(param_1 + 100));
  return fVar1 * 57.295776;
}

