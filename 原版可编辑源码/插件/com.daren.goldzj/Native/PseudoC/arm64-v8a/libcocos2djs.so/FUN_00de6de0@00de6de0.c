
undefined8 FUN_00de6de0(int *param_1,long *param_2)

{
  int iVar1;
  void *__s;
  void *__src;
  long lVar2;
  int iVar3;
  
  lVar2 = *param_2;
  iVar1 = param_1[3];
  __src = *(void **)(param_1 + 0x26);
  iVar3 = param_1[4];
  __s = (void *)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x3c) * (long)param_1[2]);
  if (__src == (void *)0x0) {
    if ((*(long *)(lVar2 + 0x28) != 0) && (0 < iVar3)) {
      do {
        memset(__s,0xff,(long)iVar1);
        iVar3 = iVar3 + -1;
        __s = (void *)((long)__s + (long)*(int *)(lVar2 + 0x3c));
      } while (iVar3 != 0);
    }
  }
  else if (0 < iVar3) {
    do {
      memcpy(__s,__src,(long)iVar1);
      iVar3 = iVar3 + -1;
      __src = (void *)((long)__src + (long)*param_1);
      __s = (void *)((long)__s + (long)*(int *)(lVar2 + 0x3c));
    } while (iVar3 != 0);
  }
  return 0;
}

