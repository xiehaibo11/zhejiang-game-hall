
undefined8 *
speex_resampler_init_frac
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          uint param_6,undefined4 *param_7)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __nmemb;
  
  if (10 < param_6) {
    if (param_7 == (undefined4 *)0x0) {
      return (undefined8 *)0x0;
    }
    *param_7 = 3;
    return (undefined8 *)0x0;
  }
  puVar1 = calloc(0x80,1);
  __nmemb = (size_t)(int)(param_1 << 2);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *(uint *)((long)puVar1 + 0x14) = param_1;
  puVar1[0xf] = 0x100000001;
  *(undefined4 *)(puVar1 + 4) = 0xa0;
  pvVar2 = calloc(__nmemb,1);
  puVar1[8] = pvVar2;
  pvVar2 = calloc(__nmemb,1);
  puVar1[10] = pvVar2;
  pvVar2 = calloc(__nmemb,1);
  puVar1[9] = pvVar2;
  if (param_1 != 0) {
    uVar3 = (ulong)param_1;
    if (param_1 == 1) {
      uVar5 = 0;
LAB_00126c08:
      lVar4 = uVar3 - uVar5;
      do {
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    else {
      uVar5 = uVar3 & 0xfffffffe;
      uVar6 = uVar5;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
      if (uVar5 != uVar3) goto LAB_00126c08;
    }
    if (param_6 == 0xffffffff) goto LAB_00126c20;
  }
  *(uint *)(puVar1 + 2) = param_6;
LAB_00126c20:
  speex_resampler_set_rate_frac(puVar1,param_2,param_3,param_4,param_5);
  FUN_00126de0(puVar1);
  *(undefined4 *)((long)puVar1 + 0x34) = 1;
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  return puVar1;
}

