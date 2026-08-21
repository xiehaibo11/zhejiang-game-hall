
undefined8 cms_EncryptedContent_init(undefined8 *param_1,long param_2,void *param_3,size_t param_4)

{
  void *__dest;
  ASN1_OBJECT *pAVar1;
  
  param_1[3] = param_2;
  if (param_3 != (void *)0x0) {
    __dest = CRYPTO_malloc((int)param_4,"crypto/cms/cms_enc.c",0xab);
    param_1[4] = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,param_3,param_4);
  }
  param_1[5] = param_4;
  if (param_2 != 0) {
    pAVar1 = OBJ_nid2obj(0x15);
    *param_1 = pAVar1;
  }
  return 1;
}

