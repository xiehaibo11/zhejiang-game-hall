
int CMS_add0_cert(CMS_ContentInfo *cms,X509 *cert)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CMS_CertificateChoices *pCVar4;
  int line;
  undefined8 *puVar5;
  
                    /* try { // try from 00b9ee18 to 00c9ee1f has its CatchHandler @ 00b9ef14 */
                    /* try { // try from 00b9ee20 to 00c9ee43 has its CatchHandler @ 00b9edb0 */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    puVar5 = *(undefined8 **)(*(long *)(cms + 8) + 8);
    if (puVar5 != (undefined8 *)0x0) goto LAB_00b9ee60;
  }
  else {
                    /* try { // try from 00b9ee44 to 00c9ee4f has its CatchHandler @ 00b9ef14 */
    if (iVar1 == 0x16) {
      puVar5 = (undefined8 *)(*(long *)(cms + 8) + 0x18);
                    /* try { // try from 00b9ee50 to 00c9ee77 has its CatchHandler @ 00b9edb0 */
LAB_00b9ee60:
      iVar1 = OPENSSL_sk_num(*puVar5);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
                    /* try { // try from 00b9ee78 to 00c9ee7f has its CatchHandler @ 00b9ef10 */
          piVar3 = (int *)OPENSSL_sk_value(*puVar5,iVar1);
                    /* try { // try from 00b9ee80 to 00c9ee9f has its CatchHandler @ 00b9edb0 */
          if ((*piVar3 == 0) && (iVar2 = X509_cmp(*(X509 **)(piVar3 + 2),cert), iVar2 == 0)) {
            iVar1 = 0xa4;
            iVar2 = 0xaf;
            line = 0x18a;
            goto LAB_00b9eefc;
          }
          iVar1 = iVar1 + 1;
                    /* try { // try from 00b9eea0 to 00c9eea7 has its CatchHandler @ 00b9ef10 */
          iVar2 = OPENSSL_sk_num(*puVar5);
                    /* try { // try from 00b9eea8 to 00c9eec7 has its CatchHandler @ 00b9edb0 */
        } while (iVar1 < iVar2);
      }
      pCVar4 = CMS_add0_CertificateChoices(cms);
      if (pCVar4 == (CMS_CertificateChoices *)0x0) {
        return 0;
      }
      *(undefined4 *)pCVar4 = 0;
      *(X509 **)(pCVar4 + 8) = cert;
      return 1;
    }
                    /* try { // try from 00b9eec8 to 00c9eed3 has its CatchHandler @ 00b9ef10 */
                    /* try { // try from 00b9eed4 to 00c9ef17 has its CatchHandler @ 00b9edb0 */
    iVar1 = 0x80;
    iVar2 = 0x98;
    line = 0x162;
LAB_00b9eefc:
    ERR_put_error(0x2e,iVar1,iVar2,"crypto/cms/cms_lib.c",line);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9ee78 with catch @ 00b9ef10
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9eea0 with catch @ 00b9ef10
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9eec8 with catch @ 00b9ef10
                        */
  return 0;
}

