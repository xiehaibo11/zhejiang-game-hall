
float spBone_getWorldScaleX(long param_1)

{
  return SQRT(*(float *)(param_1 + 100) * *(float *)(param_1 + 100) +
              *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70));
}

