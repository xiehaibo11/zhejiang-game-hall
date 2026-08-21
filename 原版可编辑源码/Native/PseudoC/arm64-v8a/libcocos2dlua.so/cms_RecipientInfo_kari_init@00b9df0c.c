
undefined8
cms_RecipientInfo_kari_init(undefined4 *param_1,undefined8 param_2,EVP_PKEY *param_3,uint param_4)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_VALUE *val;
  undefined4 *puVar3;
  undefined8 uVar4;
  ASN1_VALUE *pAVar5;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *local_38;
  
  pAVar2 = ASN1_item_new((ASN1_ITEM *)CMS_KeyAgreeRecipientInfo_it);
                    /* try { // try from 00b9df3c to 00c9df43 has its CatchHandler @ 00b9e1b0 */
  *(ASN1_VALUE **)(param_1 + 2) = pAVar2;
  if (pAVar2 != (ASN1_VALUE *)0x0) {
    *param_1 = 1;
    *(undefined8 *)pAVar2 = 3;
                    /* try { // try from 00b9df60 to 00c9df67 has its CatchHandler @ 00b9e1ac */
    val = ASN1_item_new((ASN1_ITEM *)CMS_RecipientEncryptedKey_it);
    iVar1 = OPENSSL_sk_push(*(undefined8 *)(pAVar2 + 0x20),val);
    if (iVar1 == 0) {
      ASN1_item_free(val,(ASN1_ITEM *)CMS_RecipientEncryptedKey_it);
                    /* try { // try from 00b9dfa8 to 00c9dfaf has its CatchHandler @ 00b9e1a4 */
    }
    else {
      puVar3 = *(undefined4 **)val;
      if ((param_4 >> 0x10 & 1) == 0) {
                    /* try { // try from 00b9df84 to 00c9df8b has its CatchHandler @ 00b9e1a8 */
        *puVar3 = 0;
        uVar4 = cms_set1_ias(puVar3 + 2,param_2);
        iVar1 = (int)uVar4;
      }
      else {
        *puVar3 = 1;
        pAVar5 = ASN1_item_new((ASN1_ITEM *)CMS_RecipientKeyIdentifier_it);
        *(ASN1_VALUE **)(*(long *)val + 8) = pAVar5;
                    /* try { // try from 00b9dfcc to 00c9dfd3 has its CatchHandler @ 00b9e1a0 */
        if (*(long *)(*(long *)val + 8) == 0) {
          return 0;
        }
        uVar4 = cms_set1_keyid(*(long *)(*(long *)val + 8),param_2);
        iVar1 = (int)uVar4;
      }
      if (iVar1 == 0) {
        return uVar4;
      }
      local_38 = (EVP_PKEY *)0x0;
      ctx = EVP_PKEY_CTX_new(param_3,(ENGINE *)0x0);
                    /* try { // try from 00b9dff0 to 00c9dff7 has its CatchHandler @ 00b9e19c */
                    /* try { // try from 00b9e014 to 00c9e01b has its CatchHandler @ 00b9e198 */
      if (((ctx != (EVP_PKEY_CTX *)0x0) && (iVar1 = EVP_PKEY_keygen_init(ctx), 0 < iVar1)) &&
         (iVar1 = EVP_PKEY_keygen(ctx,&local_38), 0 < iVar1)) {
        EVP_PKEY_CTX_free(ctx);
        ctx = EVP_PKEY_CTX_new(local_38,(ENGINE *)0x0);
                    /* try { // try from 00b9e038 to 00c9e03f has its CatchHandler @ 00b9e194 */
        if ((ctx != (EVP_PKEY_CTX *)0x0) && (iVar1 = EVP_PKEY_derive_init(ctx), 0 < iVar1)) {
          *(EVP_PKEY_CTX **)(pAVar2 + 0x28) = ctx;
          EVP_PKEY_free(local_38);
          EVP_PKEY_up_ref(param_3);
                    /* try { // try from 00b9e05c to 00c9e063 has its CatchHandler @ 00b9e190 */
          *(EVP_PKEY **)(val + 0x10) = param_3;
          return 1;
        }
      }
      EVP_PKEY_CTX_free(ctx);
      EVP_PKEY_free(local_38);
    }
  }
                    /* try { // try from 00b9e080 to 00c9e087 has its CatchHandler @ 00b9e18c */
  return 0;
}

