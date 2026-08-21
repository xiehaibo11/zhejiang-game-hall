
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
  
  if (*param_2 == 1) {
    lVar8 = *(long *)(param_2 + 2);
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x18);
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
        pEVar4 = (EVP_CIPHER *)EVP_aes_128_wrap();
      }
      else if (iVar2 < 0x19) {
        pEVar4 = (EVP_CIPHER *)EVP_aes_192_wrap();
      }
      else {
        pEVar4 = (EVP_CIPHER *)EVP_aes_256_wrap();
      }
      iVar2 = EVP_EncryptInit_ex(ctx,pEVar4,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      pEVar4 = EVP_CIPHER_CTX_cipher(ctx);
      uVar5 = EVP_CIPHER_flags(pEVar4);
      bVar1 = (uVar5 & 0xf0007) == 0x10002;
      if (!bVar1) {
        return (ulong)bVar1;
      }
    }
    piVar10 = *(int **)(lVar8 + 8);
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
             (iVar3 = FUN_00b8f5b4(&local_48,local_58,*(undefined8 *)(lVar11 + 0x20),
                                   *(undefined8 *)(lVar11 + 0x28),lVar8,1), iVar3 == 0))
          goto LAB_00b8f938;
          ASN1_STRING_set0(*(ASN1_STRING **)(lVar7 + 8),local_48,local_58[0]);
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(uVar9);
        } while (iVar2 < iVar3);
      }
      uVar5 = 1;
    }
  }
  else {
    ERR_put_error(0x2e,0xb2,0xb5,"crypto/cms/cms_kari.c",0x175);
LAB_00b8f938:
    uVar5 = 0;
  }
  return uVar5;
}

