
void DH_security_bits(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(BIGNUM **)(param_1 + 0x40) == (BIGNUM *)0x0) {
    iVar1 = (int)*(long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x18) == 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  BN_security_bits(iVar2,iVar1);
  return;
}

