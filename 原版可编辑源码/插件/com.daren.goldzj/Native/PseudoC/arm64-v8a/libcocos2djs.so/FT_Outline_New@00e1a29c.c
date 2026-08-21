
undefined4 FT_Outline_New(long *param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong __n;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_4 == (undefined8 *)0x0) {
    return 6;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
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
    if (param_3 == 0) {
LAB_00e1a3d0:
      pvVar1 = (void *)0x0;
    }
    else {
LAB_00e1a3a8:
      if (0x3fffffff < (int)param_3) {
        puVar2 = param_4 + 3;
        uVar3 = 10;
        goto LAB_00e1a434;
      }
      pvVar1 = (void *)(**(code **)(lVar4 + 8))(lVar4,(long)(int)param_3 << 1);
      if (pvVar1 == (void *)0x0) {
        puVar2 = param_4 + 3;
        goto LAB_00e1a430;
      }
      memset(pvVar1,0,(long)(int)param_3 << 1);
    }
    uVar3 = 0;
    param_4[3] = pvVar1;
    *(short *)((long)param_4 + 2) = (short)param_2;
    *(short *)param_4 = (short)param_3;
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
  }
  else {
    __n = (ulong)param_2;
    pvVar1 = (void *)(**(code **)(lVar4 + 8))(lVar4,__n << 4);
    if (pvVar1 == (void *)0x0) {
      puVar2 = param_4 + 1;
      uVar3 = 0x40;
    }
    else {
      memset(pvVar1,0,__n << 4);
      param_4[1] = pvVar1;
      pvVar1 = (void *)(**(code **)(lVar4 + 8))(lVar4,__n);
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,__n);
        param_4[2] = pvVar1;
        if (param_3 != 0) goto LAB_00e1a3a8;
        goto LAB_00e1a3d0;
      }
      puVar2 = param_4 + 2;
LAB_00e1a430:
      uVar3 = 0x40;
    }
LAB_00e1a434:
    *puVar2 = 0;
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
    lVar4 = *param_1;
    if (lVar4 != 0) {
      if (param_4[1] != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4);
      }
      param_4[1] = 0;
      if (param_4[2] != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4);
      }
      param_4[2] = 0;
      if (param_4[3] != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4);
      }
      param_4[4] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[3] = 0;
      param_4[2] = 0;
    }
  }
  return uVar3;
}

