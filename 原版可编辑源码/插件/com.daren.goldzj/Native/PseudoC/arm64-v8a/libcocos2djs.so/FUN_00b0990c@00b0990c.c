
undefined8 FUN_00b0990c(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  uchar *penc;
  ASN1_OBJECT *aobj;
  EC_KEY *key;
  ASN1_OBJECT *a;
  uchar *local_50;
  int local_44;
  ASN1_OBJECT *local_38;
  
  local_38 = (ASN1_OBJECT *)0x0;
  key = *(EC_KEY **)(param_2 + 0x20);
  iVar1 = FUN_00b0ac90(&local_44,&local_38,key);
                    /* try { // try from 00b0993c to 00c09947 has its CatchHandler @ 00b09a50 */
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xd8,0x10,"crypto/ec/ec_ameth.c",0x43);
  }
  else {
                    /* try { // try from 00b09948 to 00c09a3b has its CatchHandler @ 00b091d8 */
    iVar1 = i2o_ECPublicKey(key,(uchar **)0x0);
    if (iVar1 < 1) {
      penc = (uchar *)0x0;
      a = local_38;
    }
    else {
      penc = CRYPTO_malloc(iVar1,"crypto/ec/ec_ameth.c",0x49);
      a = local_38;
      if ((penc != (uchar *)0x0) &&
         (local_50 = penc, iVar1 = i2o_ECPublicKey(key,&local_50), a = local_38, 0 < iVar1)) {
        aobj = OBJ_nid2obj(0x198);
        a = local_38;
        iVar1 = X509_PUBKEY_set0_param(param_1,aobj,local_44,local_38,penc,iVar1);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    if (local_44 == 6) {
      ASN1_OBJECT_free(a);
    }
    else {
      ASN1_STRING_free((ASN1_STRING *)a);
    }
    CRYPTO_free(penc);
  }
  return 0;
}

