
ASN1_VALUE * SMIME_read_ASN1(BIO *bio,BIO **bcont,ASN1_ITEM *it)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ASN1_VALUE *pAVar12;
  size_t sVar13;
  BIO_METHOD *type;
  BIO *a;
  long lVar14;
  BIO *pBVar15;
  code *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char cVar19;
  BIO *local_478;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  
  if (bcont != (BIO **)0x0) {
    *bcont = (BIO *)0x0;
  }
  lVar10 = FUN_00bd95e4(bio);
  if (lVar10 == 0) {
    iVar6 = 0xcf;
    iVar7 = 0x180;
LAB_00bd9070:
    ERR_put_error(0xd,0xd4,iVar6,"crypto/asn1/asn_mime.c",iVar7);
    return (ASN1_VALUE *)0x0;
  }
  local_460 = "content-type";
  uStack_458 = 0;
  local_450 = 0;
  iVar6 = OPENSSL_sk_find(lVar10,&local_460);
  if (((iVar6 < 0) || (lVar11 = OPENSSL_sk_value(lVar10,iVar6), lVar11 == 0)) ||
     (pcVar18 = *(char **)(lVar11 + 8), pcVar18 == (char *)0x0)) {
    OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
    iVar6 = 0xd1;
    iVar7 = 0x187;
    goto LAB_00bd9070;
  }
  iVar6 = strcmp(pcVar18,"multipart/signed");
  if (iVar6 != 0) {
    iVar6 = strcmp(pcVar18,"application/x-pkcs7-mime");
    if ((iVar6 == 0) || (iVar6 = strcmp(pcVar18,"application/pkcs7-mime"), iVar6 == 0)) {
      OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
      pAVar12 = (ASN1_VALUE *)FUN_00bd9da8(bio,it);
      if (pAVar12 == (ASN1_VALUE *)0x0) {
        ERR_put_error(0xd,0xd4,0xcb,"crypto/asn1/asn_mime.c",0x1d5);
        return (ASN1_VALUE *)0x0;
      }
      return pAVar12;
    }
    ERR_put_error(0xd,0xd4,0xcd,"crypto/asn1/asn_mime.c",0x1cc);
    ERR_add_error_data(2,"type: ",*(undefined8 *)(lVar11 + 8));
    pcVar16 = FUN_00bd9d30;
    lVar11 = lVar10;
    goto LAB_00bd9504;
  }
  uStack_458 = 0;
  local_460 = "boundary";
  iVar6 = OPENSSL_sk_find(*(undefined8 *)(lVar11 + 0x10),&local_460);
  if (((iVar6 < 0) || (lVar11 = OPENSSL_sk_value(*(undefined8 *)(lVar11 + 0x10),iVar6), lVar11 == 0)
      ) || (pcVar18 = *(char **)(lVar11 + 8), pcVar18 == (char *)0x0)) {
    OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
    iVar6 = 0xd3;
    iVar7 = 0x192;
    goto LAB_00bd9070;
  }
  sVar13 = strlen(pcVar18);
  lVar11 = OPENSSL_sk_new_null();
  if (lVar11 != 0) {
    iVar6 = (int)sVar13;
    local_478 = (BIO *)0x0;
    cVar19 = '\0';
    bVar4 = true;
    local_468 = (char *)((ulong)&local_460 | 2);
    bVar2 = false;
    do {
      cVar5 = cVar19;
      if (iVar6 == -1) {
LAB_00bd92dc:
        do {
          cVar19 = cVar5;
          iVar7 = BIO_gets(bio,(char *)&local_460,0x400);
          if (iVar7 < 1) goto LAB_00bd94c4;
          sVar13 = strlen(pcVar18);
          iVar8 = (int)sVar13;
          if ((iVar8 + 2 <= iVar7) && (iVar9 = strncmp((char *)&local_460,"--",2), iVar9 == 0)) {
            iVar9 = strncmp(local_468,pcVar18,(long)iVar8);
            if (iVar9 == 0) {
              iVar7 = strncmp((char *)((long)&local_460 + (long)iVar8 + 2U),"--",2);
              bVar4 = true;
              cVar5 = cVar19 + '\x01';
              if (iVar7 == 0) goto LAB_00bd93cc;
              goto LAB_00bd92dc;
            }
          }
          cVar5 = '\0';
        } while (cVar19 == '\0');
      }
      else {
        do {
          while( true ) {
            cVar19 = cVar5;
            iVar7 = BIO_gets(bio,(char *)&local_460,0x400);
            if (iVar7 < 1) goto LAB_00bd94c4;
            if (((iVar7 < iVar6 + 2) || (iVar8 = strncmp((char *)&local_460,"--",2), iVar8 != 0)) ||
               (iVar8 = strncmp(local_468,pcVar18,(long)iVar6), iVar8 != 0)) break;
            iVar7 = strncmp((char *)((long)&local_460 + (long)iVar6 + 2U),"--",2);
            bVar4 = true;
            cVar5 = cVar19 + '\x01';
            if (iVar7 == 0) goto LAB_00bd93cc;
          }
          cVar5 = '\0';
        } while (cVar19 == '\0');
      }
      bVar3 = false;
      pcVar17 = (char *)((long)&local_468 + (long)iVar7 + 7);
      do {
        if (*pcVar17 == '\n') {
          bVar3 = true;
        }
        else {
          iVar8 = iVar7;
          if (*pcVar17 != '\r') break;
        }
        iVar8 = iVar7 + -1;
        pcVar17 = pcVar17 + -1;
        bVar1 = 0 < iVar7;
        iVar7 = iVar8;
      } while (iVar8 != 0 && bVar1);
      if (bVar4) {
        if ((local_478 != (BIO *)0x0) && (iVar7 = OPENSSL_sk_push(lVar11), iVar7 == 0))
        goto LAB_00bd94c4;
        type = BIO_s_mem();
        local_478 = BIO_new(type);
        if (local_478 != (BIO *)0x0) {
          BIO_ctrl(local_478,0x82,0,(void *)0x0);
          goto LAB_00bd9234;
        }
        goto LAB_00bd94c8;
      }
      if (bVar2) {
        BIO_write(local_478,&DAT_018bc985,2);
      }
LAB_00bd9234:
      bVar4 = false;
      bVar2 = bVar3;
      if (iVar8 != 0) {
        BIO_write(local_478,&local_460,iVar8);
        bVar4 = false;
      }
    } while( true );
  }
  OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
  goto LAB_00bd94dc;
LAB_00bd93cc:
  iVar6 = OPENSSL_sk_push(lVar11,local_478);
  if (iVar6 != 0) {
    OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
    iVar6 = OPENSSL_sk_num(lVar11);
    if (iVar6 != 2) goto LAB_00bd94dc;
    a = (BIO *)OPENSSL_sk_value(lVar11,1);
    lVar10 = FUN_00bd95e4();
    if (lVar10 == 0) {
      ERR_put_error(0xd,0xd4,0xd0,"crypto/asn1/asn_mime.c",0x1a1);
    }
    else {
      local_460 = "content-type";
      uStack_458 = 0;
      local_450 = 0;
      iVar6 = OPENSSL_sk_find(lVar10,&local_460);
      if (((iVar6 < 0) || (lVar14 = OPENSSL_sk_value(lVar10,iVar6), lVar14 == 0)) ||
         (pcVar18 = *(char **)(lVar14 + 8), pcVar18 == (char *)0x0)) {
        OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
        iVar6 = 0xd4;
        iVar7 = 0x1ab;
        goto LAB_00bd9070;
      }
      iVar6 = strcmp(pcVar18,"application/x-pkcs7-signature");
      if ((iVar6 == 0) || (iVar6 = strcmp(pcVar18,"application/pkcs7-signature"), iVar6 == 0)) {
        OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
        pAVar12 = (ASN1_VALUE *)FUN_00bd9da8(a,it);
        if (pAVar12 == (ASN1_VALUE *)0x0) {
          ERR_put_error(0xd,0xd4,0xcc,"crypto/asn1/asn_mime.c",0x1ba);
        }
        else if (bcont != (BIO **)0x0) {
          pBVar15 = (BIO *)OPENSSL_sk_value(lVar11,0);
          *bcont = pBVar15;
          BIO_free(a);
          OPENSSL_sk_free(lVar11);
          return pAVar12;
        }
        OPENSSL_sk_pop_free(lVar11,BIO_vfree);
        return pAVar12;
      }
      ERR_put_error(0xd,0xd4,0xd5,"crypto/asn1/asn_mime.c",0x1b1);
      ERR_add_error_data(2,"type: ",*(undefined8 *)(lVar14 + 8));
      OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
    }
    pcVar16 = BIO_vfree;
    goto LAB_00bd9504;
  }
LAB_00bd94c4:
  BIO_free(local_478);
LAB_00bd94c8:
  OPENSSL_sk_pop_free(lVar10,FUN_00bd9d30);
LAB_00bd94dc:
  ERR_put_error(0xd,0xd4,0xd2,"crypto/asn1/asn_mime.c",0x198);
  pcVar16 = BIO_vfree;
LAB_00bd9504:
  OPENSSL_sk_pop_free(lVar11,pcVar16);
  return (ASN1_VALUE *)0x0;
}

