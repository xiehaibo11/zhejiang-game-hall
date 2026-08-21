
undefined4 FT_Outline_New_Internal(long param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong __n;
  size_t sVar4;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_4 == (undefined8 *)0x0) {
    return 6;
  }
  param_4[4] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  if ((int)param_3 < 0) {
    return 6;
  }
  if (param_2 < param_3) {
    return 6;
  }
  if (param_2 >> 0xf != 0) {
    return 10;
  }
  if (param_2 == 0) {
    param_4[1] = 0;
    param_4[2] = 0;
  }
  else {
    __n = (ulong)param_2;
    sVar4 = __n << 4;
    pvVar1 = (void *)(**(code **)(param_1 + 8))(param_1,sVar4);
    if (pvVar1 == (void *)0x0) {
      puVar2 = param_4 + 1;
      uVar3 = 0x40;
      goto LAB_010616ac;
    }
    memset(pvVar1,0,sVar4);
    memset(pvVar1,0,sVar4);
    param_4[1] = pvVar1;
    pvVar1 = (void *)(**(code **)(param_1 + 8))(param_1,__n);
    if (pvVar1 == (void *)0x0) {
      puVar2 = param_4 + 2;
      uVar3 = 0x40;
      goto LAB_010616ac;
    }
    memset(pvVar1,0,__n);
    memset(pvVar1,0,__n);
    param_4[2] = pvVar1;
  }
  if (param_3 == 0) {
    pvVar1 = (void *)0x0;
LAB_010615e0:
    param_4[3] = pvVar1;
    *(short *)((long)param_4 + 2) = (short)param_2;
    *(short *)param_4 = (short)param_3;
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
    return 0;
  }
  if ((int)param_3 < 0x40000000) {
    if ((int)param_3 < 1) {
      puVar2 = param_4 + 3;
      uVar3 = 6;
      goto LAB_010616ac;
    }
    sVar4 = (long)(int)param_3 << 1;
    pvVar1 = (void *)(**(code **)(param_1 + 8))(param_1,sVar4);
    if (pvVar1 != (void *)0x0) {
      memset(pvVar1,0,sVar4);
      if (0 < (int)param_3) {
        memset(pvVar1,0,sVar4);
      }
      goto LAB_010615e0;
    }
    uVar3 = 0x40;
  }
  else {
    uVar3 = 10;
  }
  puVar2 = param_4 + 3;
LAB_010616ac:
  *puVar2 = 0;
  *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
  if (param_4[1] != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  param_4[1] = 0;
  if (param_4[2] != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  param_4[2] = 0;
  if (param_4[3] != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  param_4[4] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  return uVar3;
}

