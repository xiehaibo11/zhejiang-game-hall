
int CMS_SignerInfo_verify(CMS_SignerInfo *si)

{
  int iVar1;
  char *name;
  EVP_MD *type;
  int line;
  long lVar2;
  code *pcVar3;
  EVP_MD_CTX *ctx;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  if (*(long *)(si + 0x40) == 0) {
    ERR_put_error(0x2e,0x98,0x86,"crypto/cms/cms_sd.c",0x2c5);
    return -1;
  }
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(si + 0x10));
                    /* try { // try from 00ba11e8 to 00ca11f7 has its CatchHandler @ 00ba1340 */
  name = OBJ_nid2sn(iVar1);
  type = EVP_get_digestbyname(name);
  if (type == (EVP_MD *)0x0) {
    return -1;
  }
  ctx = *(EVP_MD_CTX **)(si + 0x48);
  if (ctx == (EVP_MD_CTX *)0x0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    *(EVP_MD_CTX **)(si + 0x48) = ctx;
  }
  iVar1 = EVP_DigestVerifyInit
                    (ctx,(EVP_PKEY_CTX **)(si + 0x50),type,(ENGINE *)0x0,*(EVP_PKEY **)(si + 0x40));
  if (0 < iVar1) {
    lVar2 = *(long *)(*(long *)(si + 0x40) + 0x10);
    if ((lVar2 == 0) || (pcVar3 = *(code **)(lVar2 + 0xb0), pcVar3 == (code *)0x0)) {
LAB_00ba12a0:
      iVar1 = ASN1_item_i2d(*(ASN1_VALUE **)(si + 0x18),&local_28,
                            (ASN1_ITEM *)CMS_Attributes_Verify_it);
      if (local_28 != (uchar *)0x0) {
                    /* try { // try from 00ba12bc to 00ca12c3 has its CatchHandler @ 00ba1334 */
                    /* try { // try from 00ba12c4 to 00ca12eb has its CatchHandler @ 00ba0f9c */
        iVar1 = EVP_DigestUpdate(ctx,local_28,(long)iVar1);
        CRYPTO_free(local_28);
        if (0 < iVar1) {
                    /* try { // try from 00ba12ec to 00ca12f3 has its CatchHandler @ 00ba1338 */
                    /* try { // try from 00ba12f4 to 00ca130b has its CatchHandler @ 00ba0f9c */
          iVar1 = EVP_DigestVerifyFinal
                            (ctx,*(uchar **)(*(int **)(si + 0x28) + 2),(long)**(int **)(si + 0x28));
          if (iVar1 < 1) {
                    /* try { // try from 00ba130c to 00ca131b has its CatchHandler @ 00ba133c */
                    /* try { // try from 00ba131c to 00ca1323 has its CatchHandler @ 00ba0f9c */
                    /* try { // try from 00ba1324 to 00ca1333 has its CatchHandler @ 00ba1334 */
            ERR_put_error(0x2e,0x98,0x9e,"crypto/cms/cms_sd.c",0x2e2);
          }
          goto LAB_00ba134c;
        }
      }
    }
    else {
      iVar1 = (*pcVar3)(*(long *)(si + 0x40),5,1,si);
      if (iVar1 == -2) {
        iVar1 = 0x7d;
        line = 0xd2;
      }
      else {
        if (0 < iVar1) goto LAB_00ba12a0;
                    /* catch() { ... } // from try @ 00ba12bc with catch @ 00ba1334
                       catch() { ... } // from try @ 00ba1324 with catch @ 00ba1334
                       try { // try from 00ba1334 to 00ca138f has its CatchHandler @ 00ba0f9c */
                    /* catch() { ... } // from try @ 00ba12ec with catch @ 00ba1338 */
                    /* catch() { ... } // from try @ 00ba1154 with catch @ 00ba133c
                       catch() { ... } // from try @ 00ba130c with catch @ 00ba133c */
        iVar1 = 0x6f;
                    /* catch() { ... } // from try @ 00ba11e8 with catch @ 00ba1340 */
        line = 0xd6;
      }
                    /* catch() { ... } // from try @ 00ba1184 with catch @ 00ba1344 */
      ERR_put_error(0x2e,0xaa,iVar1,"crypto/cms/cms_sd.c",line);
    }
  }
  iVar1 = -1;
LAB_00ba134c:
  EVP_MD_CTX_reset(ctx);
  return iVar1;
}

