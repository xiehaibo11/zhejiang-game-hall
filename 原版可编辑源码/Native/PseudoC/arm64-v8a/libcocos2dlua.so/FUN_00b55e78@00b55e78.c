
undefined8 FUN_00b55e78(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  ASN1_OBJECT *aobj;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  iVar1 = i2d_RSAPublicKey(*(RSA **)(param_2 + 0x20),&local_28);
  if (0 < iVar1) {
    aobj = OBJ_nid2obj(6);
    iVar1 = X509_PUBKEY_set0_param(param_1,aobj,5,(void *)0x0,local_28,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(local_28);
  }
  return 0;
}

