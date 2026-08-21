
CMS_SignerInfo *
CMS_add1_signer(CMS_ContentInfo *cms,X509 *signer,EVP_PKEY *pk,EVP_MD *md,uint flags)

{
  stack_st_X509_ALGOR *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ASN1_VALUE *si;
  long lVar6;
  char *name;
  X509_ALGOR *pXVar7;
  EVP_PKEY_CTX *ctx;
  CMS_SignerInfo *si_00;
  ASN1_OBJECT *oid;
  void *bytes;
  code *pcVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ASN1_VALUE *pctx;
  stack_st_X509_ALGOR *local_70;
  ASN1_OBJECT *local_68;
  
  iVar2 = X509_check_private_key(signer,pk);
  if (iVar2 == 0) {
    ERR_put_error(0x2e,0x66,0x88,"crypto/cms/cms_sd.c",0xe6);
    return (CMS_SignerInfo *)0x0;
  }
  plVar5 = (long *)FUN_00b9fd70(cms);
  if (plVar5 == (long *)0x0) {
    si = (ASN1_VALUE *)0x0;
    goto LAB_00ba0360;
  }
  si = ASN1_item_new((ASN1_ITEM *)CMS_SignerInfo_it);
  if (si == (ASN1_VALUE *)0x0) goto LAB_00ba0344;
  X509_check_purpose(signer,-1,-1);
  X509_up_ref(signer);
  EVP_PKEY_up_ref(pk);
  *(X509 **)(si + 0x38) = signer;
  *(EVP_PKEY **)(si + 0x40) = pk;
  lVar6 = EVP_MD_CTX_new();
  pctx = si + 0x50;
  *(undefined8 *)pctx = 0;
  *(long *)(si + 0x48) = lVar6;
  if (lVar6 == 0) {
    iVar2 = 0x66;
    iVar3 = 0x41;
    iVar4 = 0xfb;
    goto LAB_00ba035c;
  }
  if ((flags >> 0x10 & 1) == 0) {
    puVar9 = *(undefined4 **)(si + 8);
    *(undefined8 *)si = 1;
    iVar2 = cms_set1_ias(puVar9 + 2,signer);
    if (iVar2 == 0) goto LAB_00ba0360;
    *puVar9 = 0;
  }
  else {
    *(undefined8 *)si = 3;
    if (*plVar5 < 3) {
      *plVar5 = 3;
    }
    puVar9 = *(undefined4 **)(si + 8);
    iVar2 = cms_set1_keyid(puVar9 + 2,signer);
    if (iVar2 == 0) goto LAB_00ba0360;
    *puVar9 = 1;
  }
  if (md == (EVP_MD *)0x0) {
                    /* try { // try from 00ba008c to 00ca00af has its CatchHandler @ 00ba0980 */
    iVar2 = EVP_PKEY_get_default_digest_nid(pk,(int *)&local_68);
    if (iVar2 < 1) goto LAB_00ba0360;
    name = OBJ_nid2sn((int)local_68);
    md = EVP_get_digestbyname(name);
    if (md == (EVP_MD *)0x0) {
      iVar2 = 0x66;
      iVar3 = 0x80;
      iVar4 = 0x112;
      goto LAB_00ba035c;
    }
  }
                    /* try { // try from 00ba00b0 to 00ca00d3 has its CatchHandler @ 00b9fb6c */
  X509_ALGOR_set_md(*(X509_ALGOR **)(si + 0x10),md);
  iVar2 = OPENSSL_sk_num(plVar5[1]);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
                    /* try { // try from 00ba00d4 to 00ca00ef has its CatchHandler @ 00ba09a0 */
      pXVar7 = (X509_ALGOR *)OPENSSL_sk_value(plVar5[1],iVar2);
      X509_ALGOR_get0(&local_68,(int *)0x0,(void **)0x0,pXVar7);
      iVar3 = OBJ_obj2nid(local_68);
      iVar4 = EVP_MD_type(md);
      if (iVar3 == iVar4) break;
      iVar2 = iVar2 + 1;
      iVar3 = OPENSSL_sk_num(plVar5[1]);
    } while (iVar2 < iVar3);
  }
                    /* try { // try from 00ba0128 to 00ca016b has its CatchHandler @ 00ba0aec */
  iVar3 = OPENSSL_sk_num(plVar5[1]);
  if (iVar2 == iVar3) {
    pXVar7 = X509_ALGOR_new();
    if (pXVar7 != (X509_ALGOR *)0x0) {
      X509_ALGOR_set_md(pXVar7,md);
      iVar2 = OPENSSL_sk_push(plVar5[1],pXVar7);
      if (iVar2 != 0) goto LAB_00ba015c;
      X509_ALGOR_free(pXVar7);
    }
LAB_00ba0344:
                    /* try { // try from 00ba0350 to 00ca0373 has its CatchHandler @ 00ba09ec */
    iVar2 = 0x66;
    iVar3 = 0x41;
    iVar4 = 0x16d;
  }
  else {
LAB_00ba015c:
    if ((flags >> 0x12 & 1) != 0) {
LAB_00ba01d8:
      if ((flags >> 8 & 1) == 0) {
        if (*(long *)(si + 0x18) == 0) {
          lVar6 = OPENSSL_sk_new_null();
          *(long *)(si + 0x18) = lVar6;
          if (lVar6 == 0) goto LAB_00ba0344;
        }
        if ((flags >> 9 & 1) == 0) {
          local_70 = (X509_ALGORS *)0x0;
          iVar2 = CMS_add_standard_smimecap(&local_70);
          psVar1 = local_70;
          if (iVar2 == 0) {
LAB_00ba0260:
            iVar2 = 0;
          }
          else {
            local_68 = (ASN1_OBJECT *)0x0;
            iVar2 = i2d_X509_ALGORS(local_70,(uchar **)&local_68);
            if (iVar2 < 1) goto LAB_00ba0260;
            iVar2 = CMS_signed_add1_attr_by_NID((CMS_SignerInfo *)si,0xa7,0x10,local_68,iVar2);
            CRYPTO_free(local_68);
          }
          OPENSSL_sk_pop_free(psVar1,X509_ALGOR_free);
          if (iVar2 == 0) goto LAB_00ba0344;
        }
        if ((flags >> 0xf & 1) != 0) {
          iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
          if (iVar2 == 0x16) {
            if (*(long *)(cms + 8) == 0) goto LAB_00ba03b4;
            uVar10 = *(undefined8 *)(*(long *)(cms + 8) + 0x28);
          }
          else {
            ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
LAB_00ba03b4:
            uVar10 = 0;
          }
          iVar2 = OPENSSL_sk_num(uVar10);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              si_00 = (CMS_SignerInfo *)OPENSSL_sk_value(uVar10,iVar2);
                    /* try { // try from 00ba03f8 to 00ca048b has its CatchHandler @ 00ba0aec */
              if (((si_00 != (CMS_SignerInfo *)si) &&
                  (iVar3 = CMS_signed_get_attr_count(si_00), -1 < iVar3)) &&
                 (iVar3 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(si + 0x10),
                                  (ASN1_OBJECT *)**(undefined8 **)(si_00 + 0x10)), iVar3 == 0)) {
                oid = OBJ_nid2obj(0x33);
                bytes = CMS_signed_get0_data_by_OBJ(si_00,oid,-3,4);
                if (bytes == (void *)0x0) {
                    /* try { // try from 00ba04bc to 00ca04cf has its CatchHandler @ 00ba0a1c */
                  iVar2 = 0x6c;
                  iVar3 = 0x72;
                  iVar4 = 0x88;
                  goto LAB_00ba035c;
                }
                iVar2 = CMS_signed_add1_attr_by_NID((CMS_SignerInfo *)si,0x33,4,bytes,-1);
                    /* try { // try from 00ba04a8 to 00ca04af has its CatchHandler @ 00ba09ec */
                if ((iVar2 == 0) ||
                   (((flags & 0x44000) == 0 &&
                    (iVar2 = CMS_SignerInfo_sign((CMS_SignerInfo *)si), iVar2 == 0))))
                goto LAB_00ba0360;
                goto LAB_00ba027c;
              }
              iVar2 = iVar2 + 1;
              iVar3 = OPENSSL_sk_num(uVar10);
            } while (iVar2 < iVar3);
          }
          iVar2 = 0x6c;
          iVar3 = 0x83;
          iVar4 = 0x93;
          goto LAB_00ba035c;
        }
      }
LAB_00ba027c:
      if (((flags >> 1 & 1) != 0) || (iVar2 = CMS_add1_cert(cms,signer), iVar2 != 0)) {
                    /* try { // try from 00ba0290 to 00ca029b has its CatchHandler @ 00ba09a4 */
        if ((flags >> 0x12 & 1) != 0) {
          if ((flags >> 8 & 1) == 0) {
                    /* try { // try from 00ba0310 to 00ca0347 has its CatchHandler @ 00ba09a8 */
            iVar2 = EVP_DigestSignInit(*(EVP_MD_CTX **)(si + 0x48),(EVP_PKEY_CTX **)pctx,md,
                                       (ENGINE *)0x0,pk);
          }
          else {
            ctx = EVP_PKEY_CTX_new(*(EVP_PKEY **)(si + 0x40),(ENGINE *)0x0);
            *(EVP_PKEY_CTX **)(si + 0x50) = ctx;
            if ((ctx == (EVP_PKEY_CTX *)0x0) || (iVar2 = EVP_PKEY_sign_init(ctx), iVar2 < 1))
            goto LAB_00ba0360;
                    /* try { // try from 00ba02b8 to 00ca02c3 has its CatchHandler @ 00ba099c */
            iVar2 = EVP_PKEY_CTX_ctrl(*(EVP_PKEY_CTX **)pctx,-1,0xf8,1,0,md);
          }
          if (iVar2 < 1) goto LAB_00ba0360;
        }
        lVar6 = plVar5[5];
        if (lVar6 == 0) {
          lVar6 = OPENSSL_sk_new_null();
          plVar5[5] = lVar6;
          if (lVar6 == 0) goto LAB_00ba0344;
        }
        iVar2 = OPENSSL_sk_push(lVar6,si);
        if (iVar2 != 0) {
          return (CMS_SignerInfo *)si;
        }
      }
      goto LAB_00ba0344;
    }
    lVar6 = *(long *)(*(long *)(si + 0x40) + 0x10);
                    /* try { // try from 00ba0170 to 00ca0173 has its CatchHandler @ 00ba0a10 */
    if ((lVar6 == 0) || (pcVar8 = *(code **)(lVar6 + 0xb0), pcVar8 == (code *)0x0))
    goto LAB_00ba01d8;
                    /* try { // try from 00ba0180 to 00ca0267 has its CatchHandler @ 00ba0aec */
    iVar2 = (*pcVar8)(*(long *)(si + 0x40),5,0,si);
    if (iVar2 == -2) {
      iVar2 = 0xaa;
      iVar3 = 0x7d;
      iVar4 = 0xd2;
    }
    else {
      if (0 < iVar2) goto LAB_00ba01d8;
      iVar2 = 0xaa;
      iVar3 = 0x6f;
      iVar4 = 0xd6;
    }
  }
LAB_00ba035c:
  ERR_put_error(0x2e,iVar2,iVar3,"crypto/cms/cms_sd.c",iVar4);
LAB_00ba0360:
  ASN1_item_free(si,(ASN1_ITEM *)CMS_SignerInfo_it);
                    /* try { // try from 00ba0378 to 00ca037b has its CatchHandler @ 00ba097c */
                    /* try { // try from 00ba0384 to 00ca03eb has its CatchHandler @ 00ba09ec */
  return (CMS_SignerInfo *)0x0;
}

