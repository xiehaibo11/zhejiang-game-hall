
bool FUN_00b053a4(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 8),
                 *(BIGNUM **)(*(long *)(param_2 + 0x20) + 8));
  if (((iVar2 == 0) &&
      (iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x10),
                      *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x10)), iVar2 == 0)) &&
     ((*(undefined1 **)(param_1 + 0x10) != dhx_asn1_meth ||
      (iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x40),
                      *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x40)), iVar2 == 0)))) {
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x20),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x20));
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

