
float cpBodyWorldToLocal(float param_1,float param_2,long param_3)

{
  return (*(float *)(param_3 + 0x60) - param_2) * *(float *)(param_3 + 0x54) +
         *(float *)(param_3 + 0x58) * (param_1 - *(float *)(param_3 + 0x5c));
}

