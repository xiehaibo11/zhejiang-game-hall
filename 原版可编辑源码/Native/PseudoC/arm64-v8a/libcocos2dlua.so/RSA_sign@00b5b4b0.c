
int RSA_sign(int type,uchar *m,uint m_length,uchar *sigret,uint *siglen,RSA *rsa)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  _func_1626 *p_Var4;
  uchar *puVar5;
  uchar *local_50;
  int local_44;
  
  local_44 = 0;
  local_50 = (uchar *)0x0;
  p_Var4 = rsa->meth->rsa_sign;
  if (p_Var4 != (_func_1626 *)0x0) {
    iVar1 = (*p_Var4)(type,m,m_length,sigret,siglen,rsa);
    return iVar1;
  }
  if (type == 0x72) {
    if (m_length != 0x24) {
      ERR_put_error(4,0x75,0x83,"crypto/rsa/rsa_sign.c",0x58);
      return 0;
    }
    local_44 = 0x24;
LAB_00b5b560:
    iVar1 = local_44;
    puVar5 = local_50;
    iVar2 = RSA_size(rsa);
    if (iVar2 + -0xb < iVar1) {
      ERR_put_error(4,0x75,0x70,"crypto/rsa/rsa_sign.c",100);
    }
    else {
      uVar3 = RSA_private_encrypt(iVar1,m,sigret,rsa,1);
      if (0 < (int)uVar3) {
        *siglen = uVar3;
        iVar2 = 1;
        goto LAB_00b5b5c4;
      }
    }
  }
  else {
    iVar2 = FUN_00b5b61c(&local_50,&local_44,type,m,m_length);
    puVar5 = local_50;
    m = local_50;
    iVar1 = local_44;
    if (iVar2 != 0) goto LAB_00b5b560;
  }
  iVar2 = 0;
LAB_00b5b5c4:
  CRYPTO_clear_free(puVar5,(long)iVar1,"crypto/rsa/rsa_sign.c",0x70);
  return iVar2;
}

