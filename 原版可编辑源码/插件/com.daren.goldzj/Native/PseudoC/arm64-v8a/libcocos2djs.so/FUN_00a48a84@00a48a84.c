
int FUN_00a48a84(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  BIO_METHOD *pBVar11;
  BIO *pBVar12;
  stack_st_X509 *psVar13;
  undefined8 uVar14;
  ASN1_INTEGER *pAVar15;
  X509_EXTENSION *ex;
  BIO *out;
  ASN1_OBJECT *a;
  ASN1_OCTET_STRING *v;
  EVP_PKEY *pkey;
  X509 *pXVar16;
  X509_NAME *pXVar17;
  BIO *pBVar18;
  ASN1_TIME *pAVar19;
  GENERAL_NAMES *a_00;
  int *piVar20;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar21;
  ASN1_GENERALIZEDTIME *__dest;
  void *pvVar22;
  char *__s;
  FILE *fp;
  long lVar23;
  char *pcVar24;
  OCSP_RESPONSE *resp;
  OCSP_BASICRESP *bs;
  X509_STORE *st;
  OCSP_SINGLERESP *single;
  X509_PUBKEY *pXVar25;
  ulong *puVar26;
  bool bVar27;
  BIGNUM *pBVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  ulong *puVar32;
  ulong **ppuVar33;
  char *pcVar34;
  size_t sVar35;
  undefined8 *puVar36;
  long lVar37;
  long lVar38;
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00a48900 with catch @ 00a48aac */
                    /* catch() { ... } // from try @ 00a488f4 with catch @ 00a48ab0 */
                    /* catch() { ... } // from try @ 00a488d4 with catch @ 00a48ab4 */
  lVar37 = *param_1;
                    /* catch() { ... } // from try @ 00a4890c with catch @ 00a48ac4 */
  if (((int)param_1[0x30] == 2) &&
     (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2))
  {
    lVar29 = lVar37 + 0x4f8;
  }
  else {
    lVar29 = lVar37 + 0x440;
  }
  lVar23 = lVar37 + 0x440;
  pBVar11 = BIO_s_mem();
  pBVar12 = BIO_new(pBVar11);
  if (*(char *)(lVar37 + 0x4b0) != '\0') {
                    /* try { // try from 00a48b1c to 00b48b6f has its CatchHandler @ 00a48b1c
                       catch() { ... } // from try @ 00a48b1c with catch @ 00a48b1c
                       catch() { ... } // from try @ 00a48cd4 with catch @ 00a48b1c */
    lVar38 = *param_1;
    psVar13 = SSL_get_peer_cert_chain(*(SSL **)(param_2 + 0x18));
    if (psVar13 != (stack_st_X509 *)0x0) {
      iVar7 = OPENSSL_sk_num();
      iVar8 = FUN_00a186e8(lVar38,iVar7);
      if (iVar8 == 0) {
                    /* try { // try from 00a48b70 to 00b48b87 has its CatchHandler @ 00a48d50 */
        pBVar11 = BIO_s_mem();
        pBVar18 = BIO_new(pBVar11);
                    /* try { // try from 00a48b90 to 00b48b9b has its CatchHandler @ 00a48d4c */
        if (0 < iVar7) {
                    /* try { // try from 00a48b9c to 00b48ba7 has its CatchHandler @ 00a48d48 */
                    /* try { // try from 00a48ba8 to 00b48cd3 has its CatchHandler @ 00a48d60 */
          iVar8 = 0;
          do {
            pXVar16 = (X509 *)OPENSSL_sk_value(psVar13,iVar8);
            local_300 = (int *)0x0;
            pXVar17 = X509_get_subject_name(pXVar16);
            X509_NAME_print_ex(pBVar18,pXVar17,0,0x82031f);
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
            FUN_00a187b8(lVar38,iVar8,"Subject",local_2f8,lVar31);
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            pXVar17 = X509_get_issuer_name(pXVar16);
            X509_NAME_print_ex(pBVar18,pXVar17,0,0x82031f);
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
            FUN_00a187b8(lVar38,iVar8,"Issuer",local_2f8,lVar31);
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            uVar14 = X509_get_version(pXVar16);
            BIO_printf(pBVar18,"%lx",uVar14);
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
                    /* try { // try from 00a48cd4 to 00b48db7 has its CatchHandler @ 00a48b1c */
            FUN_00a187b8(lVar38,iVar8,"Version",local_2f8,lVar31);
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            pAVar15 = X509_get_serialNumber(pXVar16);
            if (pAVar15->type == 0x102) {
              BIO_puts(pBVar18,"-");
            }
            if (0 < pAVar15->length) {
              lVar31 = 0;
              do {
                    /* catch() { ... } // from try @ 00a48b9c with catch @ 00a48d48 */
                    /* catch() { ... } // from try @ 00a48b90 with catch @ 00a48d4c */
                BIO_printf(pBVar18,"%02x",(ulong)pAVar15->data[lVar31]);
                    /* catch() { ... } // from try @ 00a48b70 with catch @ 00a48d50 */
                lVar31 = lVar31 + 1;
              } while (lVar31 < pAVar15->length);
            }
                    /* catch() { ... } // from try @ 00a48ba8 with catch @ 00a48d60 */
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
            FUN_00a187b8(lVar38,iVar8,"Serial Number",local_2f8,lVar31);
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            local_308 = (BIGNUM *)0x0;
            pAVar21 = ASN1_STRING_new();
            if (pAVar21 != (ASN1_STRING *)0x0) {
                    /* try { // try from 00a48db8 to 00b48e0b has its CatchHandler @ 00a48db8
                       catch() { ... } // from try @ 00a48db8 with catch @ 00a48db8
                       catch() { ... } // from try @ 00a48f6c with catch @ 00a48db8 */
              X509_get0_signature(&local_300,&local_308,pXVar16);
              X509_signature_print(pBVar18,(X509_ALGOR *)local_308,pAVar21);
              ASN1_STRING_free(pAVar21);
              if (local_308 != (BIGNUM *)0x0) {
                i2a_ASN1_OBJECT(pBVar18,(ASN1_OBJECT *)local_308->d);
                lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
                    /* try { // try from 00a48e0c to 00b48e23 has its CatchHandler @ 00a48fe8 */
                FUN_00a187b8(lVar38,iVar8,"Public Key Algorithm",local_2f8,lVar31);
                    /* try { // try from 00a48e2c to 00b48e37 has its CatchHandler @ 00a48fe4 */
                BIO_ctrl(pBVar18,1,0,(void *)0x0);
              }
            }
                    /* try { // try from 00a48e38 to 00b48e43 has its CatchHandler @ 00a48fe0 */
            uVar14 = X509_get0_extensions(pXVar16);
                    /* try { // try from 00a48e44 to 00b48f6b has its CatchHandler @ 00a48ff8 */
            iVar10 = OPENSSL_sk_num();
            if ((0 < iVar10) && (iVar10 = OPENSSL_sk_num(uVar14), 0 < iVar10)) {
              iVar10 = 0;
              do {
                ex = (X509_EXTENSION *)OPENSSL_sk_value(uVar14,iVar10);
                pBVar11 = BIO_s_mem();
                out = BIO_new(pBVar11);
                if (out == (BIO *)0x0) break;
                a = X509_EXTENSION_get_object(ex);
                i2t_ASN1_OBJECT((char *)local_2e8,0x80,a);
                iVar9 = X509V3_EXT_print(out,ex,0,0);
                if (iVar9 == 0) {
                  v = X509_EXTENSION_get_data(ex);
                  ASN1_STRING_print(out,v);
                }
                BIO_ctrl(out,0x73,0,&local_2f0);
                puVar26 = local_2f0->d;
                if (puVar26 != (ulong *)0x0) {
                  puVar32 = (ulong *)0x0;
                  ppuVar33 = local_268;
                  pBVar28 = local_2f0;
                  do {
                    lVar31 = *(long *)&pBVar28->top;
                    pcVar24 = "";
                    if (*(char *)(lVar31 + (long)puVar32) == '\n') {
                      puVar32 = (ulong *)((long)puVar32 + 1);
                      pcVar24 = ", ";
                    }
                    for (; (puVar32 < puVar26 && (*(char *)(lVar31 + (long)puVar32) == ' '));
                        puVar32 = (ulong *)((long)puVar32 + 1)) {
                    }
                    if (puVar32 < puVar26) {
                      iVar9 = FUN_00a0e7c4(ppuVar33,(long)&local_68 - (long)ppuVar33,&DAT_01894b5d,
                                           pcVar24,*(undefined1 *)(lVar31 + (long)puVar32));
                      ppuVar33 = (ulong **)((long)ppuVar33 + (long)iVar9);
                      puVar26 = local_2f0->d;
                      pBVar28 = local_2f0;
                    }
                    puVar32 = (ulong *)((long)puVar32 + 1);
                  } while (puVar32 < puVar26);
                }
                    /* try { // try from 00a48f6c to 00b4904f has its CatchHandler @ 00a48db8 */
                FUN_00a188bc(lVar38,iVar8,local_2e8,local_268);
                BIO_free(out);
                iVar10 = iVar10 + 1;
                iVar9 = OPENSSL_sk_num(uVar14);
              } while (iVar10 < iVar9);
            }
            pAVar19 = (ASN1_TIME *)X509_get0_notBefore(pXVar16);
            ASN1_TIME_print(pBVar18,pAVar19);
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
                    /* catch() { ... } // from try @ 00a48e38 with catch @ 00a48fe0 */
                    /* catch() { ... } // from try @ 00a48e2c with catch @ 00a48fe4 */
            FUN_00a187b8(lVar38,iVar8,"Start date",local_2f8,lVar31);
                    /* catch() { ... } // from try @ 00a48e0c with catch @ 00a48fe8 */
                    /* catch() { ... } // from try @ 00a48e44 with catch @ 00a48ff8 */
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            pAVar19 = (ASN1_TIME *)X509_get0_notAfter(pXVar16);
            ASN1_TIME_print(pBVar18,pAVar19);
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
            FUN_00a187b8(lVar38,iVar8,"Expire date",local_2f8,lVar31);
                    /* try { // try from 00a49050 to 00b490a7 has its CatchHandler @ 00a49050
                       catch() { ... } // from try @ 00a49050 with catch @ 00a49050
                       catch() { ... } // from try @ 00a49208 with catch @ 00a49050 */
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            pkey = X509_get_pubkey(pXVar16);
            if (pkey == (EVP_PKEY *)0x0) {
              FUN_00a22d58(lVar38,"   Unable to load public key\n");
            }
            else {
              iVar10 = EVP_PKEY_id(pkey);
              if (iVar10 == 0x74) {
                uVar14 = EVP_PKEY_get0_DSA(pkey);
                DSA_get0_pqg(uVar14,&local_2f0,&local_308,&local_310);
                DSA_get0_key(uVar14,&local_320,&local_318);
                pBVar28 = local_2f0;
                FUN_00a0e7c4(local_268,0x20,"%s(%s)","dsa","p");
                if (pBVar28 != (BIGNUM *)0x0) {
                  BN_print(pBVar18,pBVar28);
                }
                lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                    /* try { // try from 00a49754 to 00b49837 has its CatchHandler @ 00a49598 */
                FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                BIO_ctrl(pBVar18,1,0,(void *)0x0);
                pBVar28 = local_308;
                FUN_00a0e7c4(local_268,0x20,"%s(%s)","dsa","q");
                if (pBVar28 != (BIGNUM *)0x0) {
                  BN_print(pBVar18,pBVar28);
                }
                    /* catch() { ... } // from try @ 00a49618 with catch @ 00a497c8 */
                lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                    /* catch() { ... } // from try @ 00a4960c with catch @ 00a497cc */
                    /* catch() { ... } // from try @ 00a495ec with catch @ 00a497d0 */
                    /* catch() { ... } // from try @ 00a49624 with catch @ 00a497e0 */
                FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                BIO_ctrl(pBVar18,1,0,(void *)0x0);
                pBVar28 = local_310;
                FUN_00a0e7c4(local_268,0x20,"%s(%s)","dsa",&DAT_01868b26);
                if (pBVar28 != (BIGNUM *)0x0) {
                  BN_print(pBVar18,pBVar28);
                }
                    /* try { // try from 00a49838 to 00b4988b has its CatchHandler @ 00a49838
                       catch() { ... } // from try @ 00a49838 with catch @ 00a49838
                       catch() { ... } // from try @ 00a499f4 with catch @ 00a49838 */
                lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                BIO_ctrl(pBVar18,1,0,(void *)0x0);
                pBVar28 = local_318;
                    /* try { // try from 00a4988c to 00b498a3 has its CatchHandler @ 00a49a70 */
                FUN_00a0e7c4(local_268,0x20,"%s(%s)","dsa","priv_key");
                if (pBVar28 != (BIGNUM *)0x0) {
                  BN_print(pBVar18,pBVar28);
                }
                    /* try { // try from 00a498ac to 00b498b7 has its CatchHandler @ 00a49a6c */
                    /* try { // try from 00a498b8 to 00b498c3 has its CatchHandler @ 00a49a68 */
                lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                    /* try { // try from 00a498c4 to 00b499f3 has its CatchHandler @ 00a49a80 */
                FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                BIO_ctrl(pBVar18,1,0,(void *)0x0);
                pcVar24 = "dsa";
LAB_00a49904:
                pBVar28 = local_320;
                FUN_00a0e7c4(local_268,0x20,"%s(%s)",pcVar24,"pub_key");
joined_r0x00a49910:
                if (pBVar28 != (BIGNUM *)0x0) {
                  BN_print(pBVar18,pBVar28);
                }
                lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                BIO_ctrl(pBVar18,1,0,(void *)0x0);
              }
              else {
                if (iVar10 == 0x1c) {
                    /* try { // try from 00a494b0 to 00b49597 has its CatchHandler @ 00a492f0 */
                  uVar14 = EVP_PKEY_get0_DH(pkey);
                  DH_get0_pqg(uVar14,&local_2f0,&local_308,&local_310);
                  DH_get0_key(uVar14,&local_320,&local_318);
                  pBVar28 = local_2f0;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)",&DAT_018ab9c6,"p");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                    /* catch() { ... } // from try @ 00a49374 with catch @ 00a49528 */
                    /* catch() { ... } // from try @ 00a49368 with catch @ 00a4952c */
                    /* catch() { ... } // from try @ 00a49348 with catch @ 00a49530 */
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                    /* catch() { ... } // from try @ 00a49380 with catch @ 00a49540 */
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_308;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)",&DAT_018ab9c6,"q");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                    /* try { // try from 00a49598 to 00b495eb has its CatchHandler @ 00a49598
                       catch() { ... } // from try @ 00a49598 with catch @ 00a49598
                       catch() { ... } // from try @ 00a49754 with catch @ 00a49598 */
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_310;
                    /* try { // try from 00a495ec to 00b49603 has its CatchHandler @ 00a497d0 */
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)",&DAT_018ab9c6,&DAT_01868b26);
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                    /* try { // try from 00a4960c to 00b49617 has its CatchHandler @ 00a497cc */
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                    /* try { // try from 00a49618 to 00b49623 has its CatchHandler @ 00a497c8 */
                    /* try { // try from 00a49624 to 00b49753 has its CatchHandler @ 00a497e0 */
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_318;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)",&DAT_018ab9c6,"priv_key");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pcVar24 = "dh";
                  goto LAB_00a49904;
                }
                if (iVar10 == 6) {
                  uVar14 = EVP_PKEY_get0_RSA(pkey);
                  RSA_get0_key(uVar14,&local_2f0,&local_308,&local_310);
                    /* try { // try from 00a490a8 to 00b490bf has its CatchHandler @ 00a49288 */
                  RSA_get0_factors(uVar14,&local_318,&local_320);
                    /* try { // try from 00a490c8 to 00b490d3 has its CatchHandler @ 00a49284 */
                  RSA_get0_crt_params(uVar14,&local_328,&local_330,&local_338);
                    /* try { // try from 00a490d4 to 00b490df has its CatchHandler @ 00a49280 */
                  BN_print(pBVar18,local_2f0);
                    /* try { // try from 00a490e0 to 00b49207 has its CatchHandler @ 00a49298 */
                  lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
                  FUN_00a187b8(lVar38,iVar8,"RSA Public Key",local_2f8,lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_2f0;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa","n");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_308;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa",&DAT_01896d0a);
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                    /* try { // try from 00a49208 to 00b492ef has its CatchHandler @ 00a49050 */
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_310;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa","d");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                    /* catch() { ... } // from try @ 00a490d4 with catch @ 00a49280 */
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_318;
                    /* catch() { ... } // from try @ 00a490c8 with catch @ 00a49284 */
                    /* catch() { ... } // from try @ 00a490a8 with catch @ 00a49288 */
                    /* catch() { ... } // from try @ 00a490e0 with catch @ 00a49298 */
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa","p");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                    /* try { // try from 00a492f0 to 00b49347 has its CatchHandler @ 00a492f0
                       catch() { ... } // from try @ 00a492f0 with catch @ 00a492f0
                       catch() { ... } // from try @ 00a494b0 with catch @ 00a492f0 */
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_320;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa","q");
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                    /* try { // try from 00a49348 to 00b4935f has its CatchHandler @ 00a49530 */
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                    /* try { // try from 00a49368 to 00b49373 has its CatchHandler @ 00a4952c */
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_328;
                    /* try { // try from 00a49374 to 00b4937f has its CatchHandler @ 00a49528 */
                    /* try { // try from 00a49380 to 00b494af has its CatchHandler @ 00a49540 */
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa",&DAT_01898110);
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_330;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa",&DAT_01898115);
                  if (pBVar28 != (BIGNUM *)0x0) {
                    BN_print(pBVar18,pBVar28);
                  }
                  lVar31 = BIO_ctrl(pBVar18,3,0,local_2e8);
                  FUN_00a187b8(lVar38,iVar8,local_268,local_2e8[0],lVar31);
                  BIO_ctrl(pBVar18,1,0,(void *)0x0);
                  pBVar28 = local_338;
                  FUN_00a0e7c4(local_268,0x20,"%s(%s)","rsa",&DAT_0189811a);
                  goto joined_r0x00a49910;
                }
              }
              EVP_PKEY_free(pkey);
            }
            if (local_300 != (int *)0x0) {
              if (0 < *local_300) {
                lVar31 = 0;
                do {
                  BIO_printf(pBVar18,"%02x:",(ulong)*(byte *)(*(long *)(local_300 + 2) + lVar31));
                  lVar31 = lVar31 + 1;
                } while (lVar31 < *local_300);
              }
              lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
              FUN_00a187b8(lVar38,iVar8,"Signature",local_2f8,lVar31);
                    /* try { // try from 00a499f4 to 00b49ad7 has its CatchHandler @ 00a49838 */
              BIO_ctrl(pBVar18,1,0,(void *)0x0);
            }
            PEM_write_bio_X509(pBVar18,pXVar16);
            lVar31 = BIO_ctrl(pBVar18,3,0,&local_2f8);
            FUN_00a187b8(lVar38,iVar8,"Cert",local_2f8,lVar31);
            BIO_ctrl(pBVar18,1,0,(void *)0x0);
            iVar8 = iVar8 + 1;
          } while (iVar8 != iVar7);
        }
        BIO_free(pBVar18);
                    /* catch() { ... } // from try @ 00a498b8 with catch @ 00a49a68 */
                    /* catch() { ... } // from try @ 00a498ac with catch @ 00a49a6c */
                    /* catch() { ... } // from try @ 00a4988c with catch @ 00a49a70 */
      }
    }
  }
  puVar36 = (undefined8 *)(param_2 + 0x18);
  pXVar16 = SSL_get_peer_certificate((SSL *)*puVar36);
  *(X509 **)(param_2 + 0x20) = pXVar16;
                    /* catch() { ... } // from try @ 00a498c4 with catch @ 00a49a80 */
  if (pXVar16 == (X509 *)0x0) {
    if ((param_3 & 1) == 0) {
      iVar7 = 0;
    }
    else {
                    /* try { // try from 00a49b64 to 00b49c9b has its CatchHandler @ 00a49d28 */
      FUN_00a23020(lVar37,"SSL: couldn\'t get peer certificate!");
      iVar7 = 0x33;
    }
    goto LAB_00a4a8ec;
  }
  pcVar24 = (char *)(lVar37 + 0xb08);
  pcVar34 = "Server";
  if (((int)param_1[0x30] == 2) &&
     (pcVar34 = "Proxy",
     *(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2))
  {
    pcVar34 = "Server";
  }
  FUN_00a22d58(lVar37,"%s certificate:\n",pcVar34);
                    /* try { // try from 00a49ad8 to 00b49b2b has its CatchHandler @ 00a49ad8
                       catch() { ... } // from try @ 00a49ad8 with catch @ 00a49ad8
                       catch() { ... } // from try @ 00a49c9c with catch @ 00a49ad8 */
  pXVar17 = X509_get_subject_name(*(X509 **)(param_2 + 0x20));
  pBVar11 = BIO_s_mem();
  pBVar18 = BIO_new(pBVar11);
  if (pBVar18 == (BIO *)0x0) {
    bVar6 = true;
  }
  else {
    iVar7 = X509_NAME_print_ex(pBVar18,pXVar17,0,0x30000);
    BIO_ctrl(pBVar18,0x73,0,local_268);
    sVar35 = *local_268[0];
                    /* try { // try from 00a49b2c to 00b49b43 has its CatchHandler @ 00a49d18 */
    if (0x3ffe < sVar35) {
      sVar35 = 0x3fff;
    }
    memcpy(pcVar24,(void *)local_268[0][1],sVar35);
    *(undefined1 *)(lVar37 + sVar35 + 0xb08) = 0;
                    /* try { // try from 00a49b4c to 00b49b57 has its CatchHandler @ 00a49d14 */
    BIO_free(pBVar18);
    bVar6 = iVar7 == 0;
                    /* try { // try from 00a49b58 to 00b49b63 has its CatchHandler @ 00a49d10 */
  }
  pcVar34 = "[NONE]";
  if (!bVar6) {
    pcVar34 = pcVar24;
  }
  FUN_00a22d58(lVar37," subject: %s\n",pcVar34);
  pAVar19 = (ASN1_TIME *)X509_get0_notBefore(*(undefined8 *)(param_2 + 0x20));
  ASN1_TIME_print(pBVar12,pAVar19);
  lVar38 = BIO_ctrl(pBVar12,3,0,&local_300);
  FUN_00a22d58(lVar37," start date: %.*s\n",lVar38,local_300);
  BIO_ctrl(pBVar12,1,0,(void *)0x0);
  pAVar19 = (ASN1_TIME *)X509_get0_notAfter(*(undefined8 *)(param_2 + 0x20));
  ASN1_TIME_print(pBVar12,pAVar19);
  lVar38 = BIO_ctrl(pBVar12,3,0,&local_300);
  FUN_00a22d58(lVar37," expire date: %.*s\n",lVar38,local_300);
  BIO_ctrl(pBVar12,1,0,(void *)0x0);
  BIO_free(pBVar12);
  if (((int)param_1[0x30] != 2) ||
     (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2))
  {
    if (*(char *)((long)param_1 + 0x341) == '\0') goto LAB_00a4a0fc;
    pXVar16 = *(X509 **)(param_2 + 0x20);
    lVar38 = *param_1;
                    /* try { // try from 00a49c9c to 00b49d7f has its CatchHandler @ 00a49ad8 */
    if ((int)param_1[0x30] == 2) goto LAB_00a49ccc;
    pcVar34 = (char *)param_1[0x18];
LAB_00a49d00:
    plVar30 = param_1 + 0x16;
LAB_00a49d04:
    lVar31 = plVar30[3];
                    /* catch() { ... } // from try @ 00a49b58 with catch @ 00a49d10 */
                    /* catch() { ... } // from try @ 00a49b4c with catch @ 00a49d14 */
                    /* catch() { ... } // from try @ 00a49b2c with catch @ 00a49d18 */
                    /* catch() { ... } // from try @ 00a49b64 with catch @ 00a49d28 */
    if ((*(char *)((long)param_1 + 0x3c2) == '\0') ||
       (iVar7 = inet_pton(10,pcVar34,local_268), iVar7 == 0)) {
      iVar7 = inet_pton(2,pcVar34,local_268);
      sVar35 = 0;
      if (iVar7 != 0) {
        sVar35 = 4;
      }
      iVar8 = 2;
      if (iVar7 != 0) {
        iVar8 = 7;
      }
    }
    else {
      iVar8 = 7;
      sVar35 = 0x10;
    }
    a_00 = X509_get_ext_d2i(pXVar16,0x55,(int *)0x0,(int *)0x0);
    if (a_00 != (GENERAL_NAMES *)0x0) {
                    /* try { // try from 00a49d80 to 00b49dd3 has its CatchHandler @ 00a49d80
                       catch() { ... } // from try @ 00a49d80 with catch @ 00a49d80
                       catch() { ... } // from try @ 00a49f48 with catch @ 00a49d80 */
      iVar7 = OPENSSL_sk_num(a_00);
      if (iVar7 < 1) {
        bVar4 = false;
                    /* try { // try from 00a49f48 to 00b4a02b has its CatchHandler @ 00a49d80 */
        bVar5 = false;
        bVar27 = false;
        bVar6 = false;
      }
      else {
        if (iVar8 == 2) {
          bVar6 = false;
          bVar27 = false;
          iVar8 = 0;
          do {
            piVar20 = (int *)OPENSSL_sk_value(a_00,iVar8);
            iVar10 = *piVar20;
            if (iVar10 == 2) {
              bVar6 = true;
LAB_00a49fa4:
              __s = (char *)ASN1_STRING_get0_data(*(undefined8 *)(piVar20 + 2));
              iVar10 = ASN1_STRING_length(*(ASN1_STRING **)(piVar20 + 2));
                    /* catch() { ... } // from try @ 00a49e00 with catch @ 00a49fbc */
                    /* catch() { ... } // from try @ 00a49df4 with catch @ 00a49fc0 */
                    /* catch() { ... } // from try @ 00a49dd4 with catch @ 00a49fc4 */
              sVar35 = strlen(__s);
                    /* catch() { ... } // from try @ 00a49e0c with catch @ 00a49fd4 */
              if ((sVar35 == (long)iVar10) && (iVar10 = FUN_00a53b78(__s,pcVar34), iVar10 != 0)) {
                FUN_00a22d58(lVar38," subjectAltName: host \"%s\" matched cert\'s \"%s\"\n",lVar31,
                             __s);
                bVar5 = false;
                bVar4 = true;
                goto LAB_00a4a064;
              }
            }
            else {
              if (iVar10 == 7) {
                bVar27 = true;
              }
              if (iVar10 == 2) goto LAB_00a49fa4;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar7);
        }
        else {
          if (iVar8 == 7) {
            bVar6 = false;
            bVar27 = false;
            bVar5 = false;
            iVar8 = 0;
            do {
              piVar20 = (int *)OPENSSL_sk_value(a_00,iVar8);
                    /* try { // try from 00a49dd4 to 00b49deb has its CatchHandler @ 00a49fc4 */
              if (*piVar20 == 2) {
                bVar6 = true;
                    /* try { // try from 00a49e00 to 00b49e0b has its CatchHandler @ 00a49fbc */
              }
              else if (*piVar20 == 7) {
                bVar27 = true;
                pvVar22 = (void *)ASN1_STRING_get0_data(*(undefined8 *)(piVar20 + 2));
                    /* try { // try from 00a49e0c to 00b49f47 has its CatchHandler @ 00a49fd4 */
                iVar10 = ASN1_STRING_length(*(ASN1_STRING **)(piVar20 + 2));
                if ((sVar35 == (long)iVar10) &&
                   (iVar10 = memcmp(pvVar22,local_268,sVar35), iVar10 == 0)) {
                  FUN_00a22d58(lVar38," subjectAltName: host \"%s\" matched cert\'s IP address!\n",
                               lVar31);
                  bVar5 = true;
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar7 != iVar8);
            bVar4 = false;
            goto LAB_00a4a064;
          }
          bVar6 = false;
          bVar27 = false;
          iVar10 = 0;
          do {
            piVar20 = (int *)OPENSSL_sk_value(a_00,iVar10);
            iVar9 = *piVar20;
            if (iVar9 == 2) {
              bVar6 = true;
              if (iVar8 == 2) goto LAB_00a4a040;
            }
            else {
                    /* try { // try from 00a4a02c to 00b4a083 has its CatchHandler @ 00a4a02c
                       catch() { ... } // from try @ 00a4a02c with catch @ 00a4a02c
                       catch() { ... } // from try @ 00a4a1ec with catch @ 00a4a02c */
              if (iVar9 == 7) {
                bVar27 = true;
              }
              if (iVar9 == iVar8) {
LAB_00a4a040:
                ASN1_STRING_get0_data(*(undefined8 *)(piVar20 + 2));
                ASN1_STRING_length(*(ASN1_STRING **)(piVar20 + 2));
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar7 != iVar10);
        }
        bVar4 = false;
        bVar5 = false;
      }
LAB_00a4a064:
      GENERAL_NAMES_free(a_00);
      if ((!bVar4) && (!bVar5)) {
                    /* try { // try from 00a4a084 to 00b4a09b has its CatchHandler @ 00a4a26c */
        if (!bVar6) goto LAB_00a49e74;
        goto LAB_00a4a08c;
      }
      goto LAB_00a4a0fc;
    }
    bVar27 = false;
LAB_00a49e74:
    if (bVar27) {
LAB_00a4a08c:
      FUN_00a22d58(lVar38," subjectAltName does not match %s\n",lVar31);
                    /* try { // try from 00a4a0a4 to 00b4a0af has its CatchHandler @ 00a4a268 */
                    /* try { // try from 00a4a0b0 to 00b4a0bb has its CatchHandler @ 00a4a264 */
      FUN_00a23020(lVar38,
                   "SSL: no alternative certificate subject name matches target host name \'%s\'",
                   lVar31);
      iVar7 = 0x33;
                    /* try { // try from 00a4a0bc to 00b4a1eb has its CatchHandler @ 00a4a27c */
    }
    else {
      local_2e8[0] = (ASN1_GENERALIZEDTIME *)&DAT_0189703a;
      pXVar17 = X509_get_subject_name(pXVar16);
      if (pXVar17 == (X509_NAME *)0x0) {
LAB_00a4a0cc:
        iVar7 = 0;
LAB_00a4a0d0:
        if (local_2e8[0] == (ASN1_GENERALIZEDTIME *)&DAT_0189703a) {
          local_2e8[0] = (ASN1_GENERALIZEDTIME *)0x0;
        }
        if (iVar7 == 0) {
          if (local_2e8[0] == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00a4a41c;
          iVar7 = FUN_00a53b78(local_2e8[0],pcVar34);
          if (iVar7 != 0) {
            FUN_00a22d58(lVar38," common name: %s (matched)\n");
            iVar7 = 0;
            goto joined_r0x00a4a0e4;
          }
          FUN_00a23020(lVar38,
                       "SSL: certificate subject name \'%s\' does not match target host name \'%s\'"
                       ,local_2e8[0],lVar31);
          goto LAB_00a4a758;
        }
      }
      else {
        iVar7 = -1;
        do {
          iVar8 = iVar7;
          iVar7 = X509_NAME_get_index_by_NID(pXVar17,0xd,iVar8);
        } while (-1 < iVar7);
        if (iVar8 < 0) goto LAB_00a4a0cc;
        ne = X509_NAME_get_entry(pXVar17,iVar8);
        pAVar21 = X509_NAME_ENTRY_get_data(ne);
        iVar7 = 0;
        if (pAVar21 == (ASN1_STRING *)0x0) goto LAB_00a4a0d0;
        iVar7 = ASN1_STRING_type(pAVar21);
        if (iVar7 == 0xc) {
          iVar7 = ASN1_STRING_length(pAVar21);
          if (iVar7 < 0) goto LAB_00a4a3ec;
          __dest = CRYPTO_malloc(iVar7 + 1,"vtls/openssl.c",0x4cb);
          local_2e8[0] = __dest;
          if (__dest != (ASN1_GENERALIZEDTIME *)0x0) {
            pvVar22 = (void *)ASN1_STRING_get0_data(pAVar21);
            memcpy(__dest,pvVar22,(long)iVar7);
            *(char *)((long)&local_2e8[0]->length + (long)iVar7) = '\0';
            if (local_2e8[0] == (ASN1_GENERALIZEDTIME *)0x0) goto LAB_00a4a41c;
            goto LAB_00a4a3f4;
          }
        }
        else {
          iVar7 = ASN1_STRING_to_UTF8((uchar **)local_2e8,pAVar21);
LAB_00a4a3ec:
          if (local_2e8[0] != (ASN1_GENERALIZEDTIME *)0x0) {
LAB_00a4a3f4:
            strlen((char *)local_2e8[0]);
            iVar8 = FUN_00a16cec();
            if (iVar8 == iVar7) goto LAB_00a4a0cc;
            FUN_00a23020(lVar38,"SSL: illegal cert name field");
            iVar7 = 0x33;
            goto LAB_00a4a0d0;
          }
        }
LAB_00a4a41c:
        FUN_00a23020(lVar38,"SSL: unable to obtain common name from peer certificate");
LAB_00a4a758:
        iVar7 = 0x33;
                    /* try { // try from 00a4a75c to 00b4a83f has its CatchHandler @ 00a4a57c */
      }
joined_r0x00a4a0e4:
      if (local_2e8[0] != (ASN1_GENERALIZEDTIME *)0x0) {
        CRYPTO_free(local_2e8[0]);
      }
      if (iVar7 == 0) goto LAB_00a4a0fc;
    }
LAB_00a4a7c0:
    X509_free(*(X509 **)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x20) = 0;
    goto LAB_00a4a8ec;
  }
  if (*(char *)((long)param_1 + 0x381) != '\0') {
    pXVar16 = *(X509 **)(param_2 + 0x20);
    lVar38 = *param_1;
LAB_00a49ccc:
    plVar30 = param_1 + 0x2b;
    bVar6 = *(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec)
            != 2;
    plVar1 = param_1 + 0x16;
    if (bVar6) {
      plVar1 = plVar30;
    }
    pcVar34 = (char *)plVar1[2];
    if (!bVar6) goto LAB_00a49d00;
    goto LAB_00a49d04;
  }
LAB_00a4a0fc:
  pXVar17 = X509_get_issuer_name(*(X509 **)(param_2 + 0x20));
  pBVar11 = BIO_s_mem();
  pBVar12 = BIO_new(pBVar11);
  if (pBVar12 == (BIO *)0x0) {
LAB_00a4a1e0:
    if ((param_3 & 1) != 0) {
                    /* try { // try from 00a4a1ec to 00b4a2d3 has its CatchHandler @ 00a4a02c */
      FUN_00a23020(lVar37,"SSL: couldn\'t get X509-issuer name!");
    }
    iVar7 = 0x23;
  }
  else {
    iVar7 = X509_NAME_print_ex(pBVar12,pXVar17,0,0x30000);
    BIO_ctrl(pBVar12,0x73,0,local_268);
    sVar35 = *local_268[0];
    if (0x3ffe < sVar35) {
      sVar35 = 0x3fff;
    }
    memcpy(pcVar24,(void *)local_268[0][1],sVar35);
    *(undefined1 *)(lVar37 + sVar35 + 0xb08) = 0;
    BIO_free(pBVar12);
    if (iVar7 == 0) goto LAB_00a4a1e0;
    FUN_00a22d58(lVar37," issuer: %s\n",pcVar24);
    lVar38 = lVar23;
    if (((int)param_1[0x30] == 2) &&
       (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2
       )) {
      if (*(long *)(lVar37 + 0x550) != 0) {
LAB_00a4a24c:
                    /* catch() { ... } // from try @ 00a4a0b0 with catch @ 00a4a264 */
                    /* catch() { ... } // from try @ 00a4a0a4 with catch @ 00a4a268 */
                    /* catch() { ... } // from try @ 00a4a084 with catch @ 00a4a26c */
        if (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec)
            != 2) {
          lVar38 = lVar37 + 0x4f8;
        }
LAB_00a4a270:
                    /* catch() { ... } // from try @ 00a4a0bc with catch @ 00a4a27c */
        fp = fopen(*(char **)(lVar38 + 0x58),"r");
        if (fp == (FILE *)0x0) {
          if ((param_3 & 1) != 0) {
                    /* try { // try from 00a4a328 to 00b4a33f has its CatchHandler @ 00a4a514 */
                    /* try { // try from 00a4a348 to 00b4a353 has its CatchHandler @ 00a4a510 */
            if (((int)param_1[0x30] == 2) &&
               (*(int *)((long)param_1 +
                        (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
              lVar23 = lVar37 + 0x4f8;
            }
                    /* try { // try from 00a4a354 to 00b4a35f has its CatchHandler @ 00a4a50c */
            FUN_00a23020(lVar37,"SSL: Unable to open issuer cert (%s)",
                         *(undefined8 *)(lVar23 + 0x58));
          }
                    /* try { // try from 00a4a360 to 00b4a497 has its CatchHandler @ 00a4a524 */
          pXVar16 = *(X509 **)(param_2 + 0x20);
        }
        else {
          pXVar16 = PEM_read_X509(fp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
          if (pXVar16 == (X509 *)0x0) {
            if ((param_3 & 1) != 0) {
              if (((int)param_1[0x30] == 2) &&
                 (*(int *)((long)param_1 +
                          (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
                lVar23 = lVar37 + 0x4f8;
              }
              FUN_00a23020(lVar37,"SSL: Unable to read issuer cert (%s)",
                           *(undefined8 *)(lVar23 + 0x58));
            }
            X509_free(*(X509 **)(param_2 + 0x20));
            X509_free((X509 *)0x0);
            fclose(fp);
            iVar7 = 0x53;
            goto LAB_00a4a8ec;
          }
          fclose(fp);
          iVar7 = X509_check_issued(pXVar16,*(X509 **)(param_2 + 0x20));
          if (iVar7 == 0) {
            if (((int)param_1[0x30] == 2) &&
               (*(int *)((long)param_1 +
                        (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
              lVar23 = lVar37 + 0x4f8;
            }
            FUN_00a22d58(lVar37," SSL certificate issuer check ok (%s)\n",
                         *(undefined8 *)(lVar23 + 0x58));
            X509_free(pXVar16);
            goto LAB_00a4a484;
          }
          if ((param_3 & 1) != 0) {
                    /* try { // try from 00a4a2d4 to 00b4a327 has its CatchHandler @ 00a4a2d4
                       catch() { ... } // from try @ 00a4a2d4 with catch @ 00a4a2d4
                       catch() { ... } // from try @ 00a4a498 with catch @ 00a4a2d4 */
            if (((int)param_1[0x30] == 2) &&
               (*(int *)((long)param_1 +
                        (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2)) {
              lVar23 = lVar37 + 0x4f8;
            }
            FUN_00a23020(lVar37,"SSL: Certificate issuer check failed (%s)",
                         *(undefined8 *)(lVar23 + 0x58));
          }
          X509_free(*(X509 **)(param_2 + 0x20));
        }
        X509_free(pXVar16);
        *(undefined8 *)(param_2 + 0x20) = 0;
        iVar7 = 0x53;
        goto LAB_00a4a8ec;
      }
    }
    else if (*(long *)(lVar37 + 0x498) != 0) {
      if ((int)param_1[0x30] == 2) goto LAB_00a4a24c;
      goto LAB_00a4a270;
    }
LAB_00a4a484:
    lVar23 = SSL_get_verify_result((SSL *)*puVar36);
                    /* try { // try from 00a4a498 to 00b4a57b has its CatchHandler @ 00a4a2d4 */
    *(long *)(lVar29 + 0x48) = lVar23;
    if (lVar23 == 0) {
                    /* catch() { ... } // from try @ 00a4a354 with catch @ 00a4a50c */
                    /* catch() { ... } // from try @ 00a4a348 with catch @ 00a4a510 */
      FUN_00a22d58(lVar37," SSL certificate verify ok.\n");
                    /* catch() { ... } // from try @ 00a4a328 with catch @ 00a4a514 */
LAB_00a4a548:
      iVar7 = 0;
    }
    else {
      if (((int)param_1[0x30] == 2) &&
         (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) !=
          2)) {
        cVar2 = (char)param_1[0x70];
                    /* catch() { ... } // from try @ 00a4a360 with catch @ 00a4a524 */
      }
      else {
        cVar2 = (char)param_1[0x68];
      }
      if (cVar2 == '\0') {
        pcVar24 = X509_verify_cert_error_string(lVar23);
        FUN_00a22d58(lVar37," SSL certificate verify result: %s (%ld), continuing anyway.\n",pcVar24
                     ,lVar23);
        goto LAB_00a4a548;
      }
      if ((param_3 & 1) == 0) {
        iVar7 = 0x33;
      }
      else {
        pcVar24 = X509_verify_cert_error_string(lVar23);
        FUN_00a23020(lVar37,"SSL certificate verify result: %s (%ld)",pcVar24,lVar23);
        iVar7 = 0x33;
      }
    }
  }
  iVar8 = (int)param_1[0x30];
  if ((iVar8 == 2) &&
     (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2))
  {
    if (*(char *)((long)param_1 + 0x382) != '\0') {
LAB_00a4a590:
      lVar23 = *param_1;
      lVar29 = SSL_ctrl((SSL *)*puVar36,0x46,0,local_268);
      if (local_268[0] == (ulong *)0x0) {
                    /* try { // try from 00a4a608 to 00b4a75b has its CatchHandler @ 00a4a7e8 */
        FUN_00a23020(lVar23,"No OCSP response received");
        resp = (OCSP_RESPONSE *)0x0;
        iVar7 = 0x5b;
      }
      else {
        resp = d2i_OCSP_RESPONSE((OCSP_RESPONSE **)0x0,(uchar **)local_268,lVar29);
        if (resp == (OCSP_RESPONSE *)0x0) {
          FUN_00a23020(lVar23,"Invalid OCSP response");
          iVar7 = 0x5b;
        }
        else {
                    /* try { // try from 00a4a5d0 to 00b4a5e7 has its CatchHandler @ 00a4a7d8 */
          iVar7 = OCSP_response_status(resp);
          if (iVar7 == 0) {
            bs = OCSP_response_get1_basic(resp);
            if (bs == (OCSP_BASICRESP *)0x0) {
              FUN_00a23020(lVar23,"Invalid OCSP response");
              iVar7 = 0x5b;
            }
            else {
              psVar13 = SSL_get_peer_cert_chain((SSL *)*puVar36);
              st = SSL_CTX_get_cert_store(*(SSL_CTX **)(param_2 + 0x10));
              iVar7 = OCSP_basic_verify(bs,psVar13,st,0);
              if (iVar7 < 1) {
                pcVar24 = "OCSP response verification failed";
LAB_00a4a79c:
                FUN_00a23020(lVar23,pcVar24);
LAB_00a4a7a4:
                iVar7 = 0x5b;
              }
              else {
                iVar7 = OCSP_resp_count(bs);
                if (0 < iVar7) {
                  iVar7 = 0;
                  do {
                    single = OCSP_resp_get0(bs,iVar7);
                    if (single != (OCSP_SINGLERESP *)0x0) {
                      iVar8 = OCSP_single_get0_status
                                        (single,(int *)&local_308,local_2e8,
                                         (ASN1_GENERALIZEDTIME **)&local_2f0,&local_2f8);
                      iVar10 = OCSP_check_validity((ASN1_GENERALIZEDTIME *)local_2f0,local_2f8,300,
                                                   -1);
                      if (iVar10 == 0) {
                        pcVar24 = "OCSP response has expired";
                        goto LAB_00a4a79c;
                      }
                      pcVar24 = OCSP_cert_status_str((long)iVar8);
                      FUN_00a22d58(lVar23,"SSL certificate status: %s (%d)\n",pcVar24,iVar8);
                      if (iVar8 == 2) goto LAB_00a4a7a4;
                      if (iVar8 == 1) {
                        pcVar24 = OCSP_crl_reason_str((long)(int)local_308);
                        FUN_00a23020(lVar23,"SSL certificate revocation reason: %s (%d)",pcVar24,
                                     (ulong)local_308 & 0xffffffff);
                        goto LAB_00a4a7a4;
                      }
                    }
                    iVar7 = iVar7 + 1;
                    iVar8 = OCSP_resp_count(bs);
                  } while (iVar7 < iVar8);
                }
                iVar7 = 0;
              }
              OCSP_BASICRESP_free(bs);
            }
          }
          else {
            pcVar24 = OCSP_response_status_str((long)iVar7);
                    /* try { // try from 00a4a5f0 to 00b4a5fb has its CatchHandler @ 00a4a7d4 */
            FUN_00a23020(lVar23,"Invalid OCSP response status: %s (%d)",pcVar24,iVar7);
                    /* try { // try from 00a4a5fc to 00b4a607 has its CatchHandler @ 00a4a7d0 */
            iVar7 = 0x5b;
          }
        }
      }
      OCSP_RESPONSE_free(resp);
      if (iVar7 != 0) goto LAB_00a4a7c0;
                    /* catch() { ... } // from try @ 00a4a5fc with catch @ 00a4a7d0 */
                    /* catch() { ... } // from try @ 00a4a5f0 with catch @ 00a4a7d4 */
      iVar8 = (int)param_1[0x30];
                    /* catch() { ... } // from try @ 00a4a5d0 with catch @ 00a4a7d8 */
      iVar7 = 0;
      goto LAB_00a4a7dc;
    }
    if ((param_3 & 1) == 0) {
      iVar7 = 0;
    }
LAB_00a4a7ec:
    if (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2
       ) goto LAB_00a4a80c;
    lVar29 = 0x1f;
  }
  else {
                    /* try { // try from 00a4a57c to 00b4a5cf has its CatchHandler @ 00a4a57c
                       catch() { ... } // from try @ 00a4a57c with catch @ 00a4a57c
                       catch() { ... } // from try @ 00a4a75c with catch @ 00a4a57c */
    if (*(char *)((long)param_1 + 0x342) != '\0') goto LAB_00a4a590;
LAB_00a4a7dc:
    if ((param_3 & 1) == 0) {
      iVar7 = 0;
    }
                    /* catch() { ... } // from try @ 00a4a608 with catch @ 00a4a7e8 */
    if (iVar8 == 2) goto LAB_00a4a7ec;
LAB_00a4a80c:
    lVar29 = 0x1e;
  }
  piVar20 = *(int **)(lVar37 + lVar29 * 8 + 0x670);
  local_300 = piVar20;
  if ((iVar7 == 0) && (piVar20 != (int *)0x0)) {
    lVar29 = *(long *)(param_2 + 0x20);
    local_268[0] = (ulong *)0x0;
    if (lVar29 == 0) {
LAB_00a4a8c4:
      iVar7 = 0x5a;
    }
    else {
      pXVar25 = (X509_PUBKEY *)X509_get_X509_PUBKEY(lVar29);
                    /* try { // try from 00a4a840 to 00b4a893 has its CatchHandler @ 00a4a840
                       catch() { ... } // from try @ 00a4a840 with catch @ 00a4a840
                       catch() { ... } // from try @ 00a4aa04 with catch @ 00a4a840 */
      iVar8 = i2d_X509_PUBKEY(pXVar25,(uchar **)0x0);
      if (iVar8 < 1) goto LAB_00a4a8c4;
      lVar23 = (long)iVar8;
      puVar26 = (ulong *)(*(code *)PTR_malloc_01d1b740)(lVar23);
      local_268[0] = puVar26;
      if (puVar26 == (ulong *)0x0) goto LAB_00a4a8c4;
      pXVar25 = (X509_PUBKEY *)X509_get_X509_PUBKEY(lVar29);
      iVar10 = i2d_X509_PUBKEY(pXVar25,(uchar **)local_268);
      iVar7 = 0x5a;
                    /* try { // try from 00a4a894 to 00b4a8ab has its CatchHandler @ 00a4aa80 */
      if ((iVar8 == iVar10) && (local_268[0] != (ulong *)0x0)) {
        if ((long)local_268[0] - (long)puVar26 == lVar23) {
                    /* try { // try from 00a4a8b4 to 00b4a8bf has its CatchHandler @ 00a4aa7c */
          iVar7 = FUN_00a18a00(lVar37,piVar20,puVar26,lVar23);
                    /* try { // try from 00a4a8c0 to 00b4a8cb has its CatchHandler @ 00a4aa78 */
        }
        else {
          iVar7 = 0x5a;
        }
      }
      (*(code *)PTR_free_01d1b748)(puVar26);
      if (iVar7 == 0) goto LAB_00a4a8d8;
    }
                    /* try { // try from 00a4a8cc to 00b4aa03 has its CatchHandler @ 00a4aa90 */
    FUN_00a23020(lVar37,"SSL: public key does not match pinned public key!");
  }
LAB_00a4a8d8:
  X509_free(*(X509 **)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 8) = 5;
LAB_00a4a8ec:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

