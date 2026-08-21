
int FUN_00a5f46c(long *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  BIO_METHOD *pBVar12;
  BIO *pBVar13;
  stack_st_X509 *psVar14;
  undefined8 uVar15;
  ASN1_INTEGER *pAVar16;
  X509_EXTENSION *ex;
  BIO *out;
  ASN1_OBJECT *a;
  ASN1_OCTET_STRING *v;
  EVP_PKEY *pkey;
  X509 *pXVar17;
  X509_NAME *pXVar18;
  BIO *pBVar19;
  ASN1_TIME *pAVar20;
  GENERAL_NAMES *a_00;
  int *piVar21;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar22;
  ASN1_GENERALIZEDTIME *__dest;
  void *pvVar23;
  char *__s;
  FILE *fp;
  long lVar24;
  char *pcVar25;
  OCSP_RESPONSE *resp;
  OCSP_BASICRESP *bs;
  X509_STORE *st;
  OCSP_SINGLERESP *single;
  X509_PUBKEY *pXVar26;
  ulong *puVar27;
  bool bVar28;
  BIGNUM *pBVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  ulong *puVar33;
  ulong **ppuVar34;
  char *pcVar35;
  size_t sVar36;
  undefined8 *puVar37;
  long lVar38;
  long lVar39;
  BIGNUM *local_338;
  BIGNUM *local_330;
  BIGNUM *local_328;
  BIGNUM *local_320;
  BIGNUM *local_318;
  BIGNUM *local_310;
  BIGNUM *local_308;
  int *local_300;
  ASN1_GENERALIZEDTIME *local_2f8;
  BIGNUM *local_2f0;
  ASN1_GENERALIZEDTIME *local_2e8 [16];
  ulong *local_268 [64];
  long local_68;
  
                    /* try { // try from 00a5f488 to 00b5f4d7 has its CatchHandler @ 00a5f660 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar38 = *param_1;
  if (((int)param_1[0x30] == 2) &&
     (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2))
  {
    lVar30 = lVar38 + 0x4f8;
  }
  else {
    lVar30 = lVar38 + 0x440;
  }
  lVar24 = lVar38 + 0x440;
  pBVar12 = BIO_s_mem();
  pBVar13 = BIO_new(pBVar12);
                    /* try { // try from 00a5f4f4 to 00b5f52b has its CatchHandler @ 00a5f644 */
  if (*(char *)(lVar38 + 0x4b0) != '\0') {
    lVar39 = *param_1;
    psVar14 = SSL_get_peer_cert_chain(*(SSL **)(param_2 + 0x18));
    if (psVar14 != (stack_st_X509 *)0x0) {
      iVar8 = OPENSSL_sk_num();
                    /* try { // try from 00a5f52c to 00b5f557 has its CatchHandler @ 00a5f308 */
      iVar9 = FUN_00a2e0d0(lVar39,iVar8);
      if (iVar9 == 0) {
                    /* try { // try from 00a5f558 to 00b5f56b has its CatchHandler @ 00a5f64c */
        pBVar12 = BIO_s_mem();
        pBVar19 = BIO_new(pBVar12);
                    /* try { // try from 00a5f57c to 00b5f58f has its CatchHandler @ 00a5f65c */
        if (0 < iVar8) {
                    /* try { // try from 00a5f594 to 00b5f5a7 has its CatchHandler @ 00a5f660 */
          iVar9 = 0;
          do {
            pXVar17 = (X509 *)OPENSSL_sk_value(psVar14,iVar9);
            local_300 = (int *)0x0;
            pXVar18 = X509_get_subject_name(pXVar17);
            X509_NAME_print_ex(pBVar19,pXVar18,0,0x82031f);
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
                    /* try { // try from 00a5f5f8 to 00b5f5ff has its CatchHandler @ 00a5f648 */
                    /* try { // try from 00a5f604 to 00b5f60b has its CatchHandler @ 00a5f640 */
            FUN_00a2e1a0(lVar39,iVar9,"Subject",local_2f8,lVar32);
                    /* try { // try from 00a5f61c to 00b5f623 has its CatchHandler @ 00a5f644 */
                    /* try { // try from 00a5f624 to 00b5f68b has its CatchHandler @ 00a5f308 */
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
            pXVar18 = X509_get_issuer_name(pXVar17);
                    /* catch() { ... } // from try @ 00a5f39c with catch @ 00a5f638 */
                    /* catch() { ... } // from try @ 00a5f384 with catch @ 00a5f63c */
                    /* catch() { ... } // from try @ 00a5f3c8 with catch @ 00a5f640
                       catch() { ... } // from try @ 00a5f604 with catch @ 00a5f640 */
                    /* catch() { ... } // from try @ 00a5f4f4 with catch @ 00a5f644
                       catch() { ... } // from try @ 00a5f61c with catch @ 00a5f644 */
            X509_NAME_print_ex(pBVar19,pXVar18,0,0x82031f);
                    /* catch() { ... } // from try @ 00a5f43c with catch @ 00a5f648
                       catch() { ... } // from try @ 00a5f5f8 with catch @ 00a5f648 */
                    /* catch() { ... } // from try @ 00a5f368 with catch @ 00a5f64c
                       catch() { ... } // from try @ 00a5f558 with catch @ 00a5f64c */
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
                    /* catch() { ... } // from try @ 00a5f3f8 with catch @ 00a5f65c
                       catch() { ... } // from try @ 00a5f57c with catch @ 00a5f65c */
                    /* catch() { ... } // from try @ 00a5f488 with catch @ 00a5f660
                       catch() { ... } // from try @ 00a5f594 with catch @ 00a5f660 */
            FUN_00a2e1a0(lVar39,iVar9,"Issuer",local_2f8,lVar32);
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
                    /* try { // try from 00a5f68c to 00b5f6df has its CatchHandler @ 00a5f68c
                       catch() { ... } // from try @ 00a5f68c with catch @ 00a5f68c
                       catch() { ... } // from try @ 00a5f7dc with catch @ 00a5f68c
                       catch() { ... } // from try @ 00a5f8ac with catch @ 00a5f68c */
            uVar15 = X509_get_version(pXVar17);
            BIO_printf(pBVar19,"%lx",uVar15);
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
            FUN_00a2e1a0(lVar39,iVar9,"Version",local_2f8,lVar32);
                    /* try { // try from 00a5f6e0 to 00b5f6f7 has its CatchHandler @ 00a5f8d0 */
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
            pAVar16 = X509_get_serialNumber(pXVar17);
                    /* try { // try from 00a5f6fc to 00b5f70b has its CatchHandler @ 00a5f8c8 */
            if (pAVar16->type == 0x102) {
              BIO_puts(pBVar19,"-");
            }
                    /* try { // try from 00a5f714 to 00b5f723 has its CatchHandler @ 00a5f8c4 */
            if (0 < pAVar16->length) {
              lVar32 = 0;
              do {
                BIO_printf(pBVar19,"%02x",(ulong)pAVar16->data[lVar32]);
                lVar32 = lVar32 + 1;
                    /* try { // try from 00a5f744 to 00b5f757 has its CatchHandler @ 00a5f8c0 */
              } while (lVar32 < pAVar16->length);
            }
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
                    /* try { // try from 00a5f768 to 00b5f79b has its CatchHandler @ 00a5f8e0 */
            FUN_00a2e1a0(lVar39,iVar9,"Serial Number",local_2f8,lVar32);
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
            local_308 = (BIGNUM *)0x0;
            pAVar22 = ASN1_STRING_new();
            if (pAVar22 != (ASN1_STRING *)0x0) {
              X509_get0_signature(&local_300,&local_308,pXVar17);
                    /* try { // try from 00a5f7ac to 00b5f7db has its CatchHandler @ 00a5f8cc */
              X509_signature_print(pBVar19,(X509_ALGOR *)local_308,pAVar22);
              ASN1_STRING_free(pAVar22);
              if (local_308 != (BIGNUM *)0x0) {
                i2a_ASN1_OBJECT(pBVar19,(ASN1_OBJECT *)local_308->d);
                    /* try { // try from 00a5f7dc to 00b5f807 has its CatchHandler @ 00a5f68c */
                lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
                FUN_00a2e1a0(lVar39,iVar9,"Public Key Algorithm",local_2f8,lVar32);
                    /* try { // try from 00a5f808 to 00b5f81b has its CatchHandler @ 00a5f8d0 */
                BIO_ctrl(pBVar19,1,0,(void *)0x0);
              }
            }
            uVar15 = X509_get0_extensions(pXVar17);
                    /* try { // try from 00a5f82c to 00b5f83f has its CatchHandler @ 00a5f8e0 */
            iVar11 = OPENSSL_sk_num();
            if ((0 < iVar11) && (iVar11 = OPENSSL_sk_num(uVar15), 0 < iVar11)) {
              iVar11 = 0;
              do {
                ex = (X509_EXTENSION *)OPENSSL_sk_value(uVar15,iVar11);
                pBVar12 = BIO_s_mem();
                out = BIO_new(pBVar12);
                if (out == (BIO *)0x0) break;
                a = X509_EXTENSION_get_object(ex);
                i2t_ASN1_OBJECT((char *)local_2e8,0x80,a);
                    /* try { // try from 00a5f88c to 00b5f893 has its CatchHandler @ 00a5f8c0 */
                iVar10 = X509V3_EXT_print(out,ex,0,0);
                if (iVar10 == 0) {
                    /* try { // try from 00a5f8a4 to 00b5f8ab has its CatchHandler @ 00a5f8cc */
                  v = X509_EXTENSION_get_data(ex);
                    /* try { // try from 00a5f8ac to 00b5f90b has its CatchHandler @ 00a5f68c */
                  ASN1_STRING_print(out,v);
                }
                    /* catch() { ... } // from try @ 00a5f744 with catch @ 00a5f8c0
                       catch() { ... } // from try @ 00a5f88c with catch @ 00a5f8c0 */
                    /* catch() { ... } // from try @ 00a5f714 with catch @ 00a5f8c4 */
                    /* catch() { ... } // from try @ 00a5f6fc with catch @ 00a5f8c8 */
                BIO_ctrl(out,0x73,0,&local_2f0);
                    /* catch() { ... } // from try @ 00a5f7ac with catch @ 00a5f8cc
                       catch() { ... } // from try @ 00a5f8a4 with catch @ 00a5f8cc */
                    /* catch() { ... } // from try @ 00a5f6e0 with catch @ 00a5f8d0
                       catch() { ... } // from try @ 00a5f808 with catch @ 00a5f8d0 */
                puVar27 = local_2f0->d;
                if (puVar27 != (ulong *)0x0) {
                  puVar33 = (ulong *)0x0;
                  ppuVar34 = local_268;
                  pBVar29 = local_2f0;
                  do {
                    /* catch() { ... } // from try @ 00a5f768 with catch @ 00a5f8e0
                       catch() { ... } // from try @ 00a5f82c with catch @ 00a5f8e0 */
                    lVar32 = *(long *)&pBVar29->top;
                    puVar1 = &DAT_013c996e;
                    if (*(char *)(lVar32 + (long)puVar33) == '\n') {
                      puVar33 = (ulong *)((long)puVar33 + 1);
                      puVar1 = &DAT_01458dec;
                    }
                    for (; (puVar33 < puVar27 && (*(char *)(lVar32 + (long)puVar33) == ' '));
                        puVar33 = (ulong *)((long)puVar33 + 1)) {
                    /* try { // try from 00a5f90c to 00b5f96b has its CatchHandler @ 00a5f90c
                       catch() { ... } // from try @ 00a5f90c with catch @ 00a5f90c
                       catch() { ... } // from try @ 00a5fb30 with catch @ 00a5f90c
                       catch() { ... } // from try @ 00a5fc28 with catch @ 00a5f90c */
                    }
                    if (puVar33 < puVar27) {
                      iVar10 = FUN_00a241ac(ppuVar34,(long)&local_68 - (long)ppuVar34,&DAT_013c7491,
                                            puVar1,*(undefined1 *)(lVar32 + (long)puVar33));
                      ppuVar34 = (ulong **)((long)ppuVar34 + (long)iVar10);
                      puVar27 = local_2f0->d;
                      pBVar29 = local_2f0;
                    }
                    puVar33 = (ulong *)((long)puVar33 + 1);
                  } while (puVar33 < puVar27);
                }
                FUN_00a2e2a4(lVar39,iVar9,local_2e8,local_268);
                    /* try { // try from 00a5f96c to 00b5f983 has its CatchHandler @ 00a5fc50 */
                BIO_free(out);
                iVar11 = iVar11 + 1;
                iVar10 = OPENSSL_sk_num(uVar15);
              } while (iVar11 < iVar10);
            }
                    /* try { // try from 00a5f988 to 00b5f997 has its CatchHandler @ 00a5fc40 */
            pAVar20 = (ASN1_TIME *)X509_get0_notBefore(pXVar17);
            ASN1_TIME_print(pBVar19,pAVar20);
                    /* try { // try from 00a5f9a0 to 00b5f9b3 has its CatchHandler @ 00a5fc3c */
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
                    /* try { // try from 00a5f9cc to 00b5f9eb has its CatchHandler @ 00a5fc44 */
            FUN_00a2e1a0(lVar39,iVar9,"Start date",local_2f8,lVar32);
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
            pAVar20 = (ASN1_TIME *)X509_get0_notAfter(pXVar17);
            ASN1_TIME_print(pBVar19,pAVar20);
                    /* try { // try from 00a5f9fc to 00b5fa2f has its CatchHandler @ 00a5fc60 */
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
            FUN_00a2e1a0(lVar39,iVar9,"Expire date",local_2f8,lVar32);
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
                    /* try { // try from 00a5fa40 to 00b5fa7b has its CatchHandler @ 00a5fc4c */
            pkey = X509_get_pubkey(pXVar17);
            if (pkey == (EVP_PKEY *)0x0) {
              FUN_00a38740(lVar39,"   Unable to load public key\n");
            }
            else {
              iVar11 = EVP_PKEY_id(pkey);
              if (iVar11 == 0x74) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a60098 with catch @ 00a600c8
                        */
                uVar15 = EVP_PKEY_get0_DSA(pkey);
                DSA_get0_pqg(uVar15,&local_2f0,&local_308,&local_310);
                    /* try { // try from 00a600e4 to 00b6022b has its CatchHandler @ 00a600e4
                       catch() { ... } // from try @ 00a600e4 with catch @ 00a600e4
                       catch() { ... } // from try @ 00a602ac with catch @ 00a600e4 */
                DSA_get0_key(uVar15,&local_320,&local_318);
                pBVar29 = local_2f0;
                FUN_00a241ac(local_268,0x20,"%s(%s)","dsa","p");
                if (pBVar29 != (BIGNUM *)0x0) {
                  BN_print(pBVar19,pBVar29);
                }
                lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                BIO_ctrl(pBVar19,1,0,(void *)0x0);
                pBVar29 = local_308;
                FUN_00a241ac(local_268,0x20,"%s(%s)","dsa","q");
                if (pBVar29 != (BIGNUM *)0x0) {
                  BN_print(pBVar19,pBVar29);
                }
                lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                BIO_ctrl(pBVar19,1,0,(void *)0x0);
                pBVar29 = local_310;
                FUN_00a241ac(local_268,0x20,"%s(%s)","dsa",&DAT_012f093b);
                if (pBVar29 != (BIGNUM *)0x0) {
                  BN_print(pBVar19,pBVar29);
                }
                lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* try { // try from 00a6022c to 00b6025f has its CatchHandler @ 00a6032c */
                FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                BIO_ctrl(pBVar19,1,0,(void *)0x0);
                pBVar29 = local_318;
                    /* try { // try from 00a60260 to 00b60273 has its CatchHandler @ 00a602f8 */
                    /* try { // try from 00a60278 to 00b602ab has its CatchHandler @ 00a602fc */
                FUN_00a241ac(local_268,0x20,"%s(%s)","dsa","priv_key");
                if (pBVar29 != (BIGNUM *)0x0) {
                  BN_print(pBVar19,pBVar29);
                }
                lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* try { // try from 00a602ac to 00b60347 has its CatchHandler @ 00a600e4 */
                FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                BIO_ctrl(pBVar19,1,0,(void *)0x0);
                pcVar25 = "dsa";
LAB_00a602ec:
                pBVar29 = local_320;
                FUN_00a241ac(local_268,0x20,"%s(%s)",pcVar25,"pub_key");
joined_r0x00a602f8:
                    /* catch() { ... } // from try @ 00a60260 with catch @ 00a602f8 */
                if (pBVar29 != (BIGNUM *)0x0) {
                    /* catch() { ... } // from try @ 00a60278 with catch @ 00a602fc */
                  BN_print(pBVar19,pBVar29);
                }
                lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* catch() { ... } // from try @ 00a6022c with catch @ 00a6032c */
                FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                BIO_ctrl(pBVar19,1,0,(void *)0x0);
              }
              else {
                if (iVar11 == 0x1c) {
                  uVar15 = EVP_PKEY_get0_DH(pkey);
                  DH_get0_pqg(uVar15,&local_2f0,&local_308,&local_310);
                  DH_get0_key(uVar15,&local_320,&local_318);
                  pBVar29 = local_2f0;
                  FUN_00a241ac(local_268,0x20,"%s(%s)",&DAT_013dbfb2,"p");
                  if (pBVar29 != (BIGNUM *)0x0) {
                    /* try { // try from 00a5fef8 to 00b5ff0b has its CatchHandler @ 00a60070 */
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                    /* try { // try from 00a5ff28 to 00b5ff2f has its CatchHandler @ 00a60054 */
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_308;
                    /* try { // try from 00a5ff40 to 00b5ff43 has its CatchHandler @ 00a60070 */
                    /* try { // try from 00a5ff60 to 00b5ff6f has its CatchHandler @ 00a60018 */
                  FUN_00a241ac(local_268,0x20,"%s(%s)",&DAT_013dbfb2,"q");
                  if (pBVar29 != (BIGNUM *)0x0) {
                    /* try { // try from 00a5ff70 to 00b5ff8b has its CatchHandler @ 00a60000 */
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* try { // try from 00a5ff8c to 00b60097 has its CatchHandler @ 00a5fe6c */
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_310;
                  FUN_00a241ac(local_268,0x20,"%s(%s)",&DAT_013dbfb2,&DAT_012f093b);
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5ff70 with catch @ 00a60000
                        */
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5ff60 with catch @ 00a60018
                        */
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_318;
                  FUN_00a241ac(local_268,0x20,"%s(%s)",&DAT_013dbfb2,"priv_key");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5ff28 with catch @ 00a60054
                        */
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5fef8 with catch @ 00a60070
                       catch(type#1 @ 00000000) { ... } // from try @ 00a5ff40 with catch @ 00a60070
                        */
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                    /* try { // try from 00a60098 to 00b600a3 has its CatchHandler @ 00a600c8 */
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pcVar25 = "dh";
                    /* try { // try from 00a600a4 to 00b600e3 has its CatchHandler @ 00a5fe6c */
                  goto LAB_00a602ec;
                }
                if (iVar11 == 6) {
                  uVar15 = EVP_PKEY_get0_RSA(pkey);
                    /* try { // try from 00a5fa8c to 00b5fadb has its CatchHandler @ 00a5fc64 */
                  RSA_get0_key(uVar15,&local_2f0,&local_308,&local_310);
                  RSA_get0_factors(uVar15,&local_318,&local_320);
                  RSA_get0_crt_params(uVar15,&local_328,&local_330,&local_338);
                  BN_print(pBVar19,local_2f0);
                  lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
                  FUN_00a2e1a0(lVar39,iVar9,"RSA Public Key",local_2f8,lVar32);
                    /* try { // try from 00a5faf8 to 00b5fb2f has its CatchHandler @ 00a5fc48 */
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_2f0;
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa","n");
                  if (pBVar29 != (BIGNUM *)0x0) {
                    /* try { // try from 00a5fb30 to 00b5fb5b has its CatchHandler @ 00a5f90c */
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* try { // try from 00a5fb5c to 00b5fb6f has its CatchHandler @ 00a5fc50 */
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_308;
                    /* try { // try from 00a5fb80 to 00b5fb93 has its CatchHandler @ 00a5fc60 */
                    /* try { // try from 00a5fb98 to 00b5fbab has its CatchHandler @ 00a5fc64 */
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa",&DAT_012f05c1);
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_310;
                    /* try { // try from 00a5fbfc to 00b5fc03 has its CatchHandler @ 00a5fc4c */
                    /* try { // try from 00a5fc08 to 00b5fc0f has its CatchHandler @ 00a5fc44 */
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa","d");
                  if (pBVar29 != (BIGNUM *)0x0) {
                    /* try { // try from 00a5fc20 to 00b5fc27 has its CatchHandler @ 00a5fc48 */
                    /* try { // try from 00a5fc28 to 00b5fc8f has its CatchHandler @ 00a5f90c */
                    BN_print(pBVar19,pBVar29);
                  }
                    /* catch() { ... } // from try @ 00a5f9a0 with catch @ 00a5fc3c */
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* catch() { ... } // from try @ 00a5f988 with catch @ 00a5fc40 */
                    /* catch() { ... } // from try @ 00a5f9cc with catch @ 00a5fc44
                       catch() { ... } // from try @ 00a5fc08 with catch @ 00a5fc44 */
                    /* catch() { ... } // from try @ 00a5faf8 with catch @ 00a5fc48
                       catch() { ... } // from try @ 00a5fc20 with catch @ 00a5fc48 */
                    /* catch() { ... } // from try @ 00a5fa40 with catch @ 00a5fc4c
                       catch() { ... } // from try @ 00a5fbfc with catch @ 00a5fc4c */
                    /* catch() { ... } // from try @ 00a5f96c with catch @ 00a5fc50
                       catch() { ... } // from try @ 00a5fb5c with catch @ 00a5fc50 */
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                    /* catch() { ... } // from try @ 00a5f9fc with catch @ 00a5fc60
                       catch() { ... } // from try @ 00a5fb80 with catch @ 00a5fc60 */
                    /* catch() { ... } // from try @ 00a5fa8c with catch @ 00a5fc64
                       catch() { ... } // from try @ 00a5fb98 with catch @ 00a5fc64 */
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_318;
                    /* try { // try from 00a5fc90 to 00b5fcef has its CatchHandler @ 00a5fc90
                       catch() { ... } // from try @ 00a5fc90 with catch @ 00a5fc90
                       catch() { ... } // from try @ 00a5fcf4 with catch @ 00a5fc90 */
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa","p");
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_320;
                    /* try { // try from 00a5fcf0 to 00b5fcf3 has its CatchHandler @ 00a5fd2c */
                    /* try { // try from 00a5fcf4 to 00b5fd3f has its CatchHandler @ 00a5fc90 */
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa","q");
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                    /* catch() { ... } // from try @ 00a5fcf0 with catch @ 00a5fd2c */
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_328;
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa",&DAT_013caa51);
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                    /* try { // try from 00a5fdd0 to 00b5fe1b has its CatchHandler @ 00a5fdd0
                       catch() { ... } // from try @ 00a5fdd0 with catch @ 00a5fdd0
                       catch() { ... } // from try @ 00a5fe20 with catch @ 00a5fdd0 */
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_330;
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa",&DAT_013caa56);
                  if (pBVar29 != (BIGNUM *)0x0) {
                    BN_print(pBVar19,pBVar29);
                  }
                    /* try { // try from 00a5fe1c to 00b5fe1f has its CatchHandler @ 00a5fe58 */
                  lVar32 = BIO_ctrl(pBVar19,3,0,local_2e8);
                    /* try { // try from 00a5fe20 to 00b5fe6b has its CatchHandler @ 00a5fdd0 */
                  FUN_00a2e1a0(lVar39,iVar9,local_268,local_2e8[0],lVar32);
                  BIO_ctrl(pBVar19,1,0,(void *)0x0);
                  pBVar29 = local_338;
                    /* catch() { ... } // from try @ 00a5fe1c with catch @ 00a5fe58 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5ff8c with catch @ 00a5fe6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a600a4 with catch @ 00a5fe6c
                        */
                  FUN_00a241ac(local_268,0x20,"%s(%s)","rsa",&DAT_013caa5b);
                  goto joined_r0x00a602f8;
                }
              }
              EVP_PKEY_free(pkey);
            }
            if (local_300 != (int *)0x0) {
              if (0 < *local_300) {
                lVar32 = 0;
                do {
                  BIO_printf(pBVar19,"%02x:",(ulong)*(byte *)(*(long *)(local_300 + 2) + lVar32));
                  lVar32 = lVar32 + 1;
                } while (lVar32 < *local_300);
              }
              lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
              FUN_00a2e1a0(lVar39,iVar9,"Signature",local_2f8,lVar32);
              BIO_ctrl(pBVar19,1,0,(void *)0x0);
            }
            PEM_write_bio_X509(pBVar19,pXVar17);
            lVar32 = BIO_ctrl(pBVar19,3,0,&local_2f8);
            FUN_00a2e1a0(lVar39,iVar9,"Cert",local_2f8,lVar32);
            BIO_ctrl(pBVar19,1,0,(void *)0x0);
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar8);
        }
        BIO_free(pBVar19);
      }
    }
  }
  puVar37 = (undefined8 *)(param_2 + 0x18);
  pXVar17 = SSL_get_peer_certificate((SSL *)*puVar37);
  *(X509 **)(param_2 + 0x20) = pXVar17;
  if (pXVar17 == (X509 *)0x0) {
    if ((param_3 & 1) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_00a38a08(lVar38,"SSL: couldn\'t get peer certificate!");
      iVar8 = 0x33;
    }
    goto LAB_00a612d4;
  }
  pcVar25 = (char *)(lVar38 + 0xb08);
  pcVar35 = "Server";
  if (((int)param_1[0x30] == 2) &&
     (pcVar35 = "Proxy",
     *(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2))
  {
    pcVar35 = "Server";
  }
  FUN_00a38740(lVar38,"%s certificate:\n",pcVar35);
  pXVar18 = X509_get_subject_name(*(X509 **)(param_2 + 0x20));
  pBVar12 = BIO_s_mem();
  pBVar19 = BIO_new(pBVar12);
  if (pBVar19 == (BIO *)0x0) {
    bVar7 = true;
  }
  else {
    iVar8 = X509_NAME_print_ex(pBVar19,pXVar18,0,0x30000);
    BIO_ctrl(pBVar19,0x73,0,local_268);
    sVar36 = *local_268[0];
    if (0x3ffe < sVar36) {
      sVar36 = 0x3fff;
    }
    memcpy(pcVar25,(void *)local_268[0][1],sVar36);
    *(undefined1 *)(lVar38 + sVar36 + 0xb08) = 0;
    BIO_free(pBVar19);
    bVar7 = iVar8 == 0;
  }
  pcVar35 = "[NONE]";
  if (!bVar7) {
    pcVar35 = pcVar25;
  }
  FUN_00a38740(lVar38," subject: %s\n",pcVar35);
  pAVar20 = (ASN1_TIME *)X509_get0_notBefore(*(undefined8 *)(param_2 + 0x20));
  ASN1_TIME_print(pBVar13,pAVar20);
  lVar39 = BIO_ctrl(pBVar13,3,0,&local_300);
  FUN_00a38740(lVar38," start date: %.*s\n",lVar39,local_300);
  BIO_ctrl(pBVar13,1,0,(void *)0x0);
  pAVar20 = (ASN1_TIME *)X509_get0_notAfter(*(undefined8 *)(param_2 + 0x20));
  ASN1_TIME_print(pBVar13,pAVar20);
  lVar39 = BIO_ctrl(pBVar13,3,0,&local_300);
  FUN_00a38740(lVar38," expire date: %.*s\n",lVar39,local_300);
  BIO_ctrl(pBVar13,1,0,(void *)0x0);
  BIO_free(pBVar13);
  if (((int)param_1[0x30] != 2) ||
     (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2))
  {
    if (*(char *)((long)param_1 + 0x341) == '\0') goto LAB_00a60ae4;
    pXVar17 = *(X509 **)(param_2 + 0x20);
    lVar39 = *param_1;
    if ((int)param_1[0x30] == 2) goto LAB_00a606b4;
    pcVar35 = (char *)param_1[0x18];
LAB_00a606e8:
                    /* try { // try from 00a606e8 to 00b6071f has its CatchHandler @ 00a606e8
                       catch() { ... } // from try @ 00a606e8 with catch @ 00a606e8
                       catch() { ... } // from try @ 00a60730 with catch @ 00a606e8 */
    plVar31 = param_1 + 0x16;
LAB_00a606ec:
    lVar32 = plVar31[3];
    if ((*(char *)((long)param_1 + 0x3c2) == '\0') ||
       (iVar8 = inet_pton(10,pcVar35,local_268), iVar8 == 0)) {
                    /* try { // try from 00a60730 to 00b607af has its CatchHandler @ 00a606e8 */
      iVar8 = inet_pton(2,pcVar35,local_268);
      sVar36 = 0;
      if (iVar8 != 0) {
        sVar36 = 4;
      }
      iVar9 = 2;
      if (iVar8 != 0) {
        iVar9 = 7;
      }
    }
    else {
      iVar9 = 7;
      sVar36 = 0x10;
                    /* try { // try from 00a60720 to 00b6072f has its CatchHandler @ 00a60794 */
    }
    a_00 = X509_get_ext_d2i(pXVar17,0x55,(int *)0x0,(int *)0x0);
    if (a_00 != (GENERAL_NAMES *)0x0) {
      iVar8 = OPENSSL_sk_num(a_00);
      if (iVar8 < 1) {
        bVar5 = false;
        bVar6 = false;
        bVar28 = false;
        bVar7 = false;
      }
      else {
        if (iVar9 == 2) {
                    /* try { // try from 00a60940 to 00b60977 has its CatchHandler @ 00a60940
                       catch() { ... } // from try @ 00a60940 with catch @ 00a60940
                       catch() { ... } // from try @ 00a60988 with catch @ 00a60940 */
          bVar7 = false;
          bVar28 = false;
          iVar9 = 0;
          do {
            piVar21 = (int *)OPENSSL_sk_value(a_00,iVar9);
            iVar11 = *piVar21;
            if (iVar11 == 2) {
              bVar7 = true;
                    /* try { // try from 00a60988 to 00b60a07 has its CatchHandler @ 00a60940 */
LAB_00a6098c:
              __s = (char *)ASN1_STRING_get0_data(*(undefined8 *)(piVar21 + 2));
              iVar11 = ASN1_STRING_length(*(ASN1_STRING **)(piVar21 + 2));
              sVar36 = strlen(__s);
              if ((sVar36 == (long)iVar11) && (iVar11 = FUN_00a6a560(__s,pcVar35), iVar11 != 0)) {
                    /* try { // try from 00a61158 to 00b611d7 has its CatchHandler @ 00a61110 */
                FUN_00a38740(lVar39," subjectAltName: host \"%s\" matched cert\'s \"%s\"\n",lVar32,
                             __s);
                bVar6 = false;
                bVar5 = true;
                goto LAB_00a60a4c;
              }
            }
            else {
              if (iVar11 == 7) {
                bVar28 = true;
              }
                    /* try { // try from 00a60978 to 00b60987 has its CatchHandler @ 00a609ec */
              if (iVar11 == 2) goto LAB_00a6098c;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
        else {
                    /* catch() { ... } // from try @ 00a60720 with catch @ 00a60794 */
          if (iVar9 == 7) {
            bVar7 = false;
            bVar28 = false;
            bVar6 = false;
            iVar9 = 0;
            do {
                    /* try { // try from 00a607b0 to 00b607e7 has its CatchHandler @ 00a607b0
                       catch() { ... } // from try @ 00a607b0 with catch @ 00a607b0
                       catch() { ... } // from try @ 00a607f8 with catch @ 00a607b0 */
              piVar21 = (int *)OPENSSL_sk_value(a_00,iVar9);
              if (*piVar21 == 2) {
                bVar7 = true;
                    /* try { // try from 00a607e8 to 00b607f7 has its CatchHandler @ 00a6085c */
              }
              else if (*piVar21 == 7) {
                bVar28 = true;
                pvVar23 = (void *)ASN1_STRING_get0_data(*(undefined8 *)(piVar21 + 2));
                    /* try { // try from 00a607f8 to 00b60877 has its CatchHandler @ 00a607b0 */
                iVar11 = ASN1_STRING_length(*(ASN1_STRING **)(piVar21 + 2));
                if ((sVar36 == (long)iVar11) &&
                   (iVar11 = memcmp(pvVar23,local_268,sVar36), iVar11 == 0)) {
                  FUN_00a38740(lVar39," subjectAltName: host \"%s\" matched cert\'s IP address!\n",
                               lVar32);
                  bVar6 = true;
                }
              }
              iVar9 = iVar9 + 1;
            } while (iVar8 != iVar9);
            bVar5 = false;
            goto LAB_00a60a4c;
          }
          bVar7 = false;
          bVar28 = false;
          iVar11 = 0;
          do {
            piVar21 = (int *)OPENSSL_sk_value(a_00,iVar11);
                    /* try { // try from 00a60a08 to 00b60a3f has its CatchHandler @ 00a60a08
                       catch() { ... } // from try @ 00a60a08 with catch @ 00a60a08
                       catch() { ... } // from try @ 00a60a50 with catch @ 00a60a08 */
            iVar10 = *piVar21;
            if (iVar10 == 2) {
              bVar7 = true;
                    /* catch() { ... } // from try @ 00a60978 with catch @ 00a609ec */
              if (iVar9 == 2) goto LAB_00a60a28;
            }
            else {
              if (iVar10 == 7) {
                bVar28 = true;
              }
              if (iVar10 == iVar9) {
LAB_00a60a28:
                ASN1_STRING_get0_data(*(undefined8 *)(piVar21 + 2));
                ASN1_STRING_length(*(ASN1_STRING **)(piVar21 + 2));
              }
            }
            iVar11 = iVar11 + 1;
                    /* try { // try from 00a60a40 to 00b60a4f has its CatchHandler @ 00a60ab4 */
          } while (iVar8 != iVar11);
        }
        bVar5 = false;
        bVar6 = false;
      }
LAB_00a60a4c:
                    /* try { // try from 00a60a50 to 00b60acf has its CatchHandler @ 00a60a08 */
      GENERAL_NAMES_free(a_00);
      if ((!bVar5) && (!bVar6)) {
        if (!bVar7) goto LAB_00a6085c;
        goto LAB_00a60a74;
      }
      goto LAB_00a60ae4;
    }
    bVar28 = false;
LAB_00a6085c:
                    /* catch() { ... } // from try @ 00a607e8 with catch @ 00a6085c */
    if (bVar28) {
LAB_00a60a74:
      FUN_00a38740(lVar39," subjectAltName does not match %s\n",lVar32);
      FUN_00a38a08(lVar39,
                   "SSL: no alternative certificate subject name matches target host name \'%s\'",
                   lVar32);
      iVar8 = 0x33;
    }
    else {
      local_2e8[0] = (ASN1_GENERALIZEDTIME *)&DAT_013c996e;
      pXVar18 = X509_get_subject_name(pXVar17);
                    /* try { // try from 00a60878 to 00b608af has its CatchHandler @ 00a60878
                       catch() { ... } // from try @ 00a60878 with catch @ 00a60878
                       catch() { ... } // from try @ 00a608c0 with catch @ 00a60878 */
      if (pXVar18 == (X509_NAME *)0x0) {
LAB_00a60ab4:
                    /* catch() { ... } // from try @ 00a60a40 with catch @ 00a60ab4 */
        iVar8 = 0;
LAB_00a60ab8:
        if (local_2e8[0] == (ASN1_GENERALIZEDTIME *)&DAT_013c996e) {
          local_2e8[0] = (ASN1_GENERALIZEDTIME *)0x0;
        }
        if (iVar8 == 0) {
          if (local_2e8[0] == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00a60e04;
          iVar8 = FUN_00a6a560(local_2e8[0],pcVar35);
          if (iVar8 != 0) {
            FUN_00a38740(lVar39," common name: %s (matched)\n");
            iVar8 = 0;
            goto joined_r0x00a60acc;
          }
          FUN_00a38a08(lVar39,
                       "SSL: certificate subject name \'%s\' does not match target host name \'%s\'"
                       ,local_2e8[0],lVar32);
          goto LAB_00a61140;
        }
      }
      else {
        iVar8 = -1;
        do {
          iVar9 = iVar8;
          iVar8 = X509_NAME_get_index_by_NID(pXVar18,0xd,iVar9);
        } while (-1 < iVar8);
        if (iVar9 < 0) goto LAB_00a60ab4;
        ne = X509_NAME_get_entry(pXVar18,iVar9);
        pAVar22 = X509_NAME_ENTRY_get_data(ne);
                    /* try { // try from 00a608b0 to 00b608bf has its CatchHandler @ 00a60924 */
        iVar8 = 0;
        if (pAVar22 == (ASN1_STRING *)0x0) goto LAB_00a60ab8;
        iVar8 = ASN1_STRING_type(pAVar22);
                    /* try { // try from 00a608c0 to 00b6093f has its CatchHandler @ 00a60878 */
        if (iVar8 == 0xc) {
          iVar8 = ASN1_STRING_length(pAVar22);
          if (iVar8 < 0) goto LAB_00a60dd4;
          __dest = CRYPTO_malloc(iVar8 + 1,"vtls/openssl.c",0x4cb);
          local_2e8[0] = __dest;
          if (__dest != (ASN1_GENERALIZEDTIME *)0x0) {
            pvVar23 = (void *)ASN1_STRING_get0_data(pAVar22);
            memcpy(__dest,pvVar23,(long)iVar8);
            *(char *)((long)&local_2e8[0]->length + (long)iVar8) = '\0';
                    /* catch() { ... } // from try @ 00a608b0 with catch @ 00a60924 */
            if (local_2e8[0] == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00a60e04;
            goto LAB_00a60ddc;
          }
        }
        else {
          iVar8 = ASN1_STRING_to_UTF8((uchar **)local_2e8,pAVar22);
LAB_00a60dd4:
                    /* catch() { ... } // from try @ 00a60d60 with catch @ 00a60dd4 */
          if (local_2e8[0] != (ASN1_GENERALIZEDTIME *)0x0) {
LAB_00a60ddc:
            strlen((char *)local_2e8[0]);
            iVar9 = FUN_00a2c6d4();
            if (iVar9 == iVar8) goto LAB_00a60ab4;
                    /* try { // try from 00a60df0 to 00b60e27 has its CatchHandler @ 00a60df0
                       catch() { ... } // from try @ 00a60df0 with catch @ 00a60df0
                       catch() { ... } // from try @ 00a60e38 with catch @ 00a60df0 */
            FUN_00a38a08(lVar39,"SSL: illegal cert name field");
            iVar8 = 0x33;
            goto LAB_00a60ab8;
          }
        }
LAB_00a60e04:
        FUN_00a38a08(lVar39,"SSL: unable to obtain common name from peer certificate");
LAB_00a61140:
        iVar8 = 0x33;
                    /* try { // try from 00a61148 to 00b61157 has its CatchHandler @ 00a611bc */
      }
joined_r0x00a60acc:
      if (local_2e8[0] != (ASN1_GENERALIZEDTIME *)0x0) {
                    /* try { // try from 00a60ad0 to 00b60b07 has its CatchHandler @ 00a60ad0
                       catch() { ... } // from try @ 00a60ad0 with catch @ 00a60ad0
                       catch() { ... } // from try @ 00a60b18 with catch @ 00a60ad0 */
        CRYPTO_free(local_2e8[0]);
      }
      if (iVar8 == 0) goto LAB_00a60ae4;
    }
LAB_00a611a8:
    X509_free(*(X509 **)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x20) = 0;
    goto LAB_00a612d4;
  }
  if (*(char *)((long)param_1 + 0x381) != '\0') {
    pXVar17 = *(X509 **)(param_2 + 0x20);
    lVar39 = *param_1;
LAB_00a606b4:
    plVar31 = param_1 + 0x2b;
    bVar7 = *(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec)
            != 2;
    plVar2 = param_1 + 0x16;
    if (bVar7) {
      plVar2 = plVar31;
    }
    pcVar35 = (char *)plVar2[2];
    if (!bVar7) goto LAB_00a606e8;
    goto LAB_00a606ec;
  }
LAB_00a60ae4:
  pXVar18 = X509_get_issuer_name(*(X509 **)(param_2 + 0x20));
  pBVar12 = BIO_s_mem();
  pBVar13 = BIO_new(pBVar12);
  if (pBVar13 == (BIO *)0x0) {
LAB_00a60bc8:
    if ((param_3 & 1) != 0) {
                    /* try { // try from 00a60bd0 to 00b60bdf has its CatchHandler @ 00a60c44 */
      FUN_00a38a08(lVar38,"SSL: couldn\'t get X509-issuer name!");
    }
                    /* try { // try from 00a60be0 to 00b60c5f has its CatchHandler @ 00a60b98 */
    iVar8 = 0x23;
  }
  else {
                    /* try { // try from 00a60b08 to 00b60b17 has its CatchHandler @ 00a60b7c */
    iVar8 = X509_NAME_print_ex(pBVar13,pXVar18,0,0x30000);
                    /* try { // try from 00a60b18 to 00b60b97 has its CatchHandler @ 00a60ad0 */
    BIO_ctrl(pBVar13,0x73,0,local_268);
    sVar36 = *local_268[0];
    if (0x3ffe < sVar36) {
      sVar36 = 0x3fff;
    }
    memcpy(pcVar25,(void *)local_268[0][1],sVar36);
    *(undefined1 *)(lVar38 + sVar36 + 0xb08) = 0;
    BIO_free(pBVar13);
    if (iVar8 == 0) goto LAB_00a60bc8;
    FUN_00a38740(lVar38," issuer: %s\n",pcVar25);
                    /* catch() { ... } // from try @ 00a60b08 with catch @ 00a60b7c */
    lVar39 = lVar24;
                    /* try { // try from 00a60b98 to 00b60bcf has its CatchHandler @ 00a60b98
                       catch() { ... } // from try @ 00a60b98 with catch @ 00a60b98
                       catch() { ... } // from try @ 00a60be0 with catch @ 00a60b98 */
    if (((int)param_1[0x30] == 2) &&
       (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2
       )) {
      if (*(long *)(lVar38 + 0x550) != 0) {
LAB_00a60c34:
                    /* catch() { ... } // from try @ 00a60bd0 with catch @ 00a60c44 */
        if (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec)
            != 2) {
          lVar39 = lVar38 + 0x4f8;
        }
LAB_00a60c58:
                    /* try { // try from 00a60c60 to 00b60c97 has its CatchHandler @ 00a60c60
                       catch() { ... } // from try @ 00a60c60 with catch @ 00a60c60
                       catch() { ... } // from try @ 00a60ca8 with catch @ 00a60c60 */
        fp = fopen(*(char **)(lVar39 + 0x58),"r");
        if (fp == (FILE *)0x0) {
          if ((param_3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00a60c98 with catch @ 00a60d0c */
                    /* try { // try from 00a60d28 to 00b60d5f has its CatchHandler @ 00a60d28
                       catch() { ... } // from try @ 00a60d28 with catch @ 00a60d28
                       catch() { ... } // from try @ 00a60d70 with catch @ 00a60d28 */
            if (((int)param_1[0x30] == 2) &&
               (*(int *)((long)param_1 +
                        (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
              lVar24 = lVar38 + 0x4f8;
            }
            FUN_00a38a08(lVar38,"SSL: Unable to open issuer cert (%s)",
                         *(undefined8 *)(lVar24 + 0x58));
          }
          pXVar17 = *(X509 **)(param_2 + 0x20);
        }
        else {
          pXVar17 = PEM_read_X509(fp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
          if (pXVar17 == (X509 *)0x0) {
            if ((param_3 & 1) != 0) {
                    /* try { // try from 00a60d60 to 00b60d6f has its CatchHandler @ 00a60dd4 */
                    /* try { // try from 00a60d70 to 00b60def has its CatchHandler @ 00a60d28 */
              if (((int)param_1[0x30] == 2) &&
                 (*(int *)((long)param_1 +
                          (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
                lVar24 = lVar38 + 0x4f8;
              }
              FUN_00a38a08(lVar38,"SSL: Unable to read issuer cert (%s)",
                           *(undefined8 *)(lVar24 + 0x58));
            }
            X509_free(*(X509 **)(param_2 + 0x20));
            X509_free((X509 *)0x0);
            fclose(fp);
            iVar8 = 0x53;
            goto LAB_00a612d4;
          }
          fclose(fp);
                    /* try { // try from 00a60c98 to 00b60ca7 has its CatchHandler @ 00a60d0c */
          iVar8 = X509_check_issued(pXVar17,*(X509 **)(param_2 + 0x20));
          if (iVar8 == 0) {
                    /* try { // try from 00a60e28 to 00b60e37 has its CatchHandler @ 00a60e9c */
                    /* try { // try from 00a60e38 to 00b60eb7 has its CatchHandler @ 00a60df0 */
            if (((int)param_1[0x30] == 2) &&
               (*(int *)((long)param_1 +
                        (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
              lVar24 = lVar38 + 0x4f8;
            }
            FUN_00a38740(lVar38," SSL certificate issuer check ok (%s)\n",
                         *(undefined8 *)(lVar24 + 0x58));
            X509_free(pXVar17);
            goto LAB_00a60e6c;
          }
                    /* try { // try from 00a60ca8 to 00b60d27 has its CatchHandler @ 00a60c60 */
          if ((param_3 & 1) != 0) {
            if (((int)param_1[0x30] == 2) &&
               (*(int *)((long)param_1 +
                        (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
              lVar24 = lVar38 + 0x4f8;
            }
            FUN_00a38a08(lVar38,"SSL: Certificate issuer check failed (%s)",
                         *(undefined8 *)(lVar24 + 0x58));
          }
          X509_free(*(X509 **)(param_2 + 0x20));
        }
        X509_free(pXVar17);
        *(undefined8 *)(param_2 + 0x20) = 0;
        iVar8 = 0x53;
        goto LAB_00a612d4;
      }
    }
    else if (*(long *)(lVar38 + 0x498) != 0) {
      if ((int)param_1[0x30] == 2) goto LAB_00a60c34;
      goto LAB_00a60c58;
    }
LAB_00a60e6c:
    lVar24 = SSL_get_verify_result((SSL *)*puVar37);
    *(long *)(lVar30 + 0x48) = lVar24;
    if (lVar24 == 0) {
                    /* try { // try from 00a60ef0 to 00b60eff has its CatchHandler @ 00a60f64 */
      FUN_00a38740(lVar38," SSL certificate verify ok.\n");
LAB_00a60f30:
      iVar8 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 00a60e28 with catch @ 00a60e9c */
      if (((int)param_1[0x30] == 2) &&
         (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) !=
          2)) {
        cVar3 = (char)param_1[0x70];
      }
      else {
                    /* try { // try from 00a60eb8 to 00b60eef has its CatchHandler @ 00a60eb8
                       catch() { ... } // from try @ 00a60eb8 with catch @ 00a60eb8
                       catch() { ... } // from try @ 00a60f00 with catch @ 00a60eb8 */
        cVar3 = (char)param_1[0x68];
      }
      if (cVar3 == '\0') {
        pcVar25 = X509_verify_cert_error_string(lVar24);
        FUN_00a38740(lVar38," SSL certificate verify result: %s (%ld), continuing anyway.\n",pcVar25
                     ,lVar24);
        goto LAB_00a60f30;
      }
      if ((param_3 & 1) == 0) {
                    /* try { // try from 00a60f00 to 00b60f7f has its CatchHandler @ 00a60eb8 */
        iVar8 = 0x33;
      }
      else {
        pcVar25 = X509_verify_cert_error_string(lVar24);
        FUN_00a38a08(lVar38,"SSL certificate verify result: %s (%ld)",pcVar25,lVar24);
        iVar8 = 0x33;
      }
    }
  }
  iVar9 = (int)param_1[0x30];
  if ((iVar9 == 2) &&
     (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2))
  {
    if (*(char *)((long)param_1 + 0x382) != '\0') {
LAB_00a60f78:
      lVar24 = *param_1;
                    /* try { // try from 00a60f80 to 00b60fb7 has its CatchHandler @ 00a60f80
                       catch() { ... } // from try @ 00a60f80 with catch @ 00a60f80
                       catch() { ... } // from try @ 00a60fc8 with catch @ 00a60f80 */
      lVar30 = SSL_ctrl((SSL *)*puVar37,0x46,0,local_268);
      if (local_268[0] == (ulong *)0x0) {
        FUN_00a38a08(lVar24,"No OCSP response received");
        resp = (OCSP_RESPONSE *)0x0;
        iVar8 = 0x5b;
      }
      else {
        resp = d2i_OCSP_RESPONSE((OCSP_RESPONSE **)0x0,(uchar **)local_268,lVar30);
        if (resp == (OCSP_RESPONSE *)0x0) {
          FUN_00a38a08(lVar24,"Invalid OCSP response");
          iVar8 = 0x5b;
        }
        else {
                    /* try { // try from 00a60fb8 to 00b60fc7 has its CatchHandler @ 00a6102c */
          iVar8 = OCSP_response_status(resp);
          if (iVar8 == 0) {
                    /* catch() { ... } // from try @ 00a60fb8 with catch @ 00a6102c */
            bs = OCSP_response_get1_basic(resp);
            if (bs == (OCSP_BASICRESP *)0x0) {
              FUN_00a38a08(lVar24,"Invalid OCSP response");
              iVar8 = 0x5b;
            }
            else {
              psVar14 = SSL_get_peer_cert_chain((SSL *)*puVar37);
                    /* try { // try from 00a61048 to 00b6107f has its CatchHandler @ 00a61048
                       catch() { ... } // from try @ 00a61048 with catch @ 00a61048
                       catch() { ... } // from try @ 00a61090 with catch @ 00a61048 */
              st = SSL_CTX_get_cert_store(*(SSL_CTX **)(param_2 + 0x10));
              iVar8 = OCSP_basic_verify(bs,psVar14,st,0);
              if (iVar8 < 1) {
                pcVar25 = "OCSP response verification failed";
LAB_00a61184:
                FUN_00a38a08(lVar24,pcVar25);
LAB_00a6118c:
                iVar8 = 0x5b;
              }
              else {
                iVar8 = OCSP_resp_count(bs);
                if (0 < iVar8) {
                    /* try { // try from 00a61080 to 00b6108f has its CatchHandler @ 00a610f4 */
                  iVar8 = 0;
                  do {
                    /* try { // try from 00a61090 to 00b6110f has its CatchHandler @ 00a61048 */
                    single = OCSP_resp_get0(bs,iVar8);
                    if (single != (OCSP_SINGLERESP *)0x0) {
                      iVar9 = OCSP_single_get0_status
                                        (single,(int *)&local_308,local_2e8,
                                         (ASN1_GENERALIZEDTIME **)&local_2f0,&local_2f8);
                      iVar11 = OCSP_check_validity((ASN1_GENERALIZEDTIME *)local_2f0,local_2f8,300,
                                                   -1);
                      if (iVar11 == 0) {
                        pcVar25 = "OCSP response has expired";
                        goto LAB_00a61184;
                      }
                      pcVar25 = OCSP_cert_status_str((long)iVar9);
                      FUN_00a38740(lVar24,"SSL certificate status: %s (%d)\n",pcVar25,iVar9);
                      if (iVar9 == 2) goto LAB_00a6118c;
                    /* catch() { ... } // from try @ 00a61080 with catch @ 00a610f4 */
                      if (iVar9 == 1) {
                        pcVar25 = OCSP_crl_reason_str((long)(int)local_308);
                        FUN_00a38a08(lVar24,"SSL certificate revocation reason: %s (%d)",pcVar25,
                                     (ulong)local_308 & 0xffffffff);
                        goto LAB_00a6118c;
                      }
                    }
                    iVar8 = iVar8 + 1;
                    iVar9 = OCSP_resp_count(bs);
                  } while (iVar8 < iVar9);
                }
                iVar8 = 0;
                    /* try { // try from 00a61110 to 00b61147 has its CatchHandler @ 00a61110
                       catch() { ... } // from try @ 00a61110 with catch @ 00a61110
                       catch() { ... } // from try @ 00a61158 with catch @ 00a61110 */
              }
              OCSP_BASICRESP_free(bs);
            }
          }
          else {
                    /* try { // try from 00a60fc8 to 00b61047 has its CatchHandler @ 00a60f80 */
            pcVar25 = OCSP_response_status_str((long)iVar8);
            FUN_00a38a08(lVar24,"Invalid OCSP response status: %s (%d)",pcVar25,iVar8);
            iVar8 = 0x5b;
          }
        }
      }
      OCSP_RESPONSE_free(resp);
      if (iVar8 != 0) goto LAB_00a611a8;
                    /* catch() { ... } // from try @ 00a61148 with catch @ 00a611bc */
      iVar9 = (int)param_1[0x30];
      iVar8 = 0;
      goto LAB_00a611c4;
    }
    if ((param_3 & 1) == 0) {
      iVar8 = 0;
    }
LAB_00a611d4:
                    /* try { // try from 00a611d8 to 00b6120f has its CatchHandler @ 00a611d8
                       catch() { ... } // from try @ 00a611d8 with catch @ 00a611d8
                       catch() { ... } // from try @ 00a61220 with catch @ 00a611d8 */
    if (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2
       ) goto LAB_00a611f4;
    lVar30 = 0x1f;
  }
  else {
                    /* catch() { ... } // from try @ 00a60ef0 with catch @ 00a60f64 */
    if (*(char *)((long)param_1 + 0x342) != '\0') goto LAB_00a60f78;
LAB_00a611c4:
    if ((param_3 & 1) == 0) {
      iVar8 = 0;
    }
    if (iVar9 == 2) goto LAB_00a611d4;
LAB_00a611f4:
    lVar30 = 0x1e;
  }
  piVar21 = *(int **)(lVar38 + lVar30 * 8 + 0x670);
  local_300 = piVar21;
                    /* try { // try from 00a61210 to 00b6121f has its CatchHandler @ 00a61284 */
  if ((iVar8 == 0) && (piVar21 != (int *)0x0)) {
    lVar30 = *(long *)(param_2 + 0x20);
    local_268[0] = (ulong *)0x0;
    if (lVar30 == 0) {
LAB_00a612ac:
      iVar8 = 0x5a;
    }
    else {
                    /* try { // try from 00a61220 to 00b6129f has its CatchHandler @ 00a611d8 */
      pXVar26 = (X509_PUBKEY *)X509_get_X509_PUBKEY(lVar30);
      iVar9 = i2d_X509_PUBKEY(pXVar26,(uchar **)0x0);
      if (iVar9 < 1) goto LAB_00a612ac;
      lVar24 = (long)iVar9;
      puVar27 = (ulong *)(*(code *)PTR_malloc_017699f8)(lVar24);
      local_268[0] = puVar27;
      if (puVar27 == (ulong *)0x0) goto LAB_00a612ac;
      pXVar26 = (X509_PUBKEY *)X509_get_X509_PUBKEY(lVar30);
      iVar11 = i2d_X509_PUBKEY(pXVar26,(uchar **)local_268);
      iVar8 = 0x5a;
      if ((iVar9 == iVar11) && (local_268[0] != (ulong *)0x0)) {
                    /* catch() { ... } // from try @ 00a61210 with catch @ 00a61284 */
        if ((long)local_268[0] - (long)puVar27 == lVar24) {
                    /* try { // try from 00a612a0 to 00b612d7 has its CatchHandler @ 00a612a0
                       catch() { ... } // from try @ 00a612a0 with catch @ 00a612a0
                       catch() { ... } // from try @ 00a612e8 with catch @ 00a612a0 */
          iVar8 = FUN_00a2e3e8(lVar38,piVar21,puVar27,lVar24);
        }
        else {
          iVar8 = 0x5a;
        }
      }
      (*(code *)PTR_free_01769a00)(puVar27);
      if (iVar8 == 0) goto LAB_00a612c0;
    }
    FUN_00a38a08(lVar38,"SSL: public key does not match pinned public key!");
  }
LAB_00a612c0:
  X509_free(*(X509 **)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 8) = 5;
LAB_00a612d4:
                    /* try { // try from 00a612d8 to 00b612e7 has its CatchHandler @ 00a6134c */
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00a612e8 to 00b61367 has its CatchHandler @ 00a612a0 */
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a612d8 with catch @ 00a6134c */
  __stack_chk_fail();
}

