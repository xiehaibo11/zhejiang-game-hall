
X509_ALGOR *
PKCS5_pbe2_set_iv(EVP_CIPHER *cipher,int iter,uchar *salt,int saltlen,uchar *aiv,int prf_nid)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *pAVar3;
  ASN1_VALUE *val;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER_CTX *ctx;
  X509_ALGOR *pXVar5;
  long lVar6;
  undefined8 *puVar7;
  uchar auStack_70 [16];
  int local_54;
  
  local_54 = prf_nid;
  iVar1 = EVP_CIPHER_type(cipher);
  if (iVar1 == 0) {
    ERR_put_error(0xd,0xa7,0x6c,"crypto/asn1/p5_pbev2.c",0x36);
    pXVar5 = (X509_ALGOR *)0x0;
    ctx = (EVP_CIPHER_CTX *)0x0;
    val = (ASN1_VALUE *)0x0;
    goto LAB_00bda95c;
  }
  pAVar3 = OBJ_nid2obj(iVar1);
  val = ASN1_item_new((ASN1_ITEM *)PBE2PARAM_it);
  if (val == (ASN1_VALUE *)0x0) {
LAB_00bda938:
    pXVar5 = (X509_ALGOR *)0x0;
LAB_00bda93c:
    ERR_put_error(0xd,0xa7,0x41,"crypto/asn1/p5_pbev2.c",0x86);
  }
  else {
    puVar7 = *(undefined8 **)(val + 8);
    *puVar7 = pAVar3;
    pAVar4 = ASN1_TYPE_new();
    puVar7[1] = pAVar4;
    if (pAVar4 == (ASN1_TYPE *)0x0) goto LAB_00bda938;
    iVar2 = EVP_CIPHER_iv_length(cipher);
    if (iVar2 == 0) {
LAB_00bda814:
      ctx = EVP_CIPHER_CTX_new();
      if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_00bda938;
      iVar2 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,auStack_70,0);
      if (iVar2 == 0) {
LAB_00bda8c0:
        pXVar5 = (X509_ALGOR *)0x0;
        goto LAB_00bda95c;
      }
      iVar2 = EVP_CIPHER_param_to_asn1(ctx,(ASN1_TYPE *)puVar7[1]);
      if (iVar2 < 0) {
        ERR_put_error(0xd,0xa7,0x72,"crypto/asn1/p5_pbev2.c",0x54);
        goto LAB_00bda8c0;
      }
      if ((local_54 == -1) && (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,7,0,&local_54), iVar2 < 1)) {
        ERR_clear_error();
        local_54 = 799;
      }
      EVP_CIPHER_CTX_free(ctx);
      if (iVar1 == 0x25) {
        iVar1 = EVP_CIPHER_key_length(cipher);
      }
      else {
        iVar1 = -1;
      }
      X509_ALGOR_free(*(X509_ALGOR **)val);
      pXVar5 = PKCS5_pbkdf2_set(iter,salt,saltlen,local_54,iVar1);
      *(X509_ALGOR **)val = pXVar5;
      if (pXVar5 == (X509_ALGOR *)0x0) goto LAB_00bda938;
      pXVar5 = X509_ALGOR_new();
      if (pXVar5 != (X509_ALGOR *)0x0) {
        pAVar3 = OBJ_nid2obj(0xa1);
        pXVar5->algorithm = pAVar3;
        lVar6 = ASN1_TYPE_pack_sequence(PBE2PARAM_it,val,&pXVar5->parameter);
        if (lVar6 != 0) {
          ASN1_item_free(val,(ASN1_ITEM *)PBE2PARAM_it);
          return pXVar5;
        }
      }
      goto LAB_00bda93c;
    }
    iVar2 = EVP_CIPHER_iv_length(cipher);
    if (aiv != (uchar *)0x0) {
      memcpy(auStack_70,aiv,(long)iVar2);
      goto LAB_00bda814;
    }
    iVar2 = RAND_bytes(auStack_70,iVar2);
    if (0 < iVar2) goto LAB_00bda814;
    pXVar5 = (X509_ALGOR *)0x0;
  }
  ctx = (EVP_CIPHER_CTX *)0x0;
LAB_00bda95c:
  EVP_CIPHER_CTX_free(ctx);
  ASN1_item_free(val,(ASN1_ITEM *)PBE2PARAM_it);
  X509_ALGOR_free((X509_ALGOR *)0x0);
  X509_ALGOR_free(pXVar5);
  return (X509_ALGOR *)0x0;
}

