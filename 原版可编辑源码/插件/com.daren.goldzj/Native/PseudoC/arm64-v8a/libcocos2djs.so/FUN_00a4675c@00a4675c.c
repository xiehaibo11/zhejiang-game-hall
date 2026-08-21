
/* WARNING: Removing unreachable block (ram,0x00a473b4) */
/* WARNING: Removing unreachable block (ram,0x00a47e78) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a4675c(long *param_1,int param_2,uint param_3,undefined1 *param_4)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  ulong *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int fd;
  int iVar9;
  char cVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  SSL_CIPHER *c;
  char *pcVar18;
  SSL_METHOD *meth;
  SSL_CTX *pSVar19;
  undefined4 *puVar20;
  ulong uVar21;
  SSL_SESSION *ses;
  FILE *fp;
  PKCS12 *p12;
  X509 *a;
  long lVar22;
  ENGINE *e;
  EVP_PKEY *pEVar23;
  evp_pkey_st *from;
  UI_METHOD *method;
  UI_METHOD *pUVar24;
  X509_STORE *pXVar25;
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  SSL *pSVar26;
  BIO_METHOD *type;
  BIO *bp;
  undefined1 uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  undefined8 *puVar32;
  ulong uVar33;
  char *key_id;
  char *pass;
  undefined8 uVar34;
  long lVar35;
  char *pcVar36;
  char *local_218;
  uint local_1dc;
  char *local_1d8;
  char *local_1d0;
  long *local_1c8;
  char *local_1a0;
  int local_190 [4];
  stack_st_X509 *local_180;
  X509 *local_178;
  EVP_PKEY *local_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  char acStack_160 [16];
  undefined4 local_150;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  if (*(int *)((long)param_1 + (long)param_2 * 0x28 + 0x29c) == 2) {
    iVar14 = 0;
    *param_4 = 1;
    goto LAB_00a467bc;
  }
  lVar35 = (long)param_2;
  lVar31 = *param_1;
  uVar16 = *(uint *)(param_1 + lVar35 * 5 + 0x54);
  uVar8 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260);
  puVar1 = (uint *)(param_1 + lVar35 * 5 + 0x54);
  if (uVar16 == 0) {
                    /* try { // try from 00a46a8c to 00b46b6f has its CatchHandler @ 00a468c4 */
    lVar17 = FUN_00a0f850(lVar31,0,1);
    if (lVar17 < 0) {
LAB_00a46dc0:
                    /* catch() { ... } // from try @ 00a46bfc with catch @ 00a46dc4 */
      FUN_00a23020(lVar31,"SSL connection timeout");
      iVar14 = 0x1c;
      goto LAB_00a467bc;
    }
    lVar17 = *param_1;
    fd = *(int *)((long)param_1 + (long)param_2 * 4 + 0x260);
    if ((int)param_1[0x30] == 2) {
      iVar14 = *(int *)((long)param_1 +
                       (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec);
      pbVar4 = (byte *)(param_1 + 0x68);
      if (iVar14 != 2) {
        pbVar4 = (byte *)(param_1 + 0x70);
      }
                    /* catch() { ... } // from try @ 00a46944 with catch @ 00a46b00 */
      local_1dc = (uint)*pbVar4;
                    /* catch() { ... } // from try @ 00a46938 with catch @ 00a46b04 */
      bVar12 = local_1dc == 0;
                    /* catch() { ... } // from try @ 00a46918 with catch @ 00a46b08 */
      puVar5 = (ulong *)(param_1 + 0x67);
      lVar29 = lVar17 + 0x440;
                    /* catch() { ... } // from try @ 00a46950 with catch @ 00a46b18 */
      if (iVar14 != 2) {
        puVar5 = (ulong *)(param_1 + 0x6f);
        lVar29 = lVar17 + 0x4f8;
      }
      iVar9 = *(int *)(lVar29 + 0xb0);
      uVar21 = *puVar5;
      puVar32 = (undefined8 *)(lVar29 + 0x48);
      local_1a0 = *(char **)(lVar29 + 0x78);
      pcVar36 = *(char **)(lVar29 + 0x80);
      local_1c8 = (long *)puVar5[2];
      local_1d0 = (char *)puVar5[3];
      local_1d8 = *(char **)(lVar29 + 0x50);
      if (iVar14 == 2) goto LAB_00a46bcc;
      plVar30 = param_1 + 0x2b;
    }
    else {
      iVar9 = *(int *)(lVar17 + 0x4f0);
      uVar21 = param_1[0x67];
      puVar32 = (undefined8 *)(lVar17 + 0x488);
      local_1a0 = *(char **)(lVar17 + 0x4b8);
      pcVar36 = *(char **)(lVar17 + 0x4c0);
      local_1d0 = (char *)param_1[0x6a];
      local_1c8 = (long *)param_1[0x69];
      local_1d8 = *(char **)(lVar17 + 0x490);
      local_1dc = (uint)*(byte *)(param_1 + 0x68);
      bVar12 = local_1dc == 0;
                    /* try { // try from 00a46bc4 to 00b46bdb has its CatchHandler @ 00a46db4 */
LAB_00a46bcc:
      plVar30 = param_1 + 0x16;
    }
    pcVar18 = (char *)plVar30[2];
    iVar14 = FUN_00a48054(lVar17);
                    /* try { // try from 00a46be4 to 00b46bef has its CatchHandler @ 00a46db0 */
    if (iVar14 != 0) goto LAB_00a467bc;
                    /* try { // try from 00a46bf0 to 00b46bfb has its CatchHandler @ 00a46dac */
    *puVar32 = 1;
                    /* try { // try from 00a46bfc to 00b46d37 has its CatchHandler @ 00a46dc4 */
    if (7 < uVar21) {
switchD_00a46cec_default:
      FUN_00a23020(lVar17,"Unrecognized parameter passed via CURLOPT_SSLVERSION");
      iVar14 = 0x23;
      goto LAB_00a467bc;
    }
    if ((1L << (uVar21 & 0x3f) & 0xf3U) == 0) {
      if (uVar21 == 2) {
switchD_00a46cec_caseD_2:
        pcVar36 = "OpenSSL was built without SSLv2 support";
      }
      else {
        pcVar36 = "OpenSSL was built without SSLv3 support";
      }
LAB_00a47224:
      FUN_00a23020(lVar17,pcVar36);
      iVar14 = 4;
      goto LAB_00a467bc;
    }
    meth = (SSL_METHOD *)TLS_client_method();
    plVar2 = param_1 + lVar35 * 5 + 0x55;
    if ((SSL_CTX *)param_1[lVar35 * 5 + 0x55] != (SSL_CTX *)0x0) {
      SSL_CTX_free((SSL_CTX *)param_1[lVar35 * 5 + 0x55]);
    }
    pSVar19 = SSL_CTX_new(meth);
    *plVar2 = (long)pSVar19;
    if (pSVar19 == (SSL_CTX *)0x0) {
                    /* try { // try from 00a46e9c to 00b46ea7 has its CatchHandler @ 00a47054 */
      uVar21 = ERR_peek_error();
      pcVar36 = ERR_error_string(uVar21,(char *)0x0);
                    /* try { // try from 00a46ea8 to 00b46fdf has its CatchHandler @ 00a4706c */
      FUN_00a23020(lVar17,"SSL: couldn\'t create a context: %s",pcVar36);
      iVar14 = 0x1b;
      goto LAB_00a467bc;
    }
    plVar3 = param_1 + 0x30;
    SSL_CTX_ctrl(pSVar19,0x21,0x10,(void *)0x0);
    if ((*(long *)(lVar17 + 0x2e8) != 0) && (*(char *)(lVar17 + 0x628) != '\0')) {
      SSL_CTX_set_msg_callback((SSL_CTX *)*plVar2,FUN_00a48594);
      SSL_CTX_ctrl((SSL_CTX *)*plVar2,0x10,0,param_1);
    }
    uVar33 = 0x80024bff;
    if (((int)*plVar3 == 2) &&
       (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2
       )) {
      cVar10 = *(char *)(lVar17 + 0x538);
    }
    else {
      cVar10 = *(char *)(lVar17 + 0x480);
    }
    if (cVar10 == '\0') {
      uVar33 = 0x800243ff;
    }
    uVar28 = 0x2000000;
    switch(uVar21) {
    case 0:
    case 1:
      break;
    case 2:
      goto switchD_00a46cec_caseD_2;
    case 3:
      if (iVar9 == 1) {
        FUN_00a22d58(lVar17,"Set version TLSv1.x for SRP authorisation\n");
      }
      uVar28 = 0x1c000000;
      break;
    case 4:
      uVar28 = 0x1a000000;
      break;
    case 5:
                    /* catch() { ... } // from try @ 00a46e9c with catch @ 00a47054 */
      uVar28 = 0xe000000;
                    /* catch() { ... } // from try @ 00a46e90 with catch @ 00a47058 */
      break;
    case 6:
                    /* catch() { ... } // from try @ 00a46e70 with catch @ 00a4705c */
      uVar28 = 0x16000000;
      break;
    case 7:
      pcVar36 = "OpenSSL was built without TLS 1.3 support";
      goto LAB_00a47224;
    default:
      goto switchD_00a46cec_default;
    }
    SSL_CTX_set_options(*plVar2,uVar28 | uVar33);
                    /* catch() { ... } // from try @ 00a46ea8 with catch @ 00a4706c */
    if (*(char *)((long)param_1 + 0x3d7) != '\0') {
      SSL_CTX_set_next_proto_select_cb((SSL_CTX *)*plVar2,FUN_00a4885c,param_1);
    }
    if ((char)param_1[0x7b] != '\0') {
      local_170._0_1_ = '\b';
      local_170._1_7_ = 0x2e312f70747468;
      uStack_168 = 0x31;
                    /* try { // try from 00a470c4 to 00b47117 has its CatchHandler @ 00a470c4
                       catch() { ... } // from try @ 00a470c4 with catch @ 00a470c4
                       catch() { ... } // from try @ 00a47278 with catch @ 00a470c4 */
      FUN_00a22d58(lVar17,"ALPN, offering %s\n","http/1.1");
      SSL_CTX_set_alpn_protos(*plVar2,&local_170,9);
    }
    if (pcVar36 != (char *)0x0 || local_1a0 != (char *)0x0) {
      pSVar19 = (SSL_CTX *)*plVar2;
      if ((int)*plVar3 == 2) {
                    /* try { // try from 00a47118 to 00b4712f has its CatchHandler @ 00a472f4 */
        lVar29 = lVar17 + 0x4f8;
        bVar13 = *(int *)((long)param_1 +
                         (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2;
        lVar22 = lVar17 + 0x440;
        if (!bVar13) {
          lVar22 = lVar29;
        }
        key_id = *(char **)(lVar22 + 0x88);
        local_218 = *(char **)(lVar22 + 0x90);
        if (bVar13) goto LAB_00a47148;
      }
      else {
                    /* try { // try from 00a47138 to 00b47143 has its CatchHandler @ 00a472f0 */
        local_218 = *(char **)(lVar17 + 0x4d0);
        key_id = *(char **)(lVar17 + 0x4c8);
                    /* try { // try from 00a47144 to 00b4714f has its CatchHandler @ 00a472ec */
LAB_00a47148:
        lVar29 = lVar17 + 0x440;
      }
      pass = *(char **)(lVar29 + 0x98);
                    /* try { // try from 00a47150 to 00b47277 has its CatchHandler @ 00a47304 */
      lVar29 = *param_1;
      if (((pcVar36 == (char *)0x0) || (*pcVar36 == '\0')) ||
         (iVar14 = FUN_00a33710(pcVar36,&DAT_01897c24), iVar14 != 0)) {
        iVar14 = 1;
joined_r0x00a476b8:
        if (local_1a0 == (char *)0x0) goto LAB_00a47894;
      }
      else {
        iVar14 = FUN_00a33710(pcVar36,"DER");
        if (iVar14 != 0) {
          iVar14 = 2;
          goto joined_r0x00a476b8;
        }
        iVar14 = FUN_00a33710(pcVar36,&DAT_01897d8d);
                    /* catch() { ... } // from try @ 00a473dc with catch @ 00a47584 */
        if (iVar14 == 0) {
          iVar15 = FUN_00a33710(pcVar36,&DAT_01897d91);
          iVar14 = 0x2b;
          if (iVar15 == 0) {
            iVar14 = -1;
          }
          goto joined_r0x00a476b8;
        }
                    /* catch() { ... } // from try @ 00a473d0 with catch @ 00a47588 */
                    /* catch() { ... } // from try @ 00a473b0 with catch @ 00a4758c */
        iVar14 = 0x2a;
      }
      if (pass != (char *)0x0) {
        SSL_CTX_set_default_passwd_cb_userdata(pSVar19,pass);
        SSL_CTX_set_default_passwd_cb(pSVar19,FUN_00a4891c);
      }
      if (iVar14 < 0x2a) {
        if (iVar14 == 1) {
          iVar14 = SSL_CTX_use_certificate_chain_file(pSVar19,local_1a0);
          if (iVar14 == 1) {
LAB_00a47464:
            bVar13 = false;
            if (local_218 == (char *)0x0) {
LAB_00a4748c:
              if (!bVar13) {
                if (key_id != (char *)0x0) {
                  local_1a0 = key_id;
                }
                iVar14 = 1;
LAB_00a475e8:
                iVar14 = SSL_CTX_use_PrivateKey_file(pSVar19,local_1a0,iVar14);
                    /* try { // try from 00a475f4 to 00b4764b has its CatchHandler @ 00a475f4
                       catch() { ... } // from try @ 00a475f4 with catch @ 00a475f4
                       catch() { ... } // from try @ 00a477ac with catch @ 00a475f4 */
                if (iVar14 != 1) {
                    /* try { // try from 00a47678 to 00b47683 has its CatchHandler @ 00a47824 */
                    /* try { // try from 00a47684 to 00b477ab has its CatchHandler @ 00a4783c */
                  if (local_218 == (char *)0x0) {
                    local_218 = "PEM";
                  }
                  pcVar36 = "unable to set private key file: \'%s\' type %s";
                  goto LAB_00a4770c;
                }
              }
            }
            else {
LAB_00a47470:
              if ((*local_218 == '\0') ||
                 (iVar14 = FUN_00a33710(local_218,&DAT_01897c24), iVar14 != 0)) goto LAB_00a4748c;
              iVar14 = FUN_00a33710(local_218,"DER");
              if (iVar14 != 0) {
                iVar14 = 2;
                local_1a0 = key_id;
                goto LAB_00a475e8;
              }
              iVar14 = FUN_00a33710(local_218,&DAT_01897d8d);
              if (iVar14 != 0) {
                if (*(long *)(lVar29 + 0x8c48) == 0) {
                  pcVar36 = "crypto engine not set, can\'t load private key";
                    /* try { // try from 00a47e54 to 00b47e5f has its CatchHandler @ 00a47ffc */
                }
                else {
                    /* try { // try from 00a477ac to 00b47893 has its CatchHandler @ 00a475f4 */
                  method = UI_create_method("curl user interface");
                  if (method == (UI_METHOD *)0x0) {
                    pcVar36 = "unable do create OpenSSL user-interface method";
                    /* try { // try from 00a47e60 to 00b47f87 has its CatchHandler @ 00a48014 */
                  }
                  else {
                    pUVar24 = UI_OpenSSL();
                    uVar16 = UI_method_get_opener((UI *)pUVar24);
                    UI_method_set_opener(method,(opener *)(ulong)uVar16);
                    pUVar24 = UI_OpenSSL();
                    uVar16 = UI_method_get_closer((UI *)pUVar24);
                    UI_method_set_closer(method,(closer *)(ulong)uVar16);
                    UI_method_set_reader(method,FUN_00a48984);
                    UI_method_set_writer(method,FUN_00a48a14);
                    pEVar23 = ENGINE_load_private_key
                                        (*(ENGINE **)(lVar29 + 0x8c48),key_id,method,pass);
                    UI_destroy_method(method);
                    if (pEVar23 != (EVP_PKEY *)0x0) {
                    /* catch() { ... } // from try @ 00a47678 with catch @ 00a47824 */
                    /* catch() { ... } // from try @ 00a4766c with catch @ 00a47828 */
                    /* catch() { ... } // from try @ 00a4764c with catch @ 00a4782c */
                      iVar14 = SSL_CTX_use_PrivateKey(pSVar19,pEVar23);
                      if (iVar14 != 1) {
                        FUN_00a23020(lVar29,"unable to set private key");
                        EVP_PKEY_free(pEVar23);
                        iVar14 = 0x3a;
                        goto LAB_00a467bc;
                      }
                    /* catch() { ... } // from try @ 00a47684 with catch @ 00a4783c */
                      EVP_PKEY_free(pEVar23);
                      goto LAB_00a475fc;
                    }
                    pcVar36 = "failed to load private key from crypto engine";
                  }
                }
                goto LAB_00a47740;
              }
                    /* try { // try from 00a47e28 to 00b47e3f has its CatchHandler @ 00a48004 */
              iVar14 = FUN_00a33710(local_218,&DAT_01897d91);
              if (iVar14 == 0) {
                pcVar36 = "not supported file type for private key";
                goto LAB_00a47740;
              }
              if (!bVar13) {
                pcVar36 = "file type P12 for private key not supported";
                    /* try { // try from 00a47e48 to 00b47e53 has its CatchHandler @ 00a48000 */
                goto LAB_00a47740;
              }
            }
LAB_00a475fc:
            pSVar26 = SSL_new(pSVar19);
            if (pSVar26 == (SSL *)0x0) {
                    /* try { // try from 00a4766c to 00b47677 has its CatchHandler @ 00a47828 */
              pcVar36 = "unable to create an SSL structure";
            }
            else {
              local_178 = SSL_get_certificate(pSVar26);
              if (local_178 != (X509 *)0x0) {
                pEVar23 = X509_get_pubkey(local_178);
                from = SSL_get_privatekey(pSVar26);
                EVP_PKEY_copy_parameters(pEVar23,from);
                EVP_PKEY_free(pEVar23);
              }
                    /* try { // try from 00a4764c to 00b47663 has its CatchHandler @ 00a4782c */
              SSL_free(pSVar26);
              iVar14 = SSL_CTX_check_private_key(pSVar19);
              if (iVar14 != 0) goto LAB_00a47894;
              pcVar36 = "Private key does not match the certificate public key";
            }
            goto LAB_00a47740;
          }
          uVar21 = ERR_get_error();
          pcVar36 = ERR_error_string(uVar21,(char *)0x0);
          pcVar18 = 
          "could not load PEM client certificate, OpenSSL error %s, (no key found, wrong pass phrase, or wrong file format?)"
          ;
        }
        else if (iVar14 == 2) {
          iVar14 = SSL_CTX_use_certificate_file(pSVar19,local_1a0,2);
          if (iVar14 == 1) goto LAB_00a47464;
          uVar21 = ERR_get_error();
          pcVar36 = ERR_error_string(uVar21,(char *)0x0);
          pcVar18 = 
          "could not load ASN1 client certificate, OpenSSL error %s, (no key found, wrong pass phrase, or wrong file format?)"
          ;
        }
        else {
LAB_00a47538:
          pcVar18 = "not supported file type \'%s\' for certificate";
        }
        FUN_00a23020(lVar29,pcVar18,pcVar36);
        iVar14 = 0x3a;
      }
      else {
        if (iVar14 != 0x2a) {
          if (iVar14 != 0x2b) goto LAB_00a47538;
          local_180 = (stack_st_X509 *)0x0;
          fp = fopen(local_1a0,"rb");
          if (fp == (FILE *)0x0) {
            pcVar36 = "could not open PKCS12 file \'%s\'";
                    /* catch() { ... } // from try @ 00a473e8 with catch @ 00a4759c */
LAB_00a475b4:
            FUN_00a23020(lVar29,pcVar36,local_1a0);
          }
          else {
            p12 = d2i_PKCS12_fp(fp,(PKCS12 **)0x0);
            fclose(fp);
                    /* catch() { ... } // from try @ 00a47144 with catch @ 00a472ec */
            if (p12 == (PKCS12 *)0x0) {
              pcVar36 = "error reading PKCS12 file \'%s\'";
              goto LAB_00a475b4;
            }
                    /* catch() { ... } // from try @ 00a47138 with catch @ 00a472f0 */
            PKCS12_PBE_add();
                    /* catch() { ... } // from try @ 00a47118 with catch @ 00a472f4 */
                    /* catch() { ... } // from try @ 00a47150 with catch @ 00a47304 */
            iVar14 = PKCS12_parse(p12,pass,&local_170,&local_178,&local_180);
            if (iVar14 == 0) {
              uVar21 = ERR_get_error();
              pcVar36 = ERR_error_string(uVar21,(char *)0x0);
              FUN_00a23020(lVar29,"could not parse PKCS12 file, check password, OpenSSL error %s",
                           pcVar36);
              PKCS12_free(p12);
            }
            else {
              PKCS12_free(p12);
              iVar14 = SSL_CTX_use_certificate(pSVar19,local_178);
              if (iVar14 == 1) {
                iVar14 = SSL_CTX_use_PrivateKey
                                   (pSVar19,(EVP_PKEY *)CONCAT71(local_170._1_7_,(char)local_170));
                if (iVar14 == 1) {
                  iVar14 = SSL_CTX_check_private_key(pSVar19);
                  if (iVar14 != 0) {
                    /* try { // try from 00a4735c to 00b473af has its CatchHandler @ 00a4735c
                       catch() { ... } // from try @ 00a4735c with catch @ 00a4735c
                       catch() { ... } // from try @ 00a47510 with catch @ 00a4735c */
                    if ((local_180 != (stack_st_X509 *)0x0) &&
                       (iVar14 = OPENSSL_sk_num(), iVar14 != 0)) {
                      pcVar36 = "cannot add certificate to client CA list";
                      do {
                        a = (X509 *)OPENSSL_sk_pop(local_180);
                        lVar22 = SSL_CTX_ctrl(pSVar19,0xe,0,a);
                        if (lVar22 == 0) {
                          X509_free(a);
                          pcVar36 = "cannot add certificate to certificate chain";
LAB_00a473d4:
                          FUN_00a23020(lVar29,pcVar36);
                    /* try { // try from 00a473dc to 00b473e7 has its CatchHandler @ 00a47584 */
                          goto LAB_00a47860;
                        }
                        iVar14 = SSL_CTX_add_client_CA(pSVar19,a);
                        if (iVar14 == 0) goto LAB_00a473d4;
                    /* try { // try from 00a473e8 to 00b4750f has its CatchHandler @ 00a4759c */
                        iVar14 = OPENSSL_sk_num(local_180);
                      } while (iVar14 != 0);
                    }
                    EVP_PKEY_free((EVP_PKEY *)CONCAT71(local_170._1_7_,(char)local_170));
                    X509_free(local_178);
                    OPENSSL_sk_pop_free(local_180,X509_free);
                    bVar13 = true;
                    goto LAB_00a47528;
                  }
                  pcVar36 = 
                  "private key from PKCS12 file \'%s\' does not match certificate in same file";
                }
                else {
                  pcVar36 = "unable to use private key from PKCS12 file \'%s\'";
                }
              }
              else {
                uVar21 = ERR_get_error();
                local_1a0 = ERR_error_string(uVar21,(char *)0x0);
                pcVar36 = "could not load PKCS12 client certificate, OpenSSL error %s";
              }
              FUN_00a23020(lVar29,pcVar36,local_1a0);
LAB_00a47860:
              EVP_PKEY_free((EVP_PKEY *)CONCAT71(local_170._1_7_,(char)local_170));
              X509_free(local_178);
              OPENSSL_sk_pop_free(local_180,X509_free);
            }
          }
          iVar14 = 0x3a;
          goto LAB_00a467bc;
        }
        e = *(ENGINE **)(lVar29 + 0x8c48);
        if (e == (ENGINE *)0x0) {
          pcVar36 = "crypto engine not set, can\'t load certificate";
        }
        else {
          local_170._0_1_ = (char)local_1a0;
          local_170._1_7_ = (undefined7)((ulong)local_1a0 >> 8);
          uStack_168 = 0;
          uStack_167 = 0;
          iVar14 = ENGINE_ctrl(e,0xd,0,"LOAD_CERT_CTRL",(f *)0x0);
          if (iVar14 == 0) {
            pcVar36 = "ssl engine does not support loading certificates";
          }
          else {
            iVar14 = ENGINE_ctrl_cmd(*(ENGINE **)(lVar29 + 0x8c48),"LOAD_CERT_CTRL",0,&local_170,
                                     (f *)0x0,1);
            if (iVar14 == 0) {
              uVar21 = ERR_get_error();
              local_218 = ERR_error_string(uVar21,(char *)0x0);
              pcVar36 = "ssl engine cannot load client cert with id \'%s\' [%s]";
LAB_00a4770c:
              FUN_00a23020(lVar29,pcVar36,local_1a0,local_218);
              iVar14 = 0x3a;
              goto LAB_00a467bc;
            }
            if ((X509 *)CONCAT71(uStack_167,uStack_168) != (X509 *)0x0) {
                    /* try { // try from 00a47510 to 00b475f3 has its CatchHandler @ 00a4735c */
              iVar14 = SSL_CTX_use_certificate(pSVar19,(X509 *)CONCAT71(uStack_167,uStack_168));
              if (iVar14 != 1) {
                FUN_00a23020(lVar29,"unable to set client certificate");
                X509_free((X509 *)CONCAT71(uStack_167,uStack_168));
                iVar14 = 0x3a;
                goto LAB_00a467bc;
              }
              X509_free((X509 *)CONCAT71(uStack_167,uStack_168));
              bVar13 = false;
LAB_00a47528:
              if (local_218 != (char *)0x0) goto LAB_00a47470;
              goto LAB_00a4748c;
            }
            pcVar36 = "ssl engine didn\'t initialized the certificate properly.";
          }
        }
LAB_00a47740:
        FUN_00a23020(lVar29,pcVar36);
        iVar14 = 0x3a;
      }
      goto LAB_00a467bc;
    }
LAB_00a47894:
                    /* try { // try from 00a47894 to 00b478eb has its CatchHandler @ 00a47894
                       catch() { ... } // from try @ 00a47894 with catch @ 00a47894
                       catch() { ... } // from try @ 00a47a4c with catch @ 00a47894 */
    if (((int)*plVar3 == 2) &&
       (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2
       )) {
      plVar30 = param_1 + 0x6f;
    }
    else {
      plVar30 = param_1 + 0x67;
    }
    pcVar36 = (char *)plVar30[7];
    if ((char *)plVar30[7] == (char *)0x0) {
      pcVar36 = "ALL:!EXPORT:!EXPORT40:!EXPORT56:!aNULL:!LOW:!RC4:@STRENGTH";
    }
                    /* try { // try from 00a478ec to 00b47903 has its CatchHandler @ 00a47acc */
    iVar14 = SSL_CTX_set_cipher_list((SSL_CTX *)*plVar2,pcVar36);
    if (iVar14 == 0) {
      FUN_00a23020(lVar17,"failed setting cipher list: %s",pcVar36);
      iVar14 = 0x3b;
      goto LAB_00a467bc;
    }
    FUN_00a22d58(lVar17,"Cipher selection: %s\n",pcVar36);
                    /* try { // try from 00a4790c to 00b47917 has its CatchHandler @ 00a47ac8 */
    if (iVar9 == 1) {
                    /* try { // try from 00a47918 to 00b47923 has its CatchHandler @ 00a47ac4 */
                    /* try { // try from 00a47924 to 00b47a4b has its CatchHandler @ 00a47adc */
      if (((int)*plVar3 == 2) &&
         (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) !=
          2)) {
        lVar29 = lVar17 + 0x4f8;
      }
      else {
        lVar29 = lVar17 + 0x440;
      }
      uVar34 = *(undefined8 *)(lVar29 + 0xa0);
      FUN_00a22d58(lVar17,"Using TLS-SRP username: %s\n",uVar34);
      iVar14 = SSL_CTX_set_srp_username(*plVar2,uVar34);
      if (iVar14 == 0) {
        pcVar36 = "Unable to set SRP user name";
      }
      else {
        if (((int)*plVar3 == 2) &&
           (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec)
            != 2)) {
          lVar29 = lVar17 + 0x4f8;
        }
        else {
          lVar29 = lVar17 + 0x440;
        }
        iVar14 = SSL_CTX_set_srp_password(*plVar2,*(undefined8 *)(lVar29 + 0xa8));
        if (iVar14 != 0) {
          if (((int)*plVar3 == 2) &&
             (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec
                      ) != 2)) {
            lVar29 = param_1[0x76];
          }
          else {
            lVar29 = param_1[0x6e];
          }
          if (lVar29 == 0) {
                    /* try { // try from 00a47a4c to 00b47b33 has its CatchHandler @ 00a47894 */
            FUN_00a22d58(lVar17,"Setting cipher list SRP\n");
            iVar14 = SSL_CTX_set_cipher_list((SSL_CTX *)*plVar2,"SRP");
            if (iVar14 == 0) {
              FUN_00a23020(lVar17,"failed setting SRP cipher list");
              iVar14 = 0x3b;
              goto LAB_00a467bc;
            }
          }
          goto LAB_00a47a64;
        }
        pcVar36 = "failed setting SRP password";
      }
      FUN_00a23020(lVar17,pcVar36);
      iVar14 = 0x2b;
      goto LAB_00a467bc;
    }
LAB_00a47a64:
    if (local_1c8 != (long *)0x0 || local_1d0 != (char *)0x0) {
      iVar14 = SSL_CTX_load_verify_locations((SSL_CTX *)*plVar2,local_1d0,(char *)local_1c8);
      if (iVar14 == 0) {
        if (!bVar12) {
                    /* catch() { ... } // from try @ 00a47bb8 with catch @ 00a47d64 */
                    /* catch() { ... } // from try @ 00a47bac with catch @ 00a47d68 */
          if (local_1d0 == (char *)0x0) {
            local_1d0 = "none";
          }
                    /* catch() { ... } // from try @ 00a47b8c with catch @ 00a47d6c */
                    /* catch() { ... } // from try @ 00a47bc4 with catch @ 00a47d7c */
          if (local_1c8 == (long *)0x0) {
            local_1c8 = (long *)"none";
          }
          FUN_00a23020(lVar17,
                       "error setting certificate verify locations:\n  CAfile: %s\n  CApath: %s",
                       local_1d0,local_1c8);
          iVar14 = 0x4d;
          goto LAB_00a467bc;
        }
        pcVar36 = "error setting certificate verify locations, continuing anyway:\n";
      }
      else {
        pcVar36 = "successfully set certificate verify locations:\n";
      }
      FUN_00a22d58(lVar17,pcVar36);
      if (local_1d0 == (char *)0x0) {
        local_1d0 = "none";
      }
                    /* catch() { ... } // from try @ 00a47918 with catch @ 00a47ac4 */
                    /* catch() { ... } // from try @ 00a4790c with catch @ 00a47ac8 */
                    /* catch() { ... } // from try @ 00a478ec with catch @ 00a47acc */
      if (local_1c8 == (long *)0x0) {
        local_1c8 = (long *)"none";
      }
      FUN_00a22d58(lVar17,"  CAfile: %s\n  CApath: %s\n",local_1d0,local_1c8);
    }
                    /* catch() { ... } // from try @ 00a47924 with catch @ 00a47adc */
    if (local_1d8 != (char *)0x0) {
      pXVar25 = SSL_CTX_get_cert_store((SSL_CTX *)*plVar2);
      m = X509_LOOKUP_file();
      ctx = X509_STORE_add_lookup(pXVar25,m);
      if ((ctx == (X509_LOOKUP *)0x0) || (iVar14 = X509_load_crl_file(ctx,local_1d8,1), iVar14 == 0)
         ) {
                    /* try { // try from 00a47bac to 00b47bb7 has its CatchHandler @ 00a47d68 */
        FUN_00a23020(lVar17,"error loading CRL file: %s",local_1d8);
                    /* try { // try from 00a47bb8 to 00b47bc3 has its CatchHandler @ 00a47d64 */
        iVar14 = 0x52;
        goto LAB_00a467bc;
      }
      FUN_00a22d58(lVar17,"successfully load CRL file:\n");
      pXVar25 = SSL_CTX_get_cert_store((SSL_CTX *)*plVar2);
                    /* try { // try from 00a47b34 to 00b47b8b has its CatchHandler @ 00a47b34
                       catch() { ... } // from try @ 00a47b34 with catch @ 00a47b34
                       catch() { ... } // from try @ 00a47cec with catch @ 00a47b34 */
      X509_STORE_set_flags(pXVar25,0xc);
      FUN_00a22d58(lVar17,"  CRLfile: %s\n",local_1d8);
    }
    SSL_CTX_set_verify((SSL_CTX *)*plVar2,local_1dc,(callback *)0x0);
                    /* try { // try from 00a47b8c to 00b47ba3 has its CatchHandler @ 00a47d6c */
    if ((*(code **)(lVar17 + 0x4a0) != (code *)0x0) &&
       (iVar14 = (**(code **)(lVar17 + 0x4a0))(lVar17,*plVar2,*(undefined8 *)(lVar17 + 0x4a8)),
       iVar14 != 0)) {
      FUN_00a23020(lVar17,"error signaled by ssl ctx callback");
      goto LAB_00a467bc;
    }
                    /* try { // try from 00a47bc4 to 00b47ceb has its CatchHandler @ 00a47d7c */
    plVar30 = param_1 + lVar35 * 5 + 0x56;
    if ((SSL *)param_1[lVar35 * 5 + 0x56] != (SSL *)0x0) {
      SSL_free((SSL *)param_1[lVar35 * 5 + 0x56]);
    }
    pSVar26 = SSL_new((SSL_CTX *)*plVar2);
    *plVar30 = (long)pSVar26;
    if (pSVar26 == (SSL *)0x0) {
      FUN_00a23020(lVar17,"SSL: couldn\'t create a context (handle)!");
      iVar14 = 0x1b;
      goto LAB_00a467bc;
    }
    if (((int)*plVar3 == 2) &&
       (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2
       )) {
      cVar10 = *(char *)((long)param_1 + 0x382);
    }
    else {
      cVar10 = *(char *)((long)param_1 + 0x342);
    }
    if (cVar10 != '\0') {
      SSL_ctrl(pSVar26,0x41,1,(void *)0x0);
      pSVar26 = (SSL *)*plVar30;
    }
    SSL_set_connect_state(pSVar26);
    param_1[lVar35 * 5 + 0x57] = 0;
    iVar14 = inet_pton(2,pcVar18,local_190);
    if (((iVar14 == 0) && (iVar14 = inet_pton(10,pcVar18,local_190), iVar14 == 0)) &&
       (lVar29 = SSL_ctrl((SSL *)*plVar30,0x37,0,pcVar18), lVar29 == 0)) {
      FUN_00a22d58(lVar17,
                   "WARNING: failed to configure server name indication (SNI) TLS extension\n");
    }
    if (*(char *)(lVar17 + 0x5b0) != '\0') {
      local_170._0_1_ = '\0';
      local_170._1_7_ = 0;
      FUN_00a17d7c(param_1);
      uVar21 = FUN_00a17dc0(param_1,&local_170,0,param_2);
      if ((uVar21 & 1) != 0) {
LAB_00a47ce8:
                    /* try { // try from 00a47cec to 00b47dd3 has its CatchHandler @ 00a47b34 */
        FUN_00a17da0(param_1);
        goto LAB_00a47cf0;
      }
      iVar14 = SSL_set_session((SSL *)*plVar30,
                               (SSL_SESSION *)CONCAT71(local_170._1_7_,(char)local_170));
      if (iVar14 != 0) {
        FUN_00a22d58(lVar17,"SSL re-using session ID\n");
        goto LAB_00a47ce8;
      }
      FUN_00a17da0(param_1);
      uVar21 = ERR_get_error();
      pcVar18 = ERR_error_string(uVar21,(char *)0x0);
      pcVar36 = "SSL: SSL_set_session failed: %s";
LAB_00a47e10:
      FUN_00a23020(lVar17,pcVar36,pcVar18);
      iVar14 = 0x23;
      goto LAB_00a467bc;
    }
LAB_00a47cf0:
    if ((char)param_1[lVar35 * 5 + 0x5d] == '\0') {
      iVar14 = SSL_set_fd((SSL *)*plVar30,fd);
      if (iVar14 == 0) {
                    /* try { // try from 00a47dd4 to 00b47e27 has its CatchHandler @ 00a47dd4
                       catch() { ... } // from try @ 00a47dd4 with catch @ 00a47dd4
                       catch() { ... } // from try @ 00a47f88 with catch @ 00a47dd4 */
        uVar21 = ERR_get_error();
        pcVar18 = ERR_error_string(uVar21,(char *)0x0);
        pcVar36 = "SSL: SSL_set_fd failed: %s";
        goto LAB_00a47e10;
      }
    }
    else {
      type = BIO_f_ssl();
      bp = BIO_new(type);
      BIO_ctrl(bp,0x6d,0,(void *)param_1[lVar35 * 5 + 0x60]);
      SSL_set_bio((SSL *)*plVar30,bp,bp);
    }
    uVar16 = 1;
    *puVar1 = 1;
  }
  else {
    plVar30 = param_1 + lVar35 * 5 + 0x56;
  }
  local_1c8 = param_1 + 0x30;
  do {
                    /* catch() { ... } // from try @ 00a466a8 with catch @ 00a46854 */
                    /* catch() { ... } // from try @ 00a4669c with catch @ 00a46858 */
    if (2 < uVar16 - 1) {
      if (uVar16 == 4) {
        lVar31 = *param_1;
        if (*(char *)(lVar31 + 0x5b0) != '\0') {
          local_170._0_1_ = '\0';
          local_170._1_7_ = 0;
          ses = SSL_get1_session((SSL *)*plVar30);
          FUN_00a17d7c(param_1);
          uVar21 = FUN_00a17dc0(param_1,&local_170,0,param_2);
          if ((uVar21 & 1) == 0) {
                    /* try { // try from 00a46e1c to 00b46e6f has its CatchHandler @ 00a46e1c
                       catch() { ... } // from try @ 00a46e1c with catch @ 00a46e1c
                       catch() { ... } // from try @ 00a46fe0 with catch @ 00a46e1c */
            if ((SSL_SESSION *)CONCAT71(local_170._1_7_,(char)local_170) != ses) {
              FUN_00a22d58(lVar31,"old SSL session ID is stale, removing\n");
              FUN_00a18070(param_1,CONCAT71(local_170._1_7_,(char)local_170));
              goto LAB_00a46e44;
            }
            SSL_SESSION_free(ses);
          }
          else {
LAB_00a46e44:
            iVar14 = FUN_00a18160(param_1,ses,0,param_2);
            if (iVar14 != 0) {
              FUN_00a17da0(param_1);
                    /* try { // try from 00a46e70 to 00b46e87 has its CatchHandler @ 00a4705c */
              FUN_00a23020(lVar31,"failed to store ssl session");
              goto LAB_00a467bc;
            }
          }
          FUN_00a17da0(param_1);
        }
                    /* try { // try from 00a46fe0 to 00b470c3 has its CatchHandler @ 00a46e1c */
        if (((int)*local_1c8 == 2) &&
           (iVar14 = *(int *)((long)param_1 + 0x264),
           *(int *)((long)param_1 + (ulong)(iVar14 != -1) * 0x28 + 0x2ec) != 2)) {
          if ((char)param_1[0x70] == '\0') {
LAB_00a47028:
            if (*(int *)((long)param_1 + (ulong)(iVar14 != -1) * 0x28 + 0x2ec) == 2)
            goto LAB_00a47044;
            plVar30 = param_1 + 0x6f;
            goto LAB_00a47238;
          }
LAB_00a47020:
          bVar12 = true;
        }
        else {
          if ((char)param_1[0x68] != '\0') goto LAB_00a47020;
          if ((int)*local_1c8 == 2) {
            iVar14 = *(int *)((long)param_1 + 0x264);
            goto LAB_00a47028;
          }
LAB_00a47044:
          plVar30 = param_1 + 0x67;
LAB_00a47238:
          bVar12 = *(char *)((long)plVar30 + 9) != '\0';
        }
        iVar14 = FUN_00a48a84(param_1,param_1 + lVar35 * 5 + 0x53,bVar12);
        if (iVar14 != 0) goto LAB_00a467bc;
        *puVar1 = 5;
LAB_00a4725c:
                    /* try { // try from 00a47278 to 00b4735b has its CatchHandler @ 00a470c4 */
        *(undefined4 *)((long)param_1 + (long)param_2 * 0x28 + 0x29c) = 2;
        uVar27 = 1;
        param_1[lVar35 + 0x4f] = (long)FUN_00a48234;
        param_1[lVar35 + 0x51] = (long)FUN_00a48348;
      }
      else {
        if (uVar16 == 5) goto LAB_00a4725c;
        uVar27 = 0;
                    /* try { // try from 00a46b70 to 00b46bc3 has its CatchHandler @ 00a46b70
                       catch() { ... } // from try @ 00a46b70 with catch @ 00a46b70
                       catch() { ... } // from try @ 00a46d38 with catch @ 00a46b70 */
      }
      iVar14 = 0;
      *param_4 = uVar27;
      *puVar1 = 0;
      goto LAB_00a467bc;
    }
                    /* catch() { ... } // from try @ 00a4667c with catch @ 00a4685c */
                    /* catch() { ... } // from try @ 00a466b4 with catch @ 00a4686c */
    lVar17 = FUN_00a0f850(lVar31,0,1);
    if (lVar17 < 0) {
      FUN_00a23020(lVar31,"SSL connection timeout");
      iVar14 = 0x1c;
      goto LAB_00a467bc;
    }
    uVar16 = *puVar1;
    if ((uVar16 & 0xfffffffe) == 2) {
      uVar6 = uVar8;
      if (uVar16 != 3) {
        uVar6 = 0xffffffff;
      }
      uVar7 = uVar8;
      if (uVar16 != 2) {
        uVar7 = 0xffffffff;
      }
      lVar29 = 0;
      if ((param_3 & 1) == 0) {
        lVar29 = lVar17;
      }
      iVar14 = FUN_00a159e8(uVar7,0xffffffff,uVar6,lVar29);
      if (iVar14 < 0) {
        puVar20 = (undefined4 *)__errno();
        FUN_00a23020(lVar31,"select/poll on SSL socket, errno: %d",*puVar20);
        iVar14 = 0x23;
        goto LAB_00a467bc;
      }
      if (iVar14 == 0) {
                    /* catch() { ... } // from try @ 00a46bf0 with catch @ 00a46dac */
        if ((param_3 & 1) == 0) goto LAB_00a46dc0;
                    /* catch() { ... } // from try @ 00a46be4 with catch @ 00a46db0 */
                    /* catch() { ... } // from try @ 00a46bc4 with catch @ 00a46db4 */
        iVar14 = 0;
        *param_4 = 0;
        goto LAB_00a467bc;
      }
    }
    lVar17 = *param_1;
                    /* try { // try from 00a468c4 to 00b46917 has its CatchHandler @ 00a468c4
                       catch() { ... } // from try @ 00a468c4 with catch @ 00a468c4
                       catch() { ... } // from try @ 00a46a8c with catch @ 00a468c4 */
    if (((int)param_1[0x30] == 2) &&
       (*(int *)((long)param_1 + (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) != 2
       )) {
      lVar29 = lVar17 + 0x4f8;
    }
    else {
      lVar29 = lVar17 + 0x440;
    }
    ERR_clear_error();
    iVar14 = SSL_connect((SSL *)*plVar30);
    if (iVar14 == 1) {
      *puVar1 = 4;
      if ((SSL *)*plVar30 == (SSL *)0x0) {
        pcVar36 = "";
      }
      else {
        iVar14 = SSL_version((SSL *)*plVar30);
                    /* try { // try from 00a46918 to 00b4692f has its CatchHandler @ 00a46b08 */
        pcVar36 = "TLSv1.2";
                    /* try { // try from 00a46938 to 00b46943 has its CatchHandler @ 00a46b04 */
        switch(iVar14) {
        case 0x300:
                    /* try { // try from 00a46944 to 00b4694f has its CatchHandler @ 00a46b00 */
          pcVar36 = "SSLv3";
          break;
        case 0x301:
          pcVar36 = "TLSv1.0";
          break;
        case 0x302:
          pcVar36 = "TLSv1.1";
          break;
        case 0x303:
          break;
        default:
          if (iVar14 == 2) {
            pcVar36 = "SSLv2";
          }
          else {
            pcVar36 = "unknown";
          }
        }
      }
      c = SSL_get_current_cipher((SSL *)*plVar30);
      pcVar18 = SSL_CIPHER_get_name(c);
      FUN_00a22d58(lVar17,"SSL connection using %s / %s\n",pcVar36,pcVar18);
      if ((char)param_1[0x7b] != '\0') {
        SSL_get0_alpn_selected(*plVar30,&local_170,local_190);
        if (local_190[0] == 0) {
          FUN_00a22d58(lVar17,"ALPN, server did not agree to a protocol\n");
        }
        else {
          FUN_00a22d58(lVar17,"ALPN, server accepted to use %.*s\n",local_190[0],
                       CONCAT71(local_170._1_7_,(char)local_170));
          if ((local_190[0] == 8) &&
             (*(long *)CONCAT71(local_170._1_7_,(char)local_170) == 0x312e312f70747468)) {
            *(undefined4 *)(param_1 + 0xe4) = 2;
          }
        }
      }
    }
    else {
                    /* try { // try from 00a46950 to 00b46a8b has its CatchHandler @ 00a46b18 */
      iVar14 = SSL_get_error((SSL *)*plVar30,iVar14);
      if (iVar14 == 3) {
        *puVar1 = 3;
      }
      else {
        if (iVar14 != 2) {
                    /* try { // try from 00a46d38 to 00b46e1b has its CatchHandler @ 00a46b70 */
          memset(&local_170,0,0x100);
          *puVar1 = 1;
          uVar21 = ERR_get_error();
          if ((uVar21 & 0xff000fff) == 0x14000086) {
            lVar31 = SSL_get_verify_result((SSL *)*plVar30);
            if (lVar31 == 0) {
              local_150 = 0x64656c;
              uStack_168 = 0x69;
              uStack_167 = 0x20657461636966;
              local_170._0_1_ = 'S';
              local_170._1_7_ = 0x74726563204c53;
              builtin_strncpy(acStack_160,"verification fai",0x10);
            }
            else {
              *(long *)(lVar29 + 0x48) = lVar31;
              pcVar36 = X509_verify_cert_error_string(lVar31);
              FUN_00a0e7c4(&local_170,0x100,"SSL certificate problem: %s",pcVar36);
            }
            iVar14 = 0x3c;
          }
          else {
            ERR_error_string_n(uVar21,(char *)&local_170,0x100);
                    /* try { // try from 00a46e90 to 00b46e9b has its CatchHandler @ 00a47058 */
            if (uVar21 == 0) {
              if ((int)*local_1c8 == 2) {
                bVar12 = *(int *)((long)param_1 +
                                 (ulong)(*(int *)((long)param_1 + 0x264) != -1) * 0x28 + 0x2ec) == 2
                ;
                plVar30 = param_1 + 0x16;
                if (!bVar12) {
                  plVar30 = param_1 + 0x2b;
                }
                lVar31 = plVar30[2];
                if (bVar12) goto LAB_00a46f8c;
                lVar35 = param_1[0x33];
              }
              else {
                lVar31 = param_1[0x18];
LAB_00a46f8c:
                lVar35 = (long)(int)param_1[0x34];
              }
              FUN_00a23020(lVar17,"Unknown SSL protocol error in connection to %s:%ld ",lVar31,
                           lVar35);
              iVar14 = 0x23;
              goto LAB_00a467bc;
            }
            iVar14 = 0x23;
          }
          FUN_00a23020(lVar17,"%s",&local_170);
          goto LAB_00a467bc;
        }
        *puVar1 = 2;
      }
    }
    uVar16 = *puVar1;
  } while ((2 < uVar16 - 1) || ((param_3 & 1) == 0));
  iVar14 = 0;
LAB_00a467bc:
  if (*(long *)(lVar11 + 0x28) == local_68) {
                    /* try { // try from 00a467e0 to 00b468c3 has its CatchHandler @ 00a46628 */
    return iVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

