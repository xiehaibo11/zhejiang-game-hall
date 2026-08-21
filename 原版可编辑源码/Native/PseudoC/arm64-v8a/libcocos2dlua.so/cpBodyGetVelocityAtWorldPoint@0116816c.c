
float cpBodyGetVelocityAtWorldPoint(undefined1 param_1 [16],float param_2,long param_3)

{
  return *(float *)(param_3 + 0x30) +
         *(float *)(param_3 + 0x44) *
         (*(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x50) +
          *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x24) +
         (*(float *)(param_3 + 0x60) - param_2));
}

