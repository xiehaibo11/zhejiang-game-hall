
undefined8 FUN_0117f684(long param_1)

{
  uint uVar1;
  int iVar2;
  void *__ptr;
  void *pvVar3;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  __ptr = malloc((ulong)uVar1);
  *(void **)(param_1 + 0x30) = __ptr;
  if (__ptr != (void *)0x0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      *(uint *)(param_1 + 0x28) = uVar1;
      return 0;
    }
    pvVar3 = malloc((ulong)uVar1);
    *(void **)(param_1 + 0x38) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      iVar2 = deflateInit2_(param_1 + 0x78,*(undefined4 *)(param_1 + 0x58),8,0x1f,8,
                            *(undefined4 *)(param_1 + 0x5c),"1.2.8",0x70);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x40) != 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x38);
        return 0;
      }
      free(*(void **)(param_1 + 0x38));
      __ptr = *(void **)(param_1 + 0x30);
    }
    free(__ptr);
  }
  FUN_0117e474(param_1,0xfffffffc,"out of memory");
  return 0xffffffff;
}

