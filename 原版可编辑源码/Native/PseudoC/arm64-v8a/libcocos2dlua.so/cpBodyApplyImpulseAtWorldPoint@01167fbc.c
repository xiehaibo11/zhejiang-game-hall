
void cpBodyApplyImpulseAtWorldPoint
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  cpBodyActivate();
  *(float *)(param_5 + 0x30) = *(float *)(param_5 + 0x30) + param_1 * *(float *)(param_5 + 0x14);
  *(float *)(param_5 + 0x34) = *(float *)(param_5 + 0x34) + param_2 * *(float *)(param_5 + 0x14);
  *(float *)(param_5 + 0x44) =
       *(float *)(param_5 + 0x44) +
       ((*(float *)(param_5 + 0x20) * *(float *)(param_5 + 0x50) +
         *(float *)(param_5 + 0x58) * *(float *)(param_5 + 0x24) +
        (*(float *)(param_5 + 0x60) - param_4)) * param_1 +
       param_2 * ((param_3 - *(float *)(param_5 + 0x5c)) -
                 (*(float *)(param_5 + 0x20) * *(float *)(param_5 + 0x4c) +
                 *(float *)(param_5 + 0x54) * *(float *)(param_5 + 0x24)))) *
       *(float *)(param_5 + 0x1c);
  return;
}

