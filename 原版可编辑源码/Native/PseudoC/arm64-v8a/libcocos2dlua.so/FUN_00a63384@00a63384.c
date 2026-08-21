
undefined8 FUN_00a63384(undefined8 *param_1,uint param_2,char *param_3,size_t param_4,long *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  char *__s2;
  uint local_c0;
  long local_a0;
  
  if (((long)param_4 < 0) || ((param_5 != (long *)0x0 && (*param_5 < 0)))) {
    return 0x2b;
  }
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    return 0x1b;
  }
  *puVar2 = 0;
  if (param_2 < 3) {
    if (param_4 == 0) {
      param_4 = strlen(param_3);
    }
    if (param_2 == 0) {
      __dest = (void *)0x0;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      param_2 = 1;
      *(undefined4 *)(puVar2 + 1) = 1;
    }
    else {
      __dest = (void *)(*(code *)PTR_malloc_017699f8)(param_4 + 1);
      puVar2[2] = __dest;
      if (__dest == (void *)0x0) {
        (*(code *)PTR_free_01769a00)(puVar2);
        return 0x1b;
      }
      memcpy(__dest,param_3,param_4);
      *(undefined1 *)(puVar2[2] + param_4) = 0;
      puVar2[3] = param_4;
      *(uint *)(puVar2 + 1) = param_2;
    }
  }
  else {
    __dest = (void *)0x0;
    puVar2[2] = param_3;
    *(uint *)(puVar2 + 1) = param_2;
  }
  if (param_5 != (long *)0x0) {
    if (param_2 == 4) {
      __s2 = (char *)puVar2[2];
      iVar1 = strcmp("-",__s2);
      if (iVar1 == 0) goto LAB_00a634c4;
      iVar1 = stat(__s2,(stat *)&stack0xffffffffffffff30);
      if ((iVar1 != 0) || ((local_c0 & 0xf000) == 0x4000)) {
        (*(code *)PTR_free_01769a00)(puVar2);
        if (__dest == (void *)0x0) {
          return 0x2b;
        }
        (*(code *)PTR_free_01769a00)(__dest);
        return 0x2b;
      }
      local_a0 = *param_5 + local_a0;
    }
    else {
      local_a0 = *param_5 + param_4;
    }
    *param_5 = local_a0;
  }
LAB_00a634c4:
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = puVar2;
  }
  *param_1 = puVar2;
  return 0;
}

