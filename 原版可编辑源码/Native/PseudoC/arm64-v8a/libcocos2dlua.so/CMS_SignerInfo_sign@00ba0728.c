
int CMS_SignerInfo_sign(CMS_SignerInfo *si)

{
  int iVar1;
  char *name;
  EVP_MD *type;
  EVP_PKEY_CTX *pEVar2;
  ASN1_TIME *a;
  int reason;
  int line;
  EVP_MD_CTX *ctx;
  int local_48 [2];
  uchar *local_40;
  EVP_PKEY_CTX *local_38;
  
  ctx = *(EVP_MD_CTX **)(si + 0x48);
  local_40 = (uchar *)0x0;
                    /* try { // try from 00ba0750 to 00ca0757 has its CatchHandler @ 00ba0ae8 */
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(si + 0x10));
  name = OBJ_nid2sn(iVar1);
  type = EVP_get_digestbyname(name);
  if (type == (EVP_MD *)0x0) {
    return 0;
  }
                    /* try { // try from 00ba076c to 00ca077f has its CatchHandler @ 00ba0a74 */
  iVar1 = CMS_signed_get_attr_by_NID(si,0x34,-1);
  if (iVar1 < 0) {
                    /* try { // try from 00ba078c to 00ca085f has its CatchHandler @ 00ba0ae8 */
    a = X509_gmtime_adj((ASN1_TIME *)0x0,0);
    if ((a != (ASN1_TIME *)0x0) &&
       (iVar1 = CMS_signed_add1_attr_by_NID(si,0x34,a->type,a,-1), 0 < iVar1)) {
      ASN1_TIME_free(a);
      pEVar2 = *(EVP_PKEY_CTX **)(si + 0x50);
      goto joined_r0x00ba07c8;
    }
    ASN1_TIME_free(a);
                    /* try { // try from 00ba0914 to 00ca0973 has its CatchHandler @ 00b9fb6c */
    iVar1 = 0x67;
    reason = 0x41;
    line = 0x18c;
  }
  else {
    pEVar2 = *(EVP_PKEY_CTX **)(si + 0x50);
joined_r0x00ba07c8:
    if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
      EVP_MD_CTX_reset(ctx);
      iVar1 = EVP_DigestSignInit(ctx,&local_38,type,(ENGINE *)0x0,*(EVP_PKEY **)(si + 0x40));
      pEVar2 = local_38;
      if (iVar1 < 1) goto LAB_00ba0930;
    }
    local_38 = pEVar2;
    iVar1 = EVP_PKEY_CTX_ctrl(local_38,-1,8,0xb,0,si);
    if (iVar1 < 1) {
                    /* try { // try from 00ba08fc to 00ca08ff has its CatchHandler @ 00ba0990 */
      iVar1 = 0x97;
      reason = 0x6e;
      line = 0x297;
                    /* try { // try from 00ba0908 to 00ca0913 has its CatchHandler @ 00ba0a4c */
    }
    else {
      iVar1 = ASN1_item_i2d(*(ASN1_VALUE **)(si + 0x18),&local_40,
                            (ASN1_ITEM *)CMS_Attributes_Sign_it);
      if (((local_40 == (uchar *)0x0) ||
          (iVar1 = EVP_DigestUpdate(ctx,local_40,(long)iVar1), iVar1 < 1)) ||
         (iVar1 = EVP_DigestSignFinal(ctx,(uchar *)0x0,(size_t *)local_48), iVar1 < 1))
      goto LAB_00ba0930;
                    /* try { // try from 00ba0874 to 00ca088f has its CatchHandler @ 00ba09a0 */
      CRYPTO_free(local_40);
      local_40 = CRYPTO_malloc(local_48[0],"crypto/cms/cms_sd.c",0x2a4);
      if ((local_40 == (uchar *)0x0) ||
         (iVar1 = EVP_DigestSignFinal(ctx,local_40,(size_t *)local_48), iVar1 < 1))
      goto LAB_00ba0930;
                    /* try { // try from 00ba08b8 to 00ca08bf has its CatchHandler @ 00ba09f0 */
      iVar1 = EVP_PKEY_CTX_ctrl(local_38,-1,8,0xb,1,si);
                    /* try { // try from 00ba08c8 to 00ca08f7 has its CatchHandler @ 00ba0a4c */
      if (0 < iVar1) {
        EVP_MD_CTX_reset(ctx);
        ASN1_STRING_set0(*(ASN1_STRING **)(si + 0x28),local_40,local_48[0]);
        return 1;
      }
      iVar1 = 0x97;
                    /* try { // try from 00ba0974 to 00ca097b has its CatchHandler @ 00ba0980 */
      reason = 0x6e;
      line = 0x2ac;
                    /* catch() { ... } // from try @ 00ba0378 with catch @ 00ba097c
                       try { // try from 00ba097c to 00ca0b17 has its CatchHandler @ 00b9fb6c */
    }
  }
  ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_sd.c",line);
LAB_00ba0930:
  CRYPTO_free(local_40);
  EVP_MD_CTX_reset(ctx);
  return 0;
}

