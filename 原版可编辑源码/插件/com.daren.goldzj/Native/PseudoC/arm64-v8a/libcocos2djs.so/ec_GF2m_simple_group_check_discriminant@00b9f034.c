
bool ec_GF2m_simple_group_check_discriminant(long param_1,BN_CTX *param_2)

{
  bool bVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BN_CTX *c;
  
  if (param_2 == (BN_CTX *)0x0) {
    c = BN_CTX_new();
    param_2 = c;
    if (c == (BN_CTX *)0x0) {
      ERR_put_error(0x10,0x9f,0x41,"crypto/ec/ec2_smpl.c",0x103);
      bVar1 = false;
      goto LAB_00b9f0b4;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_2);
  pBVar3 = BN_CTX_get(param_2);
  if ((pBVar3 == (BIGNUM *)0x0) ||
     (iVar2 = BN_GF2m_mod_arr(pBVar3,*(undefined8 *)(param_1 + 0x68),param_1 + 0x48), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = BN_is_zero(pBVar3);
    bVar1 = iVar2 == 0;
  }
  BN_CTX_end(param_2);
LAB_00b9f0b4:
  BN_CTX_free(c);
  return bVar1;
}

