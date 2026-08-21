
undefined8 FUN_00b14d04(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 8),
                 *(BIGNUM **)(*(long *)(param_2 + 0x20) + 8));
  if (((iVar1 == 0) &&
      (iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x10),
                      *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x10)), iVar1 == 0)) &&
     ((*(undefined1 **)(param_1 + 0x10) != dhx_asn1_meth ||
      (iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x40),
                      *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x40)), iVar1 == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

