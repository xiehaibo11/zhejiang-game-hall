
undefined8 OPENSSL_sk_delete(int *param_1,uint param_2)

{
  undefined8 *__dest;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (-1 < (int)param_2)) {
    iVar1 = *param_1;
    if ((int)param_2 < iVar1) {
      __dest = (undefined8 *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 8);
      uVar2 = *__dest;
      if (iVar1 - 1U != param_2) {
        memmove(__dest,(void *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 8 + 8),
                -(ulong)(iVar1 + ~param_2 >> 0x1f) & 0xfffffff800000000 |
                (ulong)(iVar1 + ~param_2) << 3);
        iVar1 = *param_1;
      }
      *param_1 = iVar1 + -1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

