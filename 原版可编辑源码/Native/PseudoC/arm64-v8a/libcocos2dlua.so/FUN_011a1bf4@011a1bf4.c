
void FUN_011a1bf4(long param_1)

{
  uint uVar1;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x124);
  if ((uVar1 != 0) && (uVar1 != *(uint *)(param_1 + 0x58))) {
    uVar1 = uVar1 - 1;
    *(uint *)(param_1 + 0x124) = uVar1;
  }
  if (uVar1 < *(uint *)(param_1 + 0x58)) {
    do {
      free(*(void **)((long)__ptr + (ulong)uVar1 * 8));
      uVar1 = *(int *)(param_1 + 0x124) + 1;
      *(uint *)(param_1 + 0x124) = uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x58));
    __ptr = *(void **)(param_1 + 0x60);
  }
  free(__ptr);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}

