
float spBone_getWorldScaleY(long param_1)

{
  return SQRT(*(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x68) +
              *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74));
}

