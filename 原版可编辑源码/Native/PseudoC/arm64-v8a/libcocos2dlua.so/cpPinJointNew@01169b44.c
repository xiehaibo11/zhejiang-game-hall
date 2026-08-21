
void * cpPinJointNew(float param_1,float param_2,float param_3,float param_4,long param_5,
                    long param_6)

{
  void *pvVar1;
  float fVar2;
  
  pvVar1 = calloc(1,0x90);
  cpConstraintInit(pvVar1,&PTR_FUN_0172d208,param_5,param_6);
  *(float *)((long)pvVar1 + 0x60) = param_3;
  *(float *)((long)pvVar1 + 100) = param_4;
  *(float *)((long)pvVar1 + 0x58) = param_1;
  *(float *)((long)pvVar1 + 0x5c) = param_2;
  if (param_5 != 0) {
    fVar2 = (float)((ulong)*(undefined8 *)(param_5 + 0x4c) >> 0x20) * param_1;
    param_1 = (float)*(undefined8 *)(param_5 + 0x4c) * param_1 +
              (float)*(undefined8 *)(param_5 + 0x54) * param_2 +
              (float)*(undefined8 *)(param_5 + 0x5c);
    param_2 = fVar2 + (float)((ulong)*(undefined8 *)(param_5 + 0x54) >> 0x20) * param_2 +
              (float)((ulong)*(undefined8 *)(param_5 + 0x5c) >> 0x20);
  }
  if (param_6 != 0) {
    fVar2 = *(float *)(param_6 + 0x50) * param_3;
    param_3 = *(float *)(param_6 + 0x4c) * param_3 + param_4 * *(float *)(param_6 + 0x54) +
              *(float *)(param_6 + 0x5c);
    param_4 = fVar2 + param_4 * *(float *)(param_6 + 0x58) + *(float *)(param_6 + 0x60);
  }
  *(float *)((long)pvVar1 + 0x68) =
       SQRT((param_4 - param_2) * (param_4 - param_2) + (param_3 - param_1) * (param_3 - param_1));
  *(undefined4 *)((long)pvVar1 + 0x88) = 0;
  return pvVar1;
}

