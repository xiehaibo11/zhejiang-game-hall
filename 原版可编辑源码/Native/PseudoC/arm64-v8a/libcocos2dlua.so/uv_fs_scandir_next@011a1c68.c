
long uv_fs_scandir_next(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  void *__ptr;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (-1 < lVar1) {
    __ptr = *(void **)(param_1 + 0x60);
    if (__ptr != (void *)0x0) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x124) != 0) {
        free(*(void **)((long)__ptr + (ulong)(*(int *)(param_1 + 0x124) - 1) * 8));
        uVar2 = *(uint *)(param_1 + 0x124);
        lVar1 = *(long *)(param_1 + 0x58);
      }
      if (uVar2 != (uint)lVar1) {
        *(uint *)(param_1 + 0x124) = uVar2 + 1;
        lVar1 = *(long *)((long)__ptr + (ulong)uVar2 * 8);
        *param_2 = lVar1 + 0x13;
        uVar2 = *(byte *)(lVar1 + 0x12) - 1;
        if (uVar2 < 0xc) {
          uVar3 = *(undefined4 *)(&DAT_014a1130 + (long)(char)uVar2 * 4);
        }
        else {
          uVar3 = 0;
        }
        *(undefined4 *)(param_2 + 1) = uVar3;
        return 0;
      }
      free(__ptr);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    lVar1 = 0xfffff001;
  }
  return lVar1;
}

