
long cpPinJointInit(float param_1,float param_2,float param_3,float param_4,long param_5,
                   long param_6,long param_7)

{
  float fVar1;
  
  cpConstraintInit(param_5,&PTR_FUN_0172d208,param_6,param_7);
  *(float *)(param_5 + 0x60) = param_3;
  *(float *)(param_5 + 100) = param_4;
  *(float *)(param_5 + 0x58) = param_1;
  *(float *)(param_5 + 0x5c) = param_2;
  if (param_6 != 0) {
    fVar1 = (float)((ulong)*(undefined8 *)(param_6 + 0x4c) >> 0x20) * param_1;
    param_1 = (float)*(undefined8 *)(param_6 + 0x4c) * param_1 +
              (float)*(undefined8 *)(param_6 + 0x54) * param_2 +
              (float)*(undefined8 *)(param_6 + 0x5c);
    param_2 = fVar1 + (float)((ulong)*(undefined8 *)(param_6 + 0x54) >> 0x20) * param_2 +
              (float)((ulong)*(undefined8 *)(param_6 + 0x5c) >> 0x20);
  }
  if (param_7 != 0) {
    fVar1 = *(float *)(param_7 + 0x50) * param_3;
    param_3 = *(float *)(param_7 + 0x4c) * param_3 + param_4 * *(float *)(param_7 + 0x54) +
              *(float *)(param_7 + 0x5c);
    param_4 = fVar1 + param_4 * *(float *)(param_7 + 0x58) + *(float *)(param_7 + 0x60);
  }
  *(float *)(param_5 + 0x68) =
       SQRT((param_4 - param_2) * (param_4 - param_2) + (param_3 - param_1) * (param_3 - param_1));
  *(undefined4 *)(param_5 + 0x88) = 0;
  return param_5;
}

