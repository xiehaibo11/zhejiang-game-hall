
int i2o_ECPublicKey(EC_KEY *key,uchar **out)

{
  bool bVar1;
  size_t len;
  size_t sVar2;
  int reason;
  uchar *buf;
  int line;
  
  if (key == (EC_KEY *)0x0) {
    reason = 0x43;
    line = 0x46b;
LAB_00b1bee8:
    ERR_put_error(0x10,0x97,reason,"crypto/ec/ec_asn1.c",line);
  }
  else {
    len = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                             *(point_conversion_form_t *)(key + 0x34),(uchar *)0x0,0,(BN_CTX *)0x0);
    if ((out == (uchar **)0x0) || (len == 0)) goto LAB_00b1bef0;
    buf = *out;
    if (buf == (uchar *)0x0) {
      buf = CRYPTO_malloc((int)len,"crypto/ec/ec_asn1.c",0x477);
      *out = buf;
      if (buf == (uchar *)0x0) {
        reason = 0x41;
        line = 0x478;
        goto LAB_00b1bee8;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    sVar2 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                               *(point_conversion_form_t *)(key + 0x34),buf,len,(BN_CTX *)0x0);
    if (sVar2 != 0) {
      if (!bVar1) {
        *out = *out + len;
      }
      goto LAB_00b1bef0;
    }
    ERR_put_error(0x10,0x97,0x10,"crypto/ec/ec_asn1.c",0x47f);
    if (bVar1) {
      CRYPTO_free(*out);
      len = 0;
      *out = (uchar *)0x0;
      goto LAB_00b1bef0;
    }
  }
  len = 0;
LAB_00b1bef0:
  return (int)len;
}

