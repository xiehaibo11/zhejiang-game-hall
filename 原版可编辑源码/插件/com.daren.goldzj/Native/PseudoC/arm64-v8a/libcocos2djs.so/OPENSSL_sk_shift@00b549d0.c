
undefined8 OPENSSL_sk_shift(int *param_1)

{
  uint uVar1;
  undefined8 *__dest;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *param_1 - 1;
    if (0 < *param_1) {
      __dest = *(undefined8 **)(param_1 + 2);
      uVar3 = *__dest;
      iVar2 = 0;
      if (uVar1 != 0) {
        memmove(__dest,__dest + 1,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
        iVar2 = *param_1 + -1;
      }
      *param_1 = iVar2;
      return uVar3;
    }
  }
  return 0;
}

