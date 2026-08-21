
ulong uv_fs_scandir_next(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *__ptr;
  
  uVar3 = *(ulong *)(param_1 + 0x58);
  if (-1 < (long)uVar3) {
    __ptr = *(void **)(param_1 + 0x60);
    if (__ptr == (void *)0x0) {
      uVar3 = 0xfffff001;
    }
    else {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x124) != 0) {
        free(*(void **)((long)__ptr + (ulong)(*(int *)(param_1 + 0x124) - 1) * 8));
        uVar2 = *(uint *)(param_1 + 0x124);
        uVar3 = *(ulong *)(param_1 + 0x58);
      }
      if (uVar2 == (uint)uVar3) {
        free(__ptr);
        *(undefined8 *)(param_1 + 0x60) = 0;
        uVar3 = 0xfffff001;
      }
      else {
        lVar1 = *(long *)((long)__ptr + (ulong)uVar2 * 8);
        *(uint *)(param_1 + 0x124) = uVar2 + 1;
        *param_2 = lVar1 + 0x13;
        switch(*(undefined1 *)(lVar1 + 0x12)) {
        case 1:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 4;
          break;
        case 2:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 6;
          break;
        default:
          *(undefined4 *)(param_2 + 1) = 0;
          uVar3 = 0;
          break;
        case 4:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 2;
          break;
        case 6:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 7;
          break;
        case 8:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 1;
          break;
        case 10:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 3;
          break;
        case 0xc:
          uVar3 = 0;
          *(undefined4 *)(param_2 + 1) = 5;
        }
      }
    }
    return uVar3;
  }
  return uVar3 & 0xffffffff;
}

