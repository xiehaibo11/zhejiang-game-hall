
bool FUN_00b19030(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar *penc;
  ASN1_OBJECT *aobj;
  void *local_90;
  int local_84;
  EC_KEY aEStack_80 [80];
  uchar *local_28;
  
  memcpy(aEStack_80,*(void **)(param_2 + 0x20),0x50);
  iVar1 = FUN_00b1a110(&local_84,&local_90,aEStack_80);
  if (iVar1 == 0) {
    iVar1 = 0x8e;
    iVar3 = 0xe2;
  }
  else {
    uVar2 = EC_KEY_get_enc_flags(aEStack_80);
    EC_KEY_set_enc_flags(aEStack_80,uVar2 | 1);
    iVar1 = i2d_ECPrivateKey(aEStack_80,(uchar **)0x0);
    if (iVar1 == 0) {
      iVar1 = 0x10;
      iVar3 = 0xf1;
    }
    else {
      penc = CRYPTO_malloc(iVar1,"crypto/ec/ec_ameth.c",0xf4);
      if (penc == (uchar *)0x0) {
        iVar1 = 0x41;
        iVar3 = 0xf6;
      }
      else {
        local_28 = penc;
        iVar3 = i2d_ECPrivateKey(aEStack_80,&local_28);
        if (iVar3 != 0) {
          aobj = OBJ_nid2obj(0x198);
          iVar1 = PKCS8_pkey_set0(param_1,aobj,0,local_84,local_90,penc,iVar1);
          return iVar1 != 0;
        }
        CRYPTO_free(penc);
        iVar1 = 0x10;
        iVar3 = 0xfc;
      }
    }
  }
  ERR_put_error(0x10,0xd6,iVar1,"crypto/ec/ec_ameth.c",iVar3);
  return false;
}

