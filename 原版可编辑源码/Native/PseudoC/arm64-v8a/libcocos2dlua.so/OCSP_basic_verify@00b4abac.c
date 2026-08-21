
int OCSP_basic_verify(OCSP_BASICRESP *bs,stack_st_X509 *certs,X509_STORE *st,ulong flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  X509 *pXVar5;
  X509_STORE_CTX *ctx;
  EVP_PKEY *pkey;
  undefined8 uVar6;
  stack_st_X509 *psVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  X509_ALGOR *chain;
  OCSP_RESPDATA *pOVar12;
  OCSP_CERTID *b;
  OCSP_CERTID *local_68;
  
  uVar11 = (uint)flags;
  pXVar5 = (X509 *)FUN_00b4b2cc(certs,&bs->signatureAlgorithm);
  if (pXVar5 == (X509 *)0x0) {
    if (((uVar11 >> 1 & 1) == 0) &&
       (pXVar5 = (X509 *)FUN_00b4b2cc(bs[2].signatureAlgorithm,&bs->signatureAlgorithm),
       pXVar5 != (X509 *)0x0)) {
      iVar1 = 1;
      goto LAB_00b4abf8;
    }
    ERR_put_error(0x27,0x69,0x76,"crypto/ocsp/ocsp_vfy.c",0x29);
    psVar7 = (stack_st_X509 *)0x0;
    chain = (X509_ALGOR *)0x0;
    ctx = (X509_STORE_CTX *)0x0;
LAB_00b4ad58:
    iVar1 = 0;
    goto LAB_00b4ae78;
  }
  iVar1 = 2;
LAB_00b4abf8:
  ctx = X509_STORE_CTX_new();
  if (ctx == (X509_STORE_CTX *)0x0) {
    ERR_put_error(0x27,0x69,0x41,"crypto/ocsp/ocsp_vfy.c",0x2e);
    psVar7 = (stack_st_X509 *)0x0;
    chain = (X509_ALGOR *)0x0;
    iVar1 = -1;
    goto LAB_00b4ae78;
  }
  if (iVar1 == 2 && (flags & 0x200) != 0) {
    uVar11 = uVar11 | 0x10;
  }
  if ((uVar11 >> 2 & 1) == 0) {
    pkey = (EVP_PKEY *)X509_get0_pubkey(pXVar5);
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0x27,0x69,0x82,"crypto/ocsp/ocsp_vfy.c",0x37);
      psVar7 = (stack_st_X509 *)0x0;
      chain = (X509_ALGOR *)0x0;
      goto LAB_00b4ad58;
    }
    iVar1 = ASN1_item_verify((ASN1_ITEM *)OCSP_RESPDATA_it,(X509_ALGOR *)&bs[1].signature,
                             (ASN1_BIT_STRING *)bs[2].tbsResponseData,bs,pkey);
    if (0 < iVar1) goto LAB_00b4ac54;
    ERR_put_error(0x27,0x69,0x75,"crypto/ocsp/ocsp_vfy.c",0x3c);
  }
  else {
LAB_00b4ac54:
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        chain = bs[2].signatureAlgorithm;
        if ((certs != (stack_st_X509 *)0x0) && (chain != (X509_ALGOR *)0x0)) {
          chain = (X509_ALGOR *)OPENSSL_sk_dup(chain);
          iVar1 = OPENSSL_sk_num(certs);
          if (0 < iVar1) {
            iVar1 = 0;
            do {
              uVar6 = OPENSSL_sk_value(certs,iVar1);
              iVar2 = OPENSSL_sk_push(chain,uVar6);
              if (iVar2 == 0) {
                iVar1 = 0x41;
                iVar2 = 0x48;
                goto LAB_00b4ae44;
              }
              iVar1 = iVar1 + 1;
              iVar2 = OPENSSL_sk_num(certs);
            } while (iVar1 < iVar2);
          }
        }
      }
      else {
        chain = (X509_ALGOR *)0x0;
      }
      iVar1 = X509_STORE_CTX_init(ctx,st,pXVar5,(stack_st_X509 *)chain);
      if (iVar1 == 0) {
        iVar1 = 0xb;
        iVar2 = 0x51;
LAB_00b4ae44:
        ERR_put_error(0x27,0x69,iVar1,"crypto/ocsp/ocsp_vfy.c",iVar2);
        psVar7 = (stack_st_X509 *)0x0;
        iVar1 = -1;
        goto LAB_00b4ae78;
      }
      X509_STORE_CTX_set_purpose(ctx,8);
      iVar1 = X509_verify_cert(ctx);
      psVar7 = X509_STORE_CTX_get1_chain(ctx);
      if (iVar1 < 1) {
        iVar2 = X509_STORE_CTX_get_error(ctx);
        ERR_put_error(0x27,0x69,0x65,"crypto/ocsp/ocsp_vfy.c",0x5b);
        pcVar9 = X509_verify_cert_error_string((long)iVar2);
        ERR_add_error_data(2,"Verify error:",pcVar9);
        goto LAB_00b4ae78;
      }
      if ((uVar11 >> 8 & 1) == 0) {
        pOVar12 = bs[1].tbsResponseData;
        iVar1 = OPENSSL_sk_num(psVar7);
        if (iVar1 < 1) {
          iVar1 = 0x6c;
          iVar2 = 0x69;
          iVar3 = 0xc2;
        }
        else {
          iVar1 = OPENSSL_sk_num(pOVar12);
          if (0 < iVar1) {
            puVar8 = (undefined8 *)OPENSSL_sk_value(pOVar12,0);
            local_68 = (OCSP_CERTID *)*puVar8;
            if (iVar1 != 1) {
              iVar2 = 1;
              do {
                puVar8 = (undefined8 *)OPENSSL_sk_value(pOVar12,iVar2);
                b = (OCSP_CERTID *)*puVar8;
                iVar3 = OCSP_id_issuer_cmp(local_68,b);
                if (iVar3 != 0) {
                  iVar1 = OBJ_cmp((ASN1_OBJECT *)b->hashAlgorithm,
                                  (ASN1_OBJECT *)local_68->hashAlgorithm);
                  if (iVar1 == 0) {
                    iVar1 = 0;
                    if ((uVar11 >> 5 & 1) == 0) goto LAB_00b4b024;
                    goto LAB_00b4ae78;
                  }
                  local_68 = (OCSP_CERTID *)0x0;
                  break;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < iVar1);
            }
            uVar6 = OPENSSL_sk_value(psVar7,0);
            iVar1 = OPENSSL_sk_num(psVar7);
            if (iVar1 < 2) {
LAB_00b4b00c:
              iVar1 = FUN_00b4b394(uVar6,local_68,pOVar12);
            }
            else {
              uVar10 = OPENSSL_sk_value(psVar7,1);
              iVar1 = FUN_00b4b394(uVar10,local_68,pOVar12);
              if (iVar1 < 0) goto LAB_00b4ae78;
              if (iVar1 == 0) goto LAB_00b4b00c;
              uVar4 = X509_get_extension_flags(uVar6);
              if (((uVar4 >> 2 & 1) != 0) &&
                 (uVar4 = X509_get_extended_key_usage(uVar6), (uVar4 >> 5 & 1) != 0))
              goto LAB_00b4b050;
              ERR_put_error(0x27,0x6a,0x67,"crypto/ocsp/ocsp_vfy.c",0x13e);
              iVar1 = 0;
            }
            if ((uVar11 >> 5 & 1) != 0) goto LAB_00b4ae78;
LAB_00b4b024:
            if (iVar1 != 0) goto LAB_00b4ae78;
            iVar1 = OPENSSL_sk_num(psVar7);
            pXVar5 = (X509 *)OPENSSL_sk_value(psVar7,iVar1 + -1);
            iVar1 = X509_check_trust(pXVar5,0xb4,0);
            if (iVar1 != 1) {
              ERR_put_error(0x27,0x69,0x70,"crypto/ocsp/ocsp_vfy.c",0x77);
              goto LAB_00b4ad58;
            }
            goto LAB_00b4b050;
          }
          iVar1 = 0x6b;
          iVar2 = 0x6f;
          iVar3 = 0xef;
        }
        ERR_put_error(0x27,iVar1,iVar2,"crypto/ocsp/ocsp_vfy.c",iVar3);
        iVar1 = -1;
      }
      else {
LAB_00b4b050:
        iVar1 = 1;
      }
      goto LAB_00b4ae78;
    }
  }
  psVar7 = (stack_st_X509 *)0x0;
  chain = (X509_ALGOR *)0x0;
LAB_00b4ae78:
  X509_STORE_CTX_free(ctx);
  OPENSSL_sk_pop_free(psVar7,X509_free);
  if ((certs != (stack_st_X509 *)0x0) && (bs[2].signatureAlgorithm != (X509_ALGOR *)0x0)) {
    OPENSSL_sk_free(chain);
  }
  return iVar1;
}

