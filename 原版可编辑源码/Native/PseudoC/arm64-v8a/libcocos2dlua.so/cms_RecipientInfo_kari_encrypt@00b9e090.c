
ulong cms_RecipientInfo_kari_encrypt(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  EVP_CIPHER *pEVar4;
  ulong uVar5;
  ASN1_VALUE *pAVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  EVP_CIPHER_CTX *ctx;
  int *piVar10;
  EVP_CIPHER *cipher;
  long lVar11;
  int local_58 [2];
  void *local_48;
  
                    /* try { // try from 00b9e0a4 to 00c9e0ab has its CatchHandler @ 00b9e188 */
  if (*param_2 == 1) {
    lVar8 = *(long *)(param_2 + 2);
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x18);
                    /* try { // try from 00b9e0c8 to 00c9e0cf has its CatchHandler @ 00b9e184 */
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    ctx = *(EVP_CIPHER_CTX **)(lVar8 + 0x30);
    cipher = *(EVP_CIPHER **)(lVar11 + 0x18);
    iVar2 = EVP_CIPHER_key_length(cipher);
    pEVar4 = EVP_CIPHER_CTX_cipher(ctx);
    if (pEVar4 == (EVP_CIPHER *)0x0) {
      iVar3 = EVP_CIPHER_type(cipher);
      if (iVar3 == 0x2c) {
        pEVar4 = (EVP_CIPHER *)EVP_des_ede3_wrap();
      }
      else if (iVar2 < 0x11) {
                    /* catch() { ... } // from try @ 00b9e134 with catch @ 00b9e178 */
        pEVar4 = (EVP_CIPHER *)EVP_aes_128_wrap();
                    /* catch() { ... } // from try @ 00b9e110 with catch @ 00b9e17c */
      }
      else {
                    /* catch() { ... } // from try @ 00b9e0ec with catch @ 00b9e180 */
                    /* catch() { ... } // from try @ 00b9e0c8 with catch @ 00b9e184 */
        if (iVar2 < 0x19) {
                    /* catch() { ... } // from try @ 00b9e0a4 with catch @ 00b9e188 */
          pEVar4 = (EVP_CIPHER *)EVP_aes_192_wrap();
                    /* catch() { ... } // from try @ 00b9e080 with catch @ 00b9e18c */
        }
        else {
                    /* catch() { ... } // from try @ 00b9e05c with catch @ 00b9e190 */
          pEVar4 = (EVP_CIPHER *)EVP_aes_256_wrap();
        }
      }
                    /* catch() { ... } // from try @ 00b9e038 with catch @ 00b9e194 */
                    /* catch() { ... } // from try @ 00b9e014 with catch @ 00b9e198 */
                    /* catch() { ... } // from try @ 00b9dff0 with catch @ 00b9e19c */
                    /* catch() { ... } // from try @ 00b9dfcc with catch @ 00b9e1a0 */
                    /* catch() { ... } // from try @ 00b9dfa8 with catch @ 00b9e1a4 */
                    /* catch() { ... } // from try @ 00b9df84 with catch @ 00b9e1a8 */
      iVar2 = EVP_EncryptInit_ex(ctx,pEVar4,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
                    /* catch() { ... } // from try @ 00b9df60 with catch @ 00b9e1ac */
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
                    /* try { // try from 00b9e0ec to 00c9e0f3 has its CatchHandler @ 00b9e180 */
      pEVar4 = EVP_CIPHER_CTX_cipher(ctx);
      uVar5 = EVP_CIPHER_flags(pEVar4);
      bVar1 = (uVar5 & 0xf0007) == 0x10002;
                    /* try { // try from 00b9e110 to 00c9e117 has its CatchHandler @ 00b9e17c */
      if (!bVar1) {
        return (ulong)bVar1;
      }
    }
                    /* catch() { ... } // from try @ 00b9df3c with catch @ 00b9e1b0 */
    piVar10 = *(int **)(lVar8 + 8);
                    /* catch() { ... } // from try @ 00b9def4 with catch @ 00b9e1b4 */
                    /* catch() { ... } // from try @ 00b9ded0 with catch @ 00b9e1b8 */
                    /* catch() { ... } // from try @ 00b9deac with catch @ 00b9e1bc */
    if (*piVar10 == -1) {
      *piVar10 = 2;
      pAVar6 = ASN1_item_new((ASN1_ITEM *)CMS_OriginatorPublicKey_it);
      *(ASN1_VALUE **)(piVar10 + 2) = pAVar6;
      if (pAVar6 == (ASN1_VALUE *)0x0) {
        return 0;
      }
    }
    uVar5 = cms_env_asn1_ctrl(param_2,0);
    if ((int)uVar5 != 0) {
      iVar2 = OPENSSL_sk_num(uVar9);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          lVar7 = OPENSSL_sk_value(uVar9,iVar2);
          iVar3 = EVP_PKEY_derive_set_peer
                            (*(EVP_PKEY_CTX **)(lVar8 + 0x28),*(EVP_PKEY **)(lVar7 + 0x10));
          if ((iVar3 < 1) ||
             (iVar3 = FUN_00b9ddb4(&local_48,local_58,*(undefined8 *)(lVar11 + 0x20),
                                   *(undefined8 *)(lVar11 + 0x28),lVar8,1), iVar3 == 0))
          goto LAB_00b9e138;
          ASN1_STRING_set0(*(ASN1_STRING **)(lVar7 + 8),local_48,local_58[0]);
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(uVar9);
        } while (iVar2 < iVar3);
      }
      uVar5 = 1;
    }
  }
  else {
                    /* try { // try from 00b9e134 to 00c9e13b has its CatchHandler @ 00b9e178 */
    ERR_put_error(0x2e,0xb2,0xb5,"crypto/cms/cms_kari.c",0x175);
LAB_00b9e138:
    uVar5 = 0;
  }
                    /* try { // try from 00b9e13c to 00c9e1d7 has its CatchHandler @ 00b9de60 */
  return uVar5;
}

