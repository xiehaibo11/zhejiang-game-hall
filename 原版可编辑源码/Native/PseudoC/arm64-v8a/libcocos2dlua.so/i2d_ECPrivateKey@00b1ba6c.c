
int i2d_ECPrivateKey(EC_KEY *key,uchar **out)

{
  int iVar1;
  ASN1_VALUE *val;
  long lVar2;
  long lVar3;
  ASN1_BIT_STRING *pAVar4;
  ASN1_STRING *str;
  int line;
  uint uVar5;
  void *local_40;
  void *local_38;
  
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  if (((key == (EC_KEY *)0x0) || (*(long *)(key + 0x18) == 0)) ||
     ((((byte)key[0x30] >> 1 & 1) == 0 && (*(long *)(key + 0x20) == 0)))) {
    ERR_put_error(0x10,0xc0,0x43,"crypto/ec/ec_asn1.c",0x3ec);
    iVar1 = 0;
    lVar2 = 0;
    val = (ASN1_VALUE *)0x0;
    goto LAB_00b1bbc0;
  }
  val = ASN1_item_new((ASN1_ITEM *)&DAT_016aff88);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x10,0xc0,0x41,"crypto/ec/ec_asn1.c",0x3f1);
    iVar1 = 0;
    lVar2 = 0;
    goto LAB_00b1bbc0;
  }
  *(long *)val = (long)*(int *)(key + 0x10);
  lVar2 = EC_KEY_priv2buf(key,&local_38);
  if (lVar2 == 0) {
    iVar1 = 0x10;
    line = 0x3fa;
  }
  else {
    ASN1_STRING_set0(*(ASN1_STRING **)(val + 8),local_38,(int)lVar2);
    local_38 = (void *)0x0;
    uVar5 = *(uint *)(key + 0x30);
    if ((uVar5 & 1) == 0) {
      lVar3 = EC_GROUP_get_ecpkparameters(*(undefined8 *)(key + 0x18),*(undefined8 *)(val + 0x10));
      *(long *)(val + 0x10) = lVar3;
      if (lVar3 == 0) {
        iVar1 = 0x10;
        line = 0x405;
        goto LAB_00b1bca8;
      }
      uVar5 = *(uint *)(key + 0x30);
    }
    if ((uVar5 >> 1 & 1) != 0) {
LAB_00b1bb5c:
      iVar1 = ASN1_item_i2d(val,out,(ASN1_ITEM *)&DAT_016aff88);
      if (iVar1 == 0) {
        ERR_put_error(0x10,0xc0,0x10,"crypto/ec/ec_asn1.c",0x41f);
      }
      goto LAB_00b1bbc0;
    }
    pAVar4 = ASN1_BIT_STRING_new();
    *(ASN1_BIT_STRING **)(val + 0x18) = pAVar4;
    if (pAVar4 == (ASN1_BIT_STRING *)0x0) {
      iVar1 = 0x41;
      line = 0x40d;
    }
    else {
      lVar3 = EC_KEY_key2buf(key,*(undefined4 *)(key + 0x34),&local_40,0);
      if (lVar3 != 0) {
        str = *(ASN1_STRING **)(val + 0x18);
        str->flags = str->flags & 0xfffffffffffffff0U | 8;
        ASN1_STRING_set0(str,local_40,(int)lVar3);
        local_40 = (void *)0x0;
        goto LAB_00b1bb5c;
      }
      iVar1 = 0x10;
      line = 0x414;
    }
  }
LAB_00b1bca8:
  ERR_put_error(0x10,0xc0,iVar1,"crypto/ec/ec_asn1.c",line);
  iVar1 = 0;
LAB_00b1bbc0:
  CRYPTO_clear_free(local_38,lVar2,"crypto/ec/ec_asn1.c",0x424);
  CRYPTO_free(local_40);
  ASN1_item_free(val,(ASN1_ITEM *)&DAT_016aff88);
  return iVar1;
}

