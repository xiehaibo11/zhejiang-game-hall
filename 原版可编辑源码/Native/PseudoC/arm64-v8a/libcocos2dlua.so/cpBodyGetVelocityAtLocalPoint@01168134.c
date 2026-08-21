
float cpBodyGetVelocityAtLocalPoint(float param_1,float param_2,long param_3)

{
  return *(float *)(param_3 + 0x30) -
         *(float *)(param_3 + 0x44) *
         (*(float *)(param_3 + 0x50) * (param_1 - *(float *)(param_3 + 0x20)) +
         (param_2 - *(float *)(param_3 + 0x24)) * *(float *)(param_3 + 0x58));
}

