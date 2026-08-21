
size_t EC_POINT_point2buf(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t param_3,
                         undefined8 *param_4,BN_CTX *param_5)

{
  size_t len;
  uchar *buf;
  size_t sVar1;
  
  len = EC_POINT_point2oct(param_1,param_2,param_3,(uchar *)0x0,0,(BN_CTX *)0x0);
  sVar1 = 0;
  if ((len != 0) &&
     (buf = CRYPTO_malloc((int)len,"crypto/ec/ec_oct.c",0x9b), sVar1 = 0, buf != (uchar *)0x0)) {
    sVar1 = EC_POINT_point2oct(param_1,param_2,param_3,buf,len,param_5);
    if (sVar1 == 0) {
      CRYPTO_free(buf);
      sVar1 = 0;
    }
    else {
      *param_4 = buf;
    }
  }
  return sVar1;
}

