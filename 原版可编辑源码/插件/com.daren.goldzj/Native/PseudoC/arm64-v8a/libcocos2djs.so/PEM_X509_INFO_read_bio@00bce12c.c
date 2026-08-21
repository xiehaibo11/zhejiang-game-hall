
stack_st_X509_INFO * PEM_X509_INFO_read_bio(BIO *bp,stack_st_X509_INFO *sk,undefined1 *cb,void *u)

{
  int iVar1;
  int iVar2;
  stack_st_X509_INFO *psVar3;
  X509_INFO *pXVar4;
  EVP_PKEY *pEVar5;
  long lVar6;
  X509_PKEY *pXVar7;
  size_t sVar8;
  ulong uVar9;
  char *pcVar10;
  code *pcVar11;
  X509_INFO *a;
  EVP_CIPHER_INFO EStack_a0;
  long local_88;
  uchar *local_80;
  uchar *local_78;
  char *local_70;
  char *local_68;
  
  local_70 = (char *)0x0;
  local_68 = (char *)0x0;
  local_78 = (uchar *)0x0;
  psVar3 = sk;
  if ((sk == (stack_st_X509_INFO *)0x0) &&
     (psVar3 = (stack_st_X509_INFO *)OPENSSL_sk_new_null(), psVar3 == (stack_st_X509_INFO *)0x0)) {
    ERR_put_error(9,0x74,0x41,"crypto/pem/pem_info.c",0x36);
    pXVar4 = (X509_INFO *)0x0;
  }
  else {
    pXVar4 = X509_INFO_new();
    if (pXVar4 != (X509_INFO *)0x0) {
      iVar1 = PEM_read_bio(bp,&local_68,&local_70,&local_78,&local_88);
      if (iVar1 != 0) {
LAB_00bce430:
        pcVar10 = local_68;
        iVar1 = strcmp(local_68,"CERTIFICATE");
        if ((iVar1 == 0) || (iVar1 = strcmp(pcVar10,"X509 CERTIFICATE"), iVar1 == 0)) {
          if (pXVar4->x509 != (X509 *)0x0) goto LAB_00bce510;
          pcVar11 = d2i_X509;
LAB_00bce304:
          iVar1 = 0;
          a = pXVar4;
LAB_00bce314:
          iVar2 = PEM_get_EVP_CIPHER_INFO(local_70,&EStack_a0);
          if ((iVar2 == 0) ||
             (iVar2 = PEM_do_header(&EStack_a0,local_78,&local_88,cb,u), iVar2 == 0))
          goto LAB_00bce598;
          local_80 = local_78;
          if (iVar1 == 0) {
            lVar6 = (*pcVar11)(a,&local_80,local_88);
            if (lVar6 == 0) {
              ERR_put_error(9,0x74,0xd,"crypto/pem/pem_info.c",0xc4);
              goto LAB_00bce598;
            }
          }
          else {
            pEVar5 = d2i_PrivateKey(iVar1,(EVP_PKEY **)a,&local_80,local_88);
            if (pEVar5 == (EVP_PKEY *)0x0) {
              ERR_put_error(9,0x74,0xd,"crypto/pem/pem_info.c",0xc0);
              goto LAB_00bce598;
            }
          }
LAB_00bce398:
          CRYPTO_free(local_68);
          local_68 = (char *)0x0;
          CRYPTO_free(local_70);
          local_70 = (char *)0x0;
          CRYPTO_free(local_78);
          local_78 = (uchar *)0x0;
          iVar1 = PEM_read_bio(bp,&local_68,&local_70,&local_78,&local_88);
          if (iVar1 == 0) goto LAB_00bce524;
          goto LAB_00bce430;
        }
        iVar1 = strcmp(pcVar10,"TRUSTED CERTIFICATE");
        if (iVar1 == 0) {
          if (pXVar4->x509 == (X509 *)0x0) {
            pcVar11 = d2i_X509_AUX;
            goto LAB_00bce304;
          }
        }
        else {
          iVar1 = strcmp(pcVar10,"X509 CRL");
          if (iVar1 == 0) {
            if (pXVar4->crl == (X509_CRL *)0x0) {
              pcVar11 = d2i_X509_CRL;
              iVar1 = 0;
              a = (X509_INFO *)&pXVar4->crl;
              goto LAB_00bce314;
            }
            iVar1 = OPENSSL_sk_push(psVar3,pXVar4);
            if (iVar1 == 0) goto LAB_00bce598;
            pXVar4 = X509_INFO_new();
            goto joined_r0x00bce230;
          }
          iVar1 = strcmp(pcVar10,"RSA PRIVATE KEY");
          if (iVar1 == 0) {
            if (pXVar4->x_pkey == (X509_PKEY *)0x0) {
              pXVar4->enc_data = (char *)0x0;
              pXVar4->enc_len = 0;
              pXVar7 = X509_PKEY_new();
              pcVar10 = local_70;
              pXVar4->x_pkey = pXVar7;
              if (pXVar7 != (X509_PKEY *)0x0) {
                sVar8 = strlen(local_70);
                if ((int)sVar8 < 0xb) {
                  pcVar11 = d2i_RSAPrivateKey;
                  iVar1 = 6;
                  a = (X509_INFO *)&pXVar7->dec_pkey;
                  goto LAB_00bce314;
                }
LAB_00bce2cc:
                iVar1 = PEM_get_EVP_CIPHER_INFO(pcVar10,&pXVar4->enc_cipher);
                if (iVar1 != 0) {
                  pXVar4->enc_data = (char *)local_78;
                  pXVar4->enc_len = (int)local_88;
                  local_78 = (uchar *)0x0;
                  goto LAB_00bce398;
                }
              }
              goto LAB_00bce598;
            }
          }
          else {
            iVar1 = strcmp(pcVar10,"DSA PRIVATE KEY");
            if (iVar1 == 0) {
              if (pXVar4->x_pkey != (X509_PKEY *)0x0) goto LAB_00bce510;
              pXVar4->enc_data = (char *)0x0;
              pXVar4->enc_len = 0;
              pXVar7 = X509_PKEY_new();
              pcVar10 = local_70;
              pXVar4->x_pkey = pXVar7;
              if (pXVar7 != (X509_PKEY *)0x0) {
                sVar8 = strlen(local_70);
                if (10 < (int)sVar8) goto LAB_00bce2cc;
                pcVar11 = d2i_DSAPrivateKey;
                iVar1 = 0x74;
                a = (X509_INFO *)&pXVar7->dec_pkey;
                goto LAB_00bce314;
              }
              goto LAB_00bce598;
            }
            iVar1 = strcmp(pcVar10,"EC PRIVATE KEY");
            if (iVar1 != 0) goto LAB_00bce398;
            if (pXVar4->x_pkey == (X509_PKEY *)0x0) {
              pXVar4->enc_data = (char *)0x0;
              pXVar4->enc_len = 0;
              pXVar7 = X509_PKEY_new();
              pcVar10 = local_70;
              pXVar4->x_pkey = pXVar7;
              if (pXVar7 != (X509_PKEY *)0x0) {
                sVar8 = strlen(local_70);
                if (10 < (int)sVar8) goto LAB_00bce2cc;
                pcVar11 = d2i_ECPrivateKey;
                iVar1 = 0x198;
                a = (X509_INFO *)&pXVar7->dec_pkey;
                goto LAB_00bce314;
              }
              goto LAB_00bce598;
            }
          }
        }
LAB_00bce510:
        iVar1 = OPENSSL_sk_push(psVar3,pXVar4);
        if (iVar1 == 0) goto LAB_00bce598;
        pXVar4 = X509_INFO_new();
joined_r0x00bce230:
        if (pXVar4 == (X509_INFO *)0x0) goto LAB_00bce598;
        goto LAB_00bce430;
      }
LAB_00bce524:
      uVar9 = ERR_peek_last_error();
      if ((uVar9 & 0xfff) == 0x6c) {
        ERR_clear_error();
        if ((((pXVar4->x509 != (X509 *)0x0) || (pXVar4->crl != (X509_CRL *)0x0)) ||
            (pXVar4->x_pkey != (X509_PKEY *)0x0)) || (pXVar4->enc_data != (char *)0x0)) {
          iVar1 = OPENSSL_sk_push(psVar3,pXVar4);
          if (iVar1 == 0) goto LAB_00bce598;
          pXVar4 = (X509_INFO *)0x0;
        }
        X509_INFO_free(pXVar4);
        goto LAB_00bce5ec;
      }
    }
  }
LAB_00bce598:
  X509_INFO_free(pXVar4);
  iVar1 = OPENSSL_sk_num(psVar3);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pXVar4 = (X509_INFO *)OPENSSL_sk_value(psVar3,iVar1);
      X509_INFO_free(pXVar4);
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(psVar3);
    } while (iVar1 < iVar2);
  }
  if (psVar3 != sk) {
    OPENSSL_sk_free(psVar3);
  }
  psVar3 = (stack_st_X509_INFO *)0x0;
LAB_00bce5ec:
  CRYPTO_free(local_68);
  CRYPTO_free(local_70);
  CRYPTO_free(local_78);
  return psVar3;
}

