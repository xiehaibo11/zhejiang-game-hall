
int ssl_load_ciphers(void)

{
  int iVar1;
  char *pcVar2;
  EVP_CIPHER *pEVar3;
  EVP_PKEY_ASN1_METHOD *pEVar4;
  uint uVar5;
  long lVar6;
  int local_3c;
  ENGINE *local_38;
  
  DAT_01782c40 = 0;
  ssl_sort_cipher_list();
  lVar6 = 0;
  do {
    if (*(int *)((long)&DAT_013d20a4 + lVar6) == 0) {
      *(undefined8 *)((long)&DAT_01782cf0 + lVar6) = 0;
    }
    else {
      pcVar2 = OBJ_nid2sn(*(int *)((long)&DAT_013d20a4 + lVar6));
      pEVar3 = EVP_get_cipherbyname(pcVar2);
      *(EVP_CIPHER **)((long)&DAT_01782cf0 + lVar6) = pEVar3;
      if (pEVar3 == (EVP_CIPHER *)0x0) {
        DAT_01782c40 = DAT_01782c40 | *(uint *)((long)&DAT_013d20a0 + lVar6);
      }
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0xa0);
  DAT_01782c44 = 0;
  pcVar2 = OBJ_nid2sn(4);
  DAT_01782c90 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782c90 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 1;
  }
  else {
    DAT_01782c60 = EVP_MD_size(DAT_01782c90);
    if (DAT_01782c60 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x40);
  DAT_01782c98 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782c98 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 2;
  }
  else {
    DAT_01782c64 = EVP_MD_size(DAT_01782c98);
    if (DAT_01782c64 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x329);
  DAT_01782ca0 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782ca0 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 4;
  }
  else {
    DAT_01782c68 = EVP_MD_size(DAT_01782ca0);
    if (DAT_01782c68 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x32f);
  DAT_01782ca8 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782ca8 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 8;
  }
  else {
    DAT_01782c6c = EVP_MD_size(DAT_01782ca8);
    if (DAT_01782c6c < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x2a0);
  DAT_01782cb0 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782cb0 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 0x10;
  }
  else {
    DAT_01782c70 = EVP_MD_size(DAT_01782cb0);
    if (DAT_01782c70 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x2a1);
  DAT_01782cb8 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782cb8 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 0x20;
  }
  else {
    DAT_01782c74 = EVP_MD_size(DAT_01782cb8);
    if (DAT_01782c74 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x3d6);
  DAT_01782cc0 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782cc0 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 0x80;
  }
  else {
    DAT_01782c78 = EVP_MD_size(DAT_01782cc0);
    if (DAT_01782c78 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x3d0);
  DAT_01782cc8 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782cc8 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 0x100;
  }
  else {
    DAT_01782c7c = EVP_MD_size(DAT_01782cc8);
    if (DAT_01782c7c < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x3d7);
  DAT_01782cd0 = EVP_get_digestbyname(pcVar2);
  if (DAT_01782cd0 == (EVP_MD *)0x0) {
    DAT_01782c44 = DAT_01782c44 | 0x200;
  }
  else {
    DAT_01782c80 = EVP_MD_size(DAT_01782cd0);
    if (DAT_01782c80 < 0) goto LAB_00ad238c;
  }
  pcVar2 = OBJ_nid2sn(0x72);
  DAT_01782cd8 = EVP_get_digestbyname(pcVar2);
  if ((DAT_01782cd8 == (EVP_MD *)0x0) ||
     (DAT_01782c84 = EVP_MD_size(DAT_01782cd8), -1 < DAT_01782c84)) {
    pcVar2 = OBJ_nid2sn(0x2a3);
    DAT_01782ce0 = EVP_get_digestbyname(pcVar2);
    if ((DAT_01782ce0 == (EVP_MD *)0x0) ||
       (DAT_01782c88 = EVP_MD_size(DAT_01782ce0), -1 < DAT_01782c88)) {
      pcVar2 = OBJ_nid2sn(0x2a2);
      DAT_01782ce8 = EVP_get_digestbyname(pcVar2);
      if ((DAT_01782ce8 == (EVP_MD *)0x0) ||
         (DAT_01782c8c = EVP_MD_size(DAT_01782ce8), -1 < DAT_01782c8c)) {
        if (DAT_01782c90 == (EVP_MD *)0x0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ssl_digest_methods[SSL_MD_MD5_IDX] != NULL",
                      "ssl/ssl_ciph.c",0x197);
        }
        if (DAT_01782c98 == (EVP_MD *)0x0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ssl_digest_methods[SSL_MD_SHA1_IDX] != NULL",
                      "ssl/ssl_ciph.c",0x198);
        }
        DAT_01782c48 = 0;
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost-mac",-1);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        ENGINE_finish(local_38);
        DAT_0176c410 = local_3c;
        if (local_3c == 0) {
          DAT_01782c44 = DAT_01782c44 | 8;
        }
        else {
          DAT_01782c6c = 0x20;
        }
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost-mac-12",-1);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        ENGINE_finish(local_38);
        DAT_0176c420 = local_3c;
        if (local_3c == 0) {
          DAT_01782c44 = DAT_01782c44 | 0x100;
        }
        else {
          DAT_01782c7c = 0x20;
        }
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost2001",-1);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        ENGINE_finish(local_38);
        if (local_3c == 0) {
          DAT_01782c48 = DAT_01782c48 | 0xa000000000;
        }
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost2012_256",-1);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        ENGINE_finish(local_38);
        if (local_3c == 0) {
          DAT_01782c48 = DAT_01782c48 | 0x8000000000;
        }
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost2012_512",-1);
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        iVar1 = ENGINE_finish(local_38);
        uVar5 = DAT_01782c48._4_4_;
        if (local_3c == 0) {
          uVar5 = DAT_01782c48._4_4_ | 0x80;
          DAT_01782c48 = DAT_01782c48 | 0x8000000000;
        }
        if (((uVar5 ^ 0xffffffff) & 0xa0) == 0) {
          DAT_01782c48 = DAT_01782c48 | 0x10;
        }
        return iVar1;
      }
    }
  }
LAB_00ad238c:
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: ssl_mac_secret_size[i] >= 0","ssl/ssl_ciph.c",0x193);
}

