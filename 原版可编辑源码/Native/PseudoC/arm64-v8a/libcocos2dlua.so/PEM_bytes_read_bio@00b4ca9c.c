
int PEM_bytes_read_bio(uchar **pdata,long *plen,char **pnm,char *name,BIO *bp,undefined1 *cb,void *u
                      )

{
  char *__s1;
  uchar *puVar1;
  char *ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  EVP_PKEY_ASN1_METHOD *pEVar6;
  ulong uVar7;
  long lVar8;
  long local_98;
  uchar *local_90;
  char *local_88;
  char *local_80;
  EVP_CIPHER_INFO local_78;
  
  local_88 = (char *)0x0;
  local_80 = (char *)0x0;
  local_90 = (uchar *)0x0;
  iVar2 = PEM_read_bio(bp,&local_80,&local_88,&local_90,&local_98);
  __s1 = local_80;
  do {
    local_80 = __s1;
    if (iVar2 == 0) {
      uVar7 = ERR_peek_error();
      if ((uVar7 & 0xfff) == 0x6c) {
        ERR_add_error_data(2,"Expecting: ",name);
      }
      return 0;
    }
    iVar2 = strcmp(__s1,name);
    if (iVar2 == 0) goto LAB_00b4cde0;
    iVar2 = strcmp(name,"ANY PRIVATE KEY");
    if (iVar2 == 0) {
      iVar2 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
      if ((iVar2 == 0) || (iVar2 = strcmp(__s1,"PRIVATE KEY"), iVar2 == 0)) goto LAB_00b4cde0;
      sVar5 = strlen(__s1);
      iVar2 = (int)sVar5;
      if (((0xc < iVar2) &&
          (((iVar3 = strcmp(__s1 + (long)iVar2 + -0xb,"PRIVATE KEY"), iVar3 == 0 &&
            (__s1[(long)iVar2 + -0xc] == ' ')) &&
           (iVar2 = (int)(__s1 + (long)iVar2 + -0xc) - (int)__s1, 0 < iVar2)))) &&
         (pEVar6 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,__s1,iVar2),
         pEVar6 != (EVP_PKEY_ASN1_METHOD *)0x0)) {
        lVar8 = *(long *)(pEVar6 + 0xb8);
        goto joined_r0x00b4cd00;
      }
    }
    else {
      iVar2 = strcmp(name,"PARAMETERS");
      if (iVar2 == 0) {
        sVar5 = strlen(__s1);
        iVar2 = (int)sVar5;
        if ((0xb < iVar2) &&
           ((((iVar3 = strcmp(__s1 + (long)iVar2 + -10,"PARAMETERS"), iVar3 == 0 &&
              (__s1[(long)iVar2 + -0xb] == ' ')) &&
             (iVar2 = (int)(__s1 + (long)iVar2 + -0xb) - (int)__s1, 0 < iVar2)) &&
            (pEVar6 = EVP_PKEY_asn1_find_str((ENGINE **)&local_78,__s1,iVar2),
            pEVar6 != (EVP_PKEY_ASN1_METHOD *)0x0)))) {
          lVar8 = *(long *)(pEVar6 + 0x70);
          ENGINE_finish((ENGINE *)local_78.cipher);
joined_r0x00b4cd00:
          if (lVar8 != 0) {
LAB_00b4cde0:
            ptr = local_88;
            iVar2 = PEM_get_EVP_CIPHER_INFO(local_88,&local_78);
            puVar1 = local_90;
            if ((iVar2 != 0) &&
               (iVar2 = PEM_do_header(&local_78,local_90,&local_98,cb,u), iVar2 != 0)) {
              *pdata = puVar1;
              *plen = local_98;
              if (pnm == (char **)0x0) {
                CRYPTO_free(__s1);
              }
              else {
                *pnm = __s1;
              }
              CRYPTO_free(ptr);
              return 1;
            }
            CRYPTO_free(__s1);
            CRYPTO_free(ptr);
            CRYPTO_free(local_90);
            return 0;
          }
        }
      }
      else {
        iVar2 = strcmp(__s1,"X9.42 DH PARAMETERS");
        if (((((((iVar2 == 0) && (iVar2 = strcmp(name,"DH PARAMETERS"), iVar2 == 0)) ||
               ((iVar2 = strcmp(__s1,"X509 CERTIFICATE"), iVar2 == 0 &&
                (iVar3 = strcmp(name,"CERTIFICATE"), iVar3 == 0)))) ||
              (((iVar3 = strcmp(__s1,"NEW CERTIFICATE REQUEST"), iVar3 == 0 &&
                (iVar3 = strcmp(name,"CERTIFICATE REQUEST"), iVar3 == 0)) ||
               ((iVar3 = strcmp(__s1,"CERTIFICATE"), iVar3 == 0 &&
                (iVar4 = strcmp(name,"TRUSTED CERTIFICATE"), iVar4 == 0)))))) ||
             ((((iVar2 == 0 && (iVar2 = strcmp(name,"TRUSTED CERTIFICATE"), iVar2 == 0)) ||
               ((iVar3 == 0 && (iVar2 = strcmp(name,"PKCS7"), iVar2 == 0)))) ||
              ((iVar2 = strcmp(__s1,"PKCS #7 SIGNED DATA"), iVar2 == 0 &&
               (iVar2 = strcmp(name,"PKCS7"), iVar2 == 0)))))) ||
            ((iVar3 == 0 && (iVar2 = strcmp(name,"CMS"), iVar2 == 0)))) ||
           ((iVar2 = strcmp(__s1,"PKCS7"), iVar2 == 0 && (iVar2 = strcmp(name,"CMS"), iVar2 == 0))))
        goto LAB_00b4cde0;
      }
    }
    CRYPTO_free(__s1);
    CRYPTO_free(local_88);
    CRYPTO_free(local_90);
    iVar2 = PEM_read_bio(bp,&local_80,&local_88,&local_90,&local_98);
    __s1 = local_80;
  } while( true );
}

