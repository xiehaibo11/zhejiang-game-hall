
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
  
  DAT_01d38ec0 = 0;
  ssl_sort_cipher_list();
  lVar6 = 0;
  do {
    if (*(int *)((long)&DAT_018a3be0 + lVar6) == 0) {
                    /* catch() { ... } // from try @ 00ac1fdc with catch @ 00ac271c */
      *(undefined8 *)((long)&DAT_01d38f70 + lVar6) = 0;
    }
    else {
      pcVar2 = OBJ_nid2sn(*(int *)((long)&DAT_018a3be0 + lVar6));
      pEVar3 = EVP_get_cipherbyname(pcVar2);
                    /* catch() { ... } // from try @ 00ac1ffc with catch @ 00ac26fc */
      *(EVP_CIPHER **)((long)&DAT_01d38f70 + lVar6) = pEVar3;
      if (pEVar3 == (EVP_CIPHER *)0x0) {
        DAT_01d38ec0 = DAT_01d38ec0 | *(uint *)((long)&DAT_018a3bdc + lVar6);
      }
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0xa0);
  DAT_01d38ec4 = 0;
  pcVar2 = OBJ_nid2sn(4);
  DAT_01d38f10 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f10 == (EVP_MD *)0x0) {
                    /* catch() { ... } // from try @ 00ac1f88 with catch @ 00ac275c */
    DAT_01d38ec4 = DAT_01d38ec4 | 1;
                    /* catch() { ... } // from try @ 00ac1f38 with catch @ 00ac2760 */
  }
  else {
    DAT_01d38ee0 = EVP_MD_size(DAT_01d38f10);
                    /* catch() { ... } // from try @ 00ac1f9c with catch @ 00ac274c */
    if (DAT_01d38ee0 < 0) goto LAB_00ac2bb8;
  }
                    /* catch() { ... } // from try @ 00ac1f08 with catch @ 00ac2764
                       catch() { ... } // from try @ 00ac206c with catch @ 00ac2764 */
                    /* catch() { ... } // from try @ 00ac1ee8 with catch @ 00ac2768 */
  pcVar2 = OBJ_nid2sn(0x40);
  DAT_01d38f18 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f18 == (EVP_MD *)0x0) {
    DAT_01d38ec4 = DAT_01d38ec4 | 2;
  }
  else {
                    /* catch() { ... } // from try @ 00ac2818 with catch @ 00ac2778
                       catch() { ... } // from try @ 00ac297c with catch @ 00ac2778
                       catch() { ... } // from try @ 00ac2ab4 with catch @ 00ac2778 */
    DAT_01d38ee4 = EVP_MD_size(DAT_01d38f18);
    if (DAT_01d38ee4 < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x329);
  DAT_01d38f20 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f20 == (EVP_MD *)0x0) {
    DAT_01d38ec4 = DAT_01d38ec4 | 4;
  }
  else {
    DAT_01d38ee8 = EVP_MD_size(DAT_01d38f20);
    if (DAT_01d38ee8 < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x32f);
  DAT_01d38f28 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f28 == (EVP_MD *)0x0) {
    DAT_01d38ec4 = DAT_01d38ec4 | 8;
  }
  else {
    DAT_01d38eec = EVP_MD_size(DAT_01d38f28);
    if (DAT_01d38eec < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x2a0);
  DAT_01d38f30 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f30 == (EVP_MD *)0x0) {
                    /* try { // try from 00ac2818 to 00bc287b has its CatchHandler @ 00ac2778 */
    DAT_01d38ec4 = DAT_01d38ec4 | 0x10;
  }
  else {
    DAT_01d38ef0 = EVP_MD_size(DAT_01d38f30);
                    /* try { // try from 00ac2810 to 00bc2817 has its CatchHandler @ 00ac2ab4 */
    if (DAT_01d38ef0 < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x2a1);
  DAT_01d38f38 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f38 == (EVP_MD *)0x0) {
    DAT_01d38ec4 = DAT_01d38ec4 | 0x20;
  }
  else {
    DAT_01d38ef4 = EVP_MD_size(DAT_01d38f38);
    if (DAT_01d38ef4 < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x3d6);
  DAT_01d38f40 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f40 == (EVP_MD *)0x0) {
                    /* try { // try from 00ac287c to 00bc2887 has its CatchHandler @ 00ac2b58 */
    DAT_01d38ec4 = DAT_01d38ec4 | 0x80;
  }
  else {
    DAT_01d38ef8 = EVP_MD_size(DAT_01d38f40);
    if (DAT_01d38ef8 < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x3d0);
  DAT_01d38f48 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f48 == (EVP_MD *)0x0) {
    DAT_01d38ec4 = DAT_01d38ec4 | 0x100;
  }
  else {
    DAT_01d38efc = EVP_MD_size(DAT_01d38f48);
    if (DAT_01d38efc < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x3d7);
  DAT_01d38f50 = EVP_get_digestbyname(pcVar2);
  if (DAT_01d38f50 == (EVP_MD *)0x0) {
    DAT_01d38ec4 = DAT_01d38ec4 | 0x200;
  }
  else {
    DAT_01d38f00 = EVP_MD_size(DAT_01d38f50);
    if (DAT_01d38f00 < 0) goto LAB_00ac2bb8;
  }
  pcVar2 = OBJ_nid2sn(0x72);
  DAT_01d38f58 = EVP_get_digestbyname(pcVar2);
  if ((DAT_01d38f58 == (EVP_MD *)0x0) ||
     (DAT_01d38f04 = EVP_MD_size(DAT_01d38f58), -1 < DAT_01d38f04)) {
    pcVar2 = OBJ_nid2sn(0x2a3);
    DAT_01d38f60 = EVP_get_digestbyname(pcVar2);
                    /* try { // try from 00ac2920 to 00bc292b has its CatchHandler @ 00ac2b50 */
    if ((DAT_01d38f60 == (EVP_MD *)0x0) ||
       (DAT_01d38f08 = EVP_MD_size(DAT_01d38f60), -1 < DAT_01d38f08)) {
      pcVar2 = OBJ_nid2sn(0x2a2);
      DAT_01d38f68 = EVP_get_digestbyname(pcVar2);
                    /* try { // try from 00ac2930 to 00bc2937 has its CatchHandler @ 00ac2b00 */
      if ((DAT_01d38f68 == (EVP_MD *)0x0) ||
         (DAT_01d38f0c = EVP_MD_size(DAT_01d38f68), -1 < DAT_01d38f0c)) {
        if (DAT_01d38f10 == (EVP_MD *)0x0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ssl_digest_methods[SSL_MD_MD5_IDX] != NULL",
                      "ssl/ssl_ciph.c",0x197);
        }
        if (DAT_01d38f18 == (EVP_MD *)0x0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ssl_digest_methods[SSL_MD_SHA1_IDX] != NULL",
                      "ssl/ssl_ciph.c",0x198);
        }
        DAT_01d38ec8 = 0;
        local_38 = (ENGINE *)0x0;
                    /* try { // try from 00ac296c to 00bc297b has its CatchHandler @ 00ac2abc */
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost-mac",-1);
                    /* try { // try from 00ac297c to 00bc2aab has its CatchHandler @ 00ac2778 */
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        ENGINE_finish(local_38);
        DAT_01d1e1c0 = local_3c;
        if (local_3c == 0) {
          DAT_01d38ec4 = DAT_01d38ec4 | 8;
        }
        else {
          DAT_01d38eec = 0x20;
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
        DAT_01d1e1d0 = local_3c;
        if (local_3c == 0) {
          DAT_01d38ec4 = DAT_01d38ec4 | 0x100;
        }
        else {
          DAT_01d38efc = 0x20;
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
                    /* try { // try from 00ac2aac to 00bc2ab3 has its CatchHandler @ 00ac2ab4 */
                    /* catch() { ... } // from try @ 00ac2810 with catch @ 00ac2ab4
                       catch() { ... } // from try @ 00ac2aac with catch @ 00ac2ab4
                       try { // try from 00ac2ab4 to 00bc2b7f has its CatchHandler @ 00ac2778 */
          DAT_01d38ec8 = DAT_01d38ec8 | 0xa000000000;
        }
                    /* catch() { ... } // from try @ 00ac296c with catch @ 00ac2abc */
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost2012_256",-1);
                    /* catch() { ... } // from try @ 00ac2930 with catch @ 00ac2b00 */
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        ENGINE_finish(local_38);
        if (local_3c == 0) {
          DAT_01d38ec8 = DAT_01d38ec8 | 0x8000000000;
        }
        local_38 = (ENGINE *)0x0;
        local_3c = 0;
        pEVar4 = EVP_PKEY_asn1_find_str(&local_38,"gost2012_512",-1);
                    /* catch() { ... } // from try @ 00ac2920 with catch @ 00ac2b50 */
                    /* catch() { ... } // from try @ 00ac28a4 with catch @ 00ac2b54 */
                    /* catch() { ... } // from try @ 00ac287c with catch @ 00ac2b58 */
        if ((pEVar4 != (EVP_PKEY_ASN1_METHOD *)0x0) &&
           (iVar1 = EVP_PKEY_asn1_get0_info
                              (&local_3c,(int *)0x0,(int *)0x0,(char **)0x0,(char **)0x0,pEVar4),
           iVar1 < 1)) {
          local_3c = 0;
        }
        iVar1 = ENGINE_finish(local_38);
        uVar5 = DAT_01d38ec8._4_4_;
        if (local_3c == 0) {
          uVar5 = DAT_01d38ec8._4_4_ | 0x80;
          DAT_01d38ec8 = DAT_01d38ec8 | 0x8000000000;
        }
        if (((uVar5 ^ 0xffffffff) & 0xa0) == 0) {
          DAT_01d38ec8 = DAT_01d38ec8 | 0x10;
        }
        return iVar1;
      }
    }
  }
LAB_00ac2bb8:
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: ssl_mac_secret_size[i] >= 0","ssl/ssl_ciph.c",0x193);
}

