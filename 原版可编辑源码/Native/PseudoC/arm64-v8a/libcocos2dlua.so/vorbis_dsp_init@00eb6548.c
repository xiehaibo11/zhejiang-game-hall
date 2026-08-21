
undefined8 vorbis_dsp_init(long *param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x30);
  *param_1 = param_2;
  uVar1 = *(uint *)(param_2 + 4);
  pvVar2 = malloc((long)(int)uVar1 << 3);
  param_1[7] = (long)pvVar2;
  pvVar2 = malloc((long)(int)uVar1 << 3);
  param_1[8] = (long)pvVar2;
  if ((int)uVar1 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    lVar4 = *(long *)(param_2 + 0x30);
  }
  else {
    uVar3 = 0;
    do {
      pvVar2 = calloc(1,(*(ulong *)(lVar4 + 8) & 0x7ffffffffffffffe) << 1);
      lVar5 = uVar3 * 8;
      *(void **)(param_1[7] + lVar5) = pvVar2;
      pvVar2 = calloc(1,*(ulong *)(lVar4 + 8) & 0xfffffffffffffffc);
      uVar3 = uVar3 + 1;
      *(void **)(param_1[8] + lVar5) = pvVar2;
    } while (uVar1 != uVar3);
    param_1[10] = 0;
    param_1[0xb] = 0;
    if (*param_1 == 0) {
      return 0;
    }
    lVar4 = *(long *)(*param_1 + 0x30);
  }
  if (lVar4 != 0) {
    param_1[9] = -1;
    param_1[0xc] = -1;
    param_1[0xd] = -1;
    param_1[0xe] = -1;
  }
  return 0;
}

