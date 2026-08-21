
undefined8 FUN_00135a20(long *param_1,char param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  undefined8 uVar2;
  long lVar3;
  ulong __n;
  
  lVar3 = param_1[4];
  uVar1 = (param_1[5] - lVar3) + (param_1[1] - *param_1);
  if (0x103 < uVar1) {
    uVar1 = 0x104;
  }
  if ((ulong)(param_1[5] - lVar3) < uVar1) {
    uVar2 = FUN_00135af4(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = param_1[4];
    if ((ulong)(param_1[5] - lVar3) < uVar1) {
      return 0;
    }
  }
  if (param_1[3] == 0) {
    return 0;
  }
  if (uVar1 != 0) {
    __n = 0;
    __src = (void *)(param_1[3] + lVar3);
    do {
      if (*(char *)((long)__src + __n) == param_2) {
        memcpy(param_3,__src,__n);
        *(undefined1 *)((long)param_3 + __n) = 0;
        param_1[4] = param_1[4] + __n + 1;
        return 1;
      }
      __n = __n + 1;
    } while (uVar1 != __n);
    return 0;
  }
  return 0;
}

