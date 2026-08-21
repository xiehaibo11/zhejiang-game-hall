
undefined8 FUN_00e13ae8(long *param_1)

{
  void *pvVar1;
  void *__s;
  uint uVar2;
  long lVar3;
  size_t __n;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 << 1 == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((uVar2 & 0x7fffffff) >> 0x1a != 0) {
      param_1[8] = 0;
      return 10;
    }
    __n = (ulong)(uVar2 << 1) << 4;
    __s = (void *)(**(code **)(*param_1 + 8))(*param_1,__n);
    if (__s == (void *)0x0) {
      param_1[8] = 0;
      return 0x40;
    }
    memset(__s,0,__n);
    uVar2 = *(uint *)(param_1 + 1);
  }
  pvVar1 = (void *)((long)__s + (ulong)uVar2 * 0x10);
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  param_1[8] = (long)__s;
  param_1[9] = (long)pvVar1;
  lVar3 = (long)*(short *)((long)param_1 + 0x1a) * 0x10;
  param_1[0xd] = param_1[4] + lVar3;
  param_1[0xe] = param_1[5] + (long)*(short *)((long)param_1 + 0x1a);
  param_1[0x11] = (long)((long)__s + lVar3);
  param_1[0x12] = (long)((long)pvVar1 + lVar3);
  param_1[0xf] = param_1[6] + (long)(short)param_1[3] * 2;
  return 0;
}

