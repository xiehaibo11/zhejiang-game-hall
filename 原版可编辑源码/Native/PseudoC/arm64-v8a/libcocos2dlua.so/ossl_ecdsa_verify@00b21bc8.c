
int ossl_ecdsa_verify(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,
                     EC_KEY *param_6)

{
  int iVar1;
  int iVar2;
  ECDSA_SIG *pEVar3;
  uchar *local_58;
  uchar *puStack_50;
  ECDSA_SIG *local_48;
  
  local_58 = (uchar *)0x0;
  puStack_50 = param_4;
  local_48 = ECDSA_SIG_new();
  if (local_48 == (ECDSA_SIG *)0x0) {
    iVar2 = -1;
  }
  else {
    pEVar3 = d2i_ECDSA_SIG(&local_48,&puStack_50,(long)param_5);
    if (pEVar3 == (ECDSA_SIG *)0x0) {
      iVar1 = -1;
      iVar2 = -1;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_48,&local_58);
      if (iVar1 == param_5) {
        iVar2 = memcmp(param_4,local_58,(long)param_5);
        iVar1 = param_5;
        if (iVar2 == 0) {
          iVar2 = ECDSA_do_verify(param_2,param_3,local_48,param_6);
        }
        else {
          iVar2 = -1;
        }
      }
      else {
        iVar2 = -1;
      }
    }
    CRYPTO_clear_free(local_58,(long)iVar1,"crypto/ec/ecdsa_ossl.c",0x153);
    ECDSA_SIG_free(local_48);
  }
  return iVar2;
}

