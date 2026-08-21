
undefined8 OPENSSL_sk_pop(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1 + -1;
  if (0 < *param_1) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
    *param_1 = iVar1;
    return uVar2;
  }
  return 0;
}

