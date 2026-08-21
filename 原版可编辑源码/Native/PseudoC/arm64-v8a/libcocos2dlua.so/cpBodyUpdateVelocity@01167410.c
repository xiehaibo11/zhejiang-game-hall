
void cpBodyUpdateVelocity(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  float fVar1;
  
  if ((*(float *)(param_5 + 0xb0) != INFINITY) && (*(float *)(param_5 + 0x10) == INFINITY)) {
    return;
  }
  fVar1 = *(float *)(param_5 + 0x38);
  *(undefined8 *)(param_5 + 0x38) = 0;
  *(float *)(param_5 + 0x30) =
       *(float *)(param_5 + 0x30) * param_3 +
       param_4 * (param_1 + *(float *)(param_5 + 0x14) * fVar1);
  *(float *)(param_5 + 0x34) =
       *(float *)(param_5 + 0x34) * param_3 +
       param_4 * (param_2 + *(float *)(param_5 + 0x14) * *(float *)(param_5 + 0x3c));
  *(float *)(param_5 + 0x44) =
       *(float *)(param_5 + 0x44) * param_3 +
       *(float *)(param_5 + 0x1c) * *(float *)(param_5 + 0x48) * param_4;
  *(undefined4 *)(param_5 + 0x48) = 0;
  return;
}

