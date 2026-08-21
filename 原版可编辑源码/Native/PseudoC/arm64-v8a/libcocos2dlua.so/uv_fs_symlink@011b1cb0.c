
undefined4
uv_fs_symlink(long param_1,long param_2,char *param_3,char *param_4,undefined4 param_5,long param_6)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  void *__dest;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(long *)(param_2 + 0x50) = param_6;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined4 *)(param_2 + 8) = 6;
    *(undefined4 *)(param_2 + 0x40) = 0x18;
    *(long *)(param_2 + 0x48) = param_1;
    if (param_6 == 0) {
      *(char **)(param_2 + 0x68) = param_3;
      *(char **)(param_2 + 0x110) = param_4;
      *(undefined4 *)(param_2 + 0x11c) = param_5;
      FUN_011af9c4(param_2 + 0x150);
      uVar1 = *(undefined4 *)(param_2 + 0x58);
    }
    else {
      sVar2 = strlen(param_3);
      sVar2 = sVar2 + 1;
      sVar3 = strlen(param_4);
      __dest = malloc(sVar3 + 1 + sVar2);
      *(void **)(param_2 + 0x68) = __dest;
      if (__dest == (void *)0x0) {
        uVar1 = 0xfffffff4;
      }
      else {
        *(size_t *)(param_2 + 0x110) = (long)__dest + sVar2;
        memcpy(__dest,param_3,sVar2);
        memcpy(*(void **)(param_2 + 0x110),param_4,sVar3 + 1);
        *(undefined4 *)(param_2 + 0x11c) = param_5;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        FUN_0119e4dc(param_1,param_2 + 0x150,FUN_011af9c4,FUN_011b09c0);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

