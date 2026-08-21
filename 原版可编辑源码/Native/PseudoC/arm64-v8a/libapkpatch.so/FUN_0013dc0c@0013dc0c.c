
undefined8
FUN_0013dc0c(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4,int param_5,
            int param_6)

{
  void *__s;
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  ulong __n;
  
  pcVar2 = (char *)FUN_001327e4();
  iVar1 = strcmp("1.2.11",pcVar2);
  if (iVar1 == 0) {
    if ((int)param_4 < 2) {
      param_4 = 1;
    }
    if (param_5 - 1U < 9) {
      if (param_6 - 1U < 9) {
        *(int *)(param_1 + 0xe) = param_5;
        *(int *)((long)param_1 + 0x74) = param_6;
        __n = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
        param_1[0xd] = (ulong)param_4;
        *param_1 = param_2;
        pvVar3 = malloc(__n + (long)(int)(param_3 + 1) * 4 + 0x8000);
        param_1[0x21] = pvVar3;
        __s = (void *)((long)pvVar3 + 0x8000 + (long)(int)param_3 * 4);
        param_1[0x10] = (long)pvVar3 + 0x8000;
        param_1[0x11] = __s;
        param_1[0x12] = (long)pvVar3 + 0x4000;
        memset(__s,0,__n);
        *(uint *)((long)param_1 + 0x5c) = param_3;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0xb) = 0;
        param_1[0xf] = 0;
        return 1;
      }
      pcVar2 = "(1<=compressMemLevel)&&(compressMemLevel<=MAX_MEM_LEVEL)";
    }
    else {
      pcVar2 = "(Z_BEST_SPEED<=compressLevel)&&(compressLevel<=Z_BEST_COMPRESSION)";
    }
  }
  else {
    pcVar2 = "0==strcmp(kNormalizedZlibVersion,zlibVersion())";
  }
  FUN_0013fb24(&DAT_0016ba80,pcVar2,DAT_0016ba88);
  return 0;
}

