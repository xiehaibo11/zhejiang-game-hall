
void cpBodyApplyForceAtWorldPoint
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  cpBodyActivate();
  *(float *)(param_5 + 0x38) = *(float *)(param_5 + 0x38) + param_1;
  *(float *)(param_5 + 0x3c) = *(float *)(param_5 + 0x3c) + param_2;
  *(float *)(param_5 + 0x48) =
       *(float *)(param_5 + 0x48) +
       param_2 * ((param_3 - *(float *)(param_5 + 0x5c)) -
                 (*(float *)(param_5 + 0x20) * *(float *)(param_5 + 0x4c) +
                 *(float *)(param_5 + 0x54) * *(float *)(param_5 + 0x24))) +
       param_1 * (*(float *)(param_5 + 0x20) * *(float *)(param_5 + 0x50) +
                  *(float *)(param_5 + 0x58) * *(float *)(param_5 + 0x24) +
                 (*(float *)(param_5 + 0x60) - param_4));
  return;
}

