
undefined4 uv_fs_rename(long param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  void *__dest;
  long *plVar4;
  
  *(undefined4 *)(param_2 + 8) = 6;
  if (param_5 != 0) {
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    plVar4 = *(long **)(param_1 + 0x28);
    *(long **)(param_2 + 0x18) = plVar4;
    *plVar4 = param_2 + 0x10;
    *(long *)(param_1 + 0x28) = param_2 + 0x10;
    *(undefined4 *)(param_2 + 0x40) = 0x15;
    *(long *)(param_2 + 0x50) = param_5;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(long *)(param_2 + 0x48) = param_1;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    sVar2 = strlen(param_3);
    sVar2 = sVar2 + 1;
    sVar3 = strlen(param_4);
    __dest = (void *)uv__malloc(sVar3 + 1 + sVar2);
    *(void **)(param_2 + 0x68) = __dest;
    if (__dest == (void *)0x0) {
      uVar1 = 0xfffffff4;
      **(undefined8 **)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      *(size_t *)(param_2 + 0x110) = (long)__dest + sVar2;
      memcpy(__dest,param_3,sVar2);
      memcpy(*(void **)(param_2 + 0x110),param_4,sVar3 + 1);
      uv__work_submit(param_1,param_2 + 0x150,FUN_00bfc728,FUN_00bfbb90);
      uVar1 = 0;
    }
    return uVar1;
  }
  *(long *)(param_2 + 0x48) = param_1;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0x15;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(char **)(param_2 + 0x68) = param_3;
  *(char **)(param_2 + 0x110) = param_4;
  FUN_00bfc728(param_2 + 0x150);
  return *(undefined4 *)(param_2 + 0x58);
}

