
void uv__fs_scandir_cleanup(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *__ptr;
  
  uVar2 = *(uint *)(param_1 + 0x124);
  __ptr = *(void **)(param_1 + 0x60);
  if (uVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar2 = 0;
  }
  else {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x58);
    if (uVar2 == uVar1) {
      free(__ptr);
      *(undefined8 *)(param_1 + 0x60) = 0;
      return;
    }
    uVar2 = uVar2 - 1;
    *(uint *)(param_1 + 0x124) = uVar2;
  }
  if (uVar2 < uVar1) {
    do {
      free(*(void **)((long)__ptr + (ulong)uVar2 * 8));
      uVar2 = *(int *)(param_1 + 0x124) + 1;
      *(uint *)(param_1 + 0x124) = uVar2;
    } while (uVar2 < (uint)*(undefined8 *)(param_1 + 0x58));
    __ptr = *(void **)(param_1 + 0x60);
  }
  free(__ptr);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}

