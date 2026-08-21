
ulong FUN_00b38354(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_01d3aca0 != 0) {
    iVar1 = OPENSSL_sk_num(DAT_01d3aca0);
    if (*param_1 < iVar1) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(DAT_01d3aca0);
      uVar3 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 2));
      goto LAB_00b383a8;
    }
  }
  uVar3 = OPENSSL_LH_strhash(*(undefined8 *)(param_1 + 2));
LAB_00b383a8:
  return uVar3 ^ (long)*param_1;
}

