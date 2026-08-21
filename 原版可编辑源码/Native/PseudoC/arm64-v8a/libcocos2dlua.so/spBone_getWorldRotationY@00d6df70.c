
float spBone_getWorldRotationY(long param_1)

{
  float fVar1;
  
  fVar1 = atan2f(*(float *)(param_1 + 0x74),*(float *)(param_1 + 0x68));
  return fVar1 * 57.295776;
}

