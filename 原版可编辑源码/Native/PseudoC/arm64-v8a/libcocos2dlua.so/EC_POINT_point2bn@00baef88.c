
BIGNUM * EC_POINT_point2bn(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t form,
                          BIGNUM *param_4,BN_CTX *param_5)

{
  long lVar1;
  BIGNUM *pBVar2;
  uchar *local_18;
  
  lVar1 = EC_POINT_point2buf(param_1,param_2,form,&local_18);
  if (lVar1 == 0) {
    pBVar2 = (BIGNUM *)0x0;
  }
  else {
    pBVar2 = BN_bin2bn(local_18,(int)lVar1,param_4);
    CRYPTO_free(local_18);
  }
  return pBVar2;
}

