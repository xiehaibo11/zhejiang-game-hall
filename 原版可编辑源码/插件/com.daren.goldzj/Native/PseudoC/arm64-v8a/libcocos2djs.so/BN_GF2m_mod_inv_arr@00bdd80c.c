
undefined4 BN_GF2m_mod_inv_arr(undefined8 param_1,undefined8 param_2,int *param_3,BN_CTX *param_4)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *a;
  
  BN_CTX_start(param_4);
  a = BN_CTX_get(param_4);
  if (a == (BIGNUM *)0x0) {
LAB_00bdd898:
    uVar2 = 0;
  }
  else {
    BN_set_word(a,0);
    iVar1 = *param_3;
    while (iVar1 != -1) {
      param_3 = param_3 + 1;
      iVar1 = BN_set_bit(a,iVar1);
      if (iVar1 == 0) goto LAB_00bdd898;
      iVar1 = *param_3;
    }
    uVar2 = BN_GF2m_mod_inv(param_1,param_2,a,param_4);
  }
  BN_CTX_end(param_4);
  return uVar2;
}

