
float cpBodyLocalToWorld(float param_1,float param_2,long param_3)

{
  return *(float *)(param_3 + 0x4c) * param_1 + param_2 * *(float *)(param_3 + 0x54) +
         *(float *)(param_3 + 0x5c);
}

