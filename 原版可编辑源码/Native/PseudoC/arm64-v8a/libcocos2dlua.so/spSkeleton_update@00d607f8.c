
void spSkeleton_update(float param_1,long param_2)

{
  *(float *)(param_2 + 0x80) = *(float *)(param_2 + 0x80) + param_1;
  return;
}

