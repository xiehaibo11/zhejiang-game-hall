
undefined8 FUN_00b56000(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  int iVar1;
  ASN1_OBJECT *aobj;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  iVar1 = i2d_RSAPrivateKey(*(RSA **)(param_2 + 0x20),&local_28);
  if (iVar1 < 1) {
    iVar1 = 0x5b;
  }
  else {
    aobj = OBJ_nid2obj(6);
    iVar1 = PKCS8_pkey_set0(param_1,aobj,0,5,(void *)0x0,local_28,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = 0x61;
  }
  ERR_put_error(4,0x8a,0x41,"crypto/rsa/rsa_ameth.c",iVar1);
  return 0;
}

