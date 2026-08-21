
/* WARNING: Type propagation algorithm not settling */

undefined8 tls_process_client_hello(SSL *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *__src;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  stack_st_SSL_CIPHER *psVar16;
  cert_st *pcVar17;
  uint *puVar18;
  EVP_MD *pEVar19;
  SSL_CTX *pSVar20;
  undefined4 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  code *pcVar25;
  BIO *pBVar26;
  ulong uVar27;
  char *pcVar28;
  byte *pbVar29;
  ulong uVar30;
  long lVar31;
  undefined1 *puVar32;
  EVP_MD *pEVar33;
  undefined8 uVar34;
  ulong uVar35;
  byte *a;
  long lVar36;
  byte *pbVar37;
  long local_88 [3];
  undefined1 *local_70;
  ulong uStack_68;
  
  iVar12 = RECORD_LAYER_is_sslv2_record(&param_1[1].write_hash);
  if (iVar12 != 0) {
    lVar22 = param_2[1];
    if (lVar22 != 0) {
      pcVar28 = (char *)*param_2;
      cVar3 = *pcVar28;
      *param_2 = (long)(pcVar28 + 1);
      param_2[1] = lVar22 - 1U;
      if (cVar3 == '\x01') {
        if (lVar22 - 1U < 2) {
          iVar12 = 0xfc;
          iVar13 = 0x3b7;
        }
        else {
          cVar3 = pcVar28[1];
                    /* catch() { ... } // from try @ 00ad8b94 with catch @ 00ad85e0
                       catch() { ... } // from try @ 00ad8bec with catch @ 00ad85e0 */
          cVar8 = pcVar28[2];
          uVar23 = lVar22 - 3;
          *param_2 = (long)(pcVar28 + 3);
          param_2[1] = uVar23;
          uVar14 = (uint)CONCAT11(cVar3,cVar8);
          if (uVar14 == 2) {
            iVar12 = 0xfc;
            iVar13 = 0x3bc;
          }
          else {
            if (cVar3 == '\x03') {
              *(uint *)((long)&param_1->tlsext_ocsp_ids + 4) = uVar14;
              goto LAB_00ad84e8;
            }
            iVar12 = 0xfc;
            iVar13 = 0x3c3;
          }
        }
        goto LAB_00ad8490;
      }
    }
                    /* try { // try from 00ad8478 to 00bd8523 has its CatchHandler @ 00ad8478
                       catch() { ... } // from try @ 00ad8478 with catch @ 00ad8478
                       catch() { ... } // from try @ 00ad852c with catch @ 00ad8478
                       catch() { ... } // from try @ 00ad85cc with catch @ 00ad8478 */
    iVar12 = 0x44;
    iVar13 = 0x3b1;
    goto LAB_00ad8490;
  }
  uVar23 = param_2[1] - 2;
  if ((ulong)param_2[1] < 2) {
    iVar12 = 0xa0;
    iVar13 = 0x3cd;
LAB_00ad8684:
    ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
    pEVar33 = (EVP_MD *)0x0;
LAB_00ad868c:
    uVar34 = 0x32;
  }
  else {
    pbVar29 = (byte *)*param_2;
    bVar9 = *pbVar29;
    *(uint *)((long)&param_1->tlsext_ocsp_ids + 4) = (uint)bVar9 << 8;
    uVar14 = (uint)CONCAT11(bVar9,pbVar29[1]);
    *(uint *)((long)&param_1->tlsext_ocsp_ids + 4) = uVar14;
    *param_2 = (long)(pbVar29 + 2);
    param_2[1] = uVar23;
LAB_00ad84e8:
    if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
      iVar13 = ssl_choose_server_version(param_1);
      if (iVar13 == 0) {
        uVar23 = param_2[1];
        goto LAB_00ad857c;
      }
LAB_00ad8544:
      ERR_put_error(0x14,0x17d,iVar13,"ssl/statem/statem_srvr.c",0x3e0);
      if ((param_1->generate_session_id != (GEN_SESSION_CB)0x0) ||
         (*(long *)&param_1->verify_mode != 0)) {
        pEVar33 = (EVP_MD *)0x0;
        uVar34 = 0x46;
        goto LAB_00ad8690;
      }
LAB_00ad896c:
      pEVar33 = (EVP_MD *)0x0;
      uVar34 = 0x46;
      param_1->version = *(int *)((long)&param_1->tlsext_ocsp_ids + 4);
      goto LAB_00ad8690;
    }
    if (param_1->method->version != 0x1ffff) {
                    /* try { // try from 00ad8524 to 00bd852b has its CatchHandler @ 00ad85cc */
      uVar2 = 0xff00;
                    /* try { // try from 00ad852c to 00bd85c7 has its CatchHandler @ 00ad8478 */
      if (uVar14 != 0x100) {
        uVar2 = uVar14;
      }
      uVar14 = 0xff00;
      if (param_1->version != 0x100) {
        uVar14 = param_1->version;
      }
      if ((int)uVar14 < (int)uVar2) {
        iVar13 = 0x18c;
        goto LAB_00ad8544;
      }
    }
LAB_00ad857c:
    if (iVar12 == 0) {
      if (0x1f < uVar23) {
        puVar24 = (undefined8 *)*param_2;
        lVar22 = *(long *)&param_1->read_ahead;
        uVar34 = puVar24[2];
        *(undefined8 *)(lVar22 + 200) = puVar24[3];
        *(undefined8 *)(lVar22 + 0xc0) = uVar34;
        uVar34 = *puVar24;
        *(undefined8 *)(lVar22 + 0xb8) = puVar24[1];
        *(undefined8 *)(lVar22 + 0xb0) = uVar34;
        lVar22 = *param_2;
        lVar36 = param_2[1];
                    /* try { // try from 00ad8650 to 00bd8673 has its CatchHandler @ 00ad8bfc */
        lVar31 = lVar36 + -0x20;
        *param_2 = lVar22 + 0x20;
        param_2[1] = lVar31;
        if (lVar31 != 0) {
          bVar9 = *(byte *)(lVar22 + 0x20);
          uVar35 = (ulong)bVar9;
          uVar30 = lVar36 - 0x21;
          uVar23 = uVar30 - uVar35;
          if (uVar35 <= uVar30) {
            local_70 = (undefined1 *)(lVar22 + 0x21);
            pbVar29 = local_70 + uVar35;
            *param_2 = (long)pbVar29;
            param_2[1] = uVar23;
            uStack_68 = uVar35;
            if (0x20 < bVar9) {
              iVar12 = 0x9f;
              iVar13 = 0x42a;
              goto LAB_00ad8684;
            }
            if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
              uVar30 = 0;
              a = (byte *)0x0;
joined_r0x00ad8880:
              if (1 < uVar23) {
                puVar32 = (undefined1 *)*param_2;
                uVar35 = (ulong)CONCAT11(*puVar32,puVar32[1]);
                lVar22 = (uVar23 - 2) - uVar35;
                if (uVar35 <= uVar23 - 2) {
                  puVar32 = puVar32 + 2;
                  pbVar29 = puVar32 + uVar35;
                  *param_2 = (long)pbVar29;
                  param_2[1] = lVar22;
                  if (lVar22 != 0) {
                    pbVar37 = pbVar29 + 1;
                    uVar23 = (ulong)*pbVar29;
                    if (uVar23 <= lVar22 - 1U) {
                      *param_2 = (long)(pbVar37 + uVar23);
                      param_2[1] = (lVar22 - 1U) - uVar23;
                      local_88[2] = param_2[1];
                      local_88[1] = *param_2;
                    /* try { // try from 00ad8820 to 00bd8843 has its CatchHandler @ 00ad8bf8 */
                      goto LAB_00ad88e0;
                    }
                  }
                }
              }
              iVar12 = 0x9f;
              iVar13 = 0x442;
            }
            else {
              if (uVar23 != 0) {
                a = pbVar29 + 1;
                bVar9 = *pbVar29;
                uVar30 = (ulong)bVar9;
                if (uVar30 <= uVar23 - 1) {
                  *param_2 = (long)(a + uVar30);
                  param_2[1] = (uVar23 - 1) - uVar30;
                  uVar14 = SSL_get_options(param_1);
                  if ((bVar9 == 0) && ((uVar14 >> 0xd & 1) != 0)) {
                    return 1;
                  }
                  uVar23 = param_2[1];
                  goto joined_r0x00ad8880;
                }
              }
              iVar12 = 0x9f;
              iVar13 = 0x431;
            }
            goto LAB_00ad8684;
          }
        }
      }
      iVar12 = 0x9f;
      iVar13 = 0x424;
      goto LAB_00ad8684;
    }
    if (uVar23 < 2) {
LAB_00ad85c0:
                    /* try { // try from 00ad85c8 to 00bd85cb has its CatchHandler @ 00ad85cc */
                    /* catch() { ... } // from try @ 00ad8524 with catch @ 00ad85cc
                       catch() { ... } // from try @ 00ad85c8 with catch @ 00ad85cc
                       try { // try from 00ad85cc to 00bd85df has its CatchHandler @ 00ad8478 */
      iVar12 = 0xd5;
      iVar13 = 0x3fa;
      goto LAB_00ad8684;
    }
    puVar32 = (undefined1 *)*param_2;
    uVar4 = *puVar32;
    uVar5 = puVar32[1];
    *param_2 = (long)(puVar32 + 2);
    param_2[1] = uVar23 - 2;
    if (uVar23 - 2 < 2) goto LAB_00ad85c0;
    uVar6 = puVar32[2];
    uVar7 = puVar32[3];
    *param_2 = (long)(puVar32 + 4);
    param_2[1] = uVar23 - 4;
    if (uVar23 - 4 < 2) goto LAB_00ad85c0;
    uVar30 = (ulong)(uint)CONCAT11(uVar6,uVar7);
    uVar10 = puVar32[4];
                    /* try { // try from 00ad86f8 to 00bd871b has its CatchHandler @ 00ad8c04 */
    uVar11 = puVar32[5];
    puVar32 = puVar32 + 6;
    uVar23 = uVar23 - 6;
    *param_2 = (long)puVar32;
    param_2[1] = uVar23;
    if (0x20 < CONCAT11(uVar6,uVar7)) {
      iVar12 = 0x9f;
      iVar13 = 0x401;
      goto LAB_00ad8684;
    }
    uVar35 = (ulong)CONCAT11(uVar4,uVar5);
    uVar27 = uVar23 - uVar35;
    if (uVar23 < uVar35) {
LAB_00ad87a0:
      iVar12 = 0xd5;
      iVar13 = 0x40b;
      goto LAB_00ad8684;
    }
    puVar1 = puVar32 + uVar35;
    uVar23 = uVar27 - uVar30;
    *param_2 = (long)puVar1;
    param_2[1] = uVar27;
    if (uVar27 < uVar30) goto LAB_00ad87a0;
    uVar14 = (uint)CONCAT11(uVar10,uVar11);
    uVar27 = (ulong)uVar14;
    __src = puVar1 + uVar30;
                    /* try { // try from 00ad878c to 00bd87af has its CatchHandler @ 00ad8c00 */
    *param_2 = (long)__src;
    param_2[1] = uVar23;
    local_70 = puVar1;
    uStack_68 = uVar30;
    if (uVar23 < uVar27) goto LAB_00ad87a0;
    *param_2 = (long)(__src + uVar27);
    param_2[1] = uVar23 - uVar27;
    if (uVar23 - uVar27 != 0) goto LAB_00ad87a0;
    lVar22 = *(long *)&param_1->read_ahead;
    *(undefined8 *)(lVar22 + 0xb8) = 0;
    *(undefined8 *)(lVar22 + 0xb0) = 0;
    *(undefined8 *)(lVar22 + 200) = 0;
    *(undefined8 *)(lVar22 + 0xc0) = 0;
                    /* try { // try from 00ad88b4 to 00bd88d7 has its CatchHandler @ 00ad8bf4 */
    if (0x1f < uVar14) {
      uVar14 = 0x20;
    }
    memcpy((void *)((*(long *)&param_1->read_ahead - (ulong)uVar14) + 0xd0),__src,(ulong)uVar14);
    uVar30 = 0;
    a = (byte *)0x0;
    local_88[1] = 0;
    local_88[2] = 0;
    pbVar37 = &DAT_018a4ea4;
    uVar23 = 1;
LAB_00ad88e0:
    if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0) {
      uVar14 = SSL_get_options(param_1);
      if ((uVar14 >> 0xd & 1) != 0) {
        pcVar25 = *(code **)(param_1->mode + 200);
        if (pcVar25 == (code *)0x0) {
                    /* try { // try from 00ad8b90 to 00bd8b93 has its CatchHandler @ 00ad8bec */
                    /* try { // try from 00ad8b94 to 00bd8bcf has its CatchHandler @ 00ad85e0 */
          if ((uVar30 == *(uint *)(param_1->msg_callback + 0x100)) &&
             (iVar13 = CRYPTO_memcmp(a,param_1->msg_callback,uVar30), iVar13 == 0))
          goto LAB_00ad8920;
          iVar12 = 0x134;
          iVar13 = 0x459;
        }
        else {
          iVar13 = (*pcVar25)(param_1,a,uVar30);
          if (iVar13 != 0) {
LAB_00ad8920:
            *(undefined4 *)(param_1->msg_callback + 0x104) = 1;
            goto LAB_00ad892c;
          }
                    /* try { // try from 00ad8bd0 to 00bd8bd3 has its CatchHandler @ 00ad8c04 */
                    /* try { // try from 00ad8bd4 to 00bd8bd7 has its CatchHandler @ 00ad8c00 */
                    /* try { // try from 00ad8bd8 to 00bd8bdb has its CatchHandler @ 00ad8bfc */
          iVar12 = 0x134;
                    /* try { // try from 00ad8bdc to 00bd8bdf has its CatchHandler @ 00ad8bf8 */
          iVar13 = 0x452;
        }
LAB_00ad8be0:
                    /* try { // try from 00ad8be0 to 00bd8be3 has its CatchHandler @ 00ad8bf4 */
        ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
                    /* try { // try from 00ad8be4 to 00bd8be7 has its CatchHandler @ 00ad8bf0 */
        pEVar33 = (EVP_MD *)0x0;
                    /* try { // try from 00ad8be8 to 00bd8beb has its CatchHandler @ 00ad8bec */
        uVar34 = 0x28;
                    /* catch() { ... } // from try @ 00ad89dc with catch @ 00ad8bec
                       catch() { ... } // from try @ 00ad8b90 with catch @ 00ad8bec
                       catch() { ... } // from try @ 00ad8be8 with catch @ 00ad8bec
                       try { // try from 00ad8bec to 00bd8c1f has its CatchHandler @ 00ad85e0 */
        goto LAB_00ad8690;
      }
LAB_00ad892c:
                    /* try { // try from 00ad8948 to 00bd896b has its CatchHandler @ 00ad8bf0 */
      if ((param_1->method->version == 0x1ffff) &&
         (iVar13 = ssl_choose_server_version(param_1), iVar13 != 0)) {
        ERR_put_error(0x14,0x17d,iVar13,"ssl/statem/statem_srvr.c",0x461);
        goto LAB_00ad896c;
      }
    }
    *(undefined4 *)&param_1->param = 0;
    if ((iVar12 == 0) &&
       ((param_1->new_session == 0 || (((ulong)param_1->tlsext_debug_arg & 0x1000000000000) == 0))))
    {
      iVar13 = ssl_get_prev_session(param_1,local_88 + 1,&local_70);
      if (iVar13 != -1) {
        if ((iVar13 != 1) || (param_1->version != *(int *)&param_1->ctx->method)) goto LAB_00ad8988;
        *(undefined4 *)&param_1->param = 1;
        goto LAB_00ad8998;
      }
LAB_00ad8a38:
      pEVar33 = (EVP_MD *)0x0;
      goto LAB_00ad86a0;
    }
LAB_00ad8988:
    iVar13 = ssl_get_new_session(param_1,1);
    if (iVar13 == 0) goto LAB_00ad8a38;
LAB_00ad8998:
    uVar14 = 2;
    if (iVar12 != 0) {
      uVar14 = 3;
    }
    *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3c4) = 0;
    if (uVar35 != 0) {
      uVar27 = (ulong)uVar14;
      uVar30 = 0;
      if (uVar27 != 0) {
        uVar30 = uVar35 / uVar27;
      }
      if (uVar35 != uVar30 * uVar27) {
        ERR_put_error(0x14,0xa1,0x97,"ssl/statem/statem_srvr.c",0xcb6);
                    /* try { // try from 00ad89dc to 00bd89ff has its CatchHandler @ 00ad8bec */
        uVar34 = 0x32;
        pEVar33 = (EVP_MD *)0x0;
        goto LAB_00ad8690;
      }
      pEVar33 = (EVP_MD *)OPENSSL_sk_new_null();
                    /* try { // try from 00ad8a70 to 00bd8a73 has its CatchHandler @ 00ad8c04 */
      if (pEVar33 == (EVP_MD *)0x0) {
                    /* catch() { ... } // from try @ 00ad8948 with catch @ 00ad8bf0
                       catch() { ... } // from try @ 00ad8b60 with catch @ 00ad8bf0
                       catch() { ... } // from try @ 00ad8be4 with catch @ 00ad8bf0 */
                    /* catch() { ... } // from try @ 00ad88b4 with catch @ 00ad8bf4
                       catch() { ... } // from try @ 00ad8b30 with catch @ 00ad8bf4
                       catch() { ... } // from try @ 00ad8be0 with catch @ 00ad8bf4 */
                    /* catch() { ... } // from try @ 00ad8820 with catch @ 00ad8bf8
                       catch() { ... } // from try @ 00ad8b00 with catch @ 00ad8bf8
                       catch() { ... } // from try @ 00ad8bdc with catch @ 00ad8bf8 */
                    /* catch() { ... } // from try @ 00ad8650 with catch @ 00ad8bfc
                       catch() { ... } // from try @ 00ad8ad0 with catch @ 00ad8bfc
                       catch() { ... } // from try @ 00ad8bd8 with catch @ 00ad8bfc */
                    /* catch() { ... } // from try @ 00ad878c with catch @ 00ad8c00
                       catch() { ... } // from try @ 00ad8aa0 with catch @ 00ad8c00
                       catch() { ... } // from try @ 00ad8bd4 with catch @ 00ad8c00 */
                    /* catch() { ... } // from try @ 00ad86f8 with catch @ 00ad8c04
                       catch() { ... } // from try @ 00ad8a70 with catch @ 00ad8c04
                       catch() { ... } // from try @ 00ad8bd0 with catch @ 00ad8c04 */
        ERR_put_error(0x14,0xa1,0x41,"ssl/statem/statem_srvr.c",0xcbe);
        uVar34 = 0x50;
        pEVar33 = (EVP_MD *)0x0;
        goto LAB_00ad8690;
      }
      lVar36 = *(long *)&param_1->read_ahead;
      CRYPTO_free(*(void **)(lVar36 + 0x290));
                    /* try { // try from 00ad8aa0 to 00bd8aa3 has its CatchHandler @ 00ad8c00 */
      *(undefined8 *)(lVar36 + 0x298) = 0;
      *(undefined8 *)(lVar36 + 0x290) = 0;
      lVar22 = CRYPTO_memdup(puVar32,uVar35,"ssl/statem/../packet_locl.h",0x181);
      *(long *)(lVar36 + 0x290) = lVar22;
      if (lVar22 == 0) goto LAB_00ad8cd0;
      *(ulong *)(lVar36 + 0x298) = uVar35;
      if (uVar35 < uVar27) {
LAB_00ad8cb4:
                    /* catch() { ... } // from try @ 00ad8c6c with catch @ 00ad8cbc */
        iVar12 = 0x44;
        iVar13 = 0xd01;
        goto LAB_00ad8ccc;
      }
      uVar30 = (ulong)(uVar14 - 1);
                    /* try { // try from 00ad8ad0 to 00bd8ad3 has its CatchHandler @ 00ad8bfc */
      if (iVar12 == 0) {
        do {
                    /* catch() { ... } // from try @ 00ad8c7c with catch @ 00ad8c20 */
          memcpy(local_88,puVar32,uVar27);
          cVar3 = *(char *)((long)local_88 + (ulong)(uVar14 - 2));
          if (cVar3 == 'V') {
            if (*(char *)((long)local_88 + uVar30) != '\0') goto LAB_00ad8c6c;
            iVar12 = ssl_check_version_downgrade(param_1);
            if (iVar12 == 0) goto LAB_00ad8dd8;
          }
          else if ((cVar3 == '\0') && (*(char *)((long)local_88 + uVar30) == -1)) {
            if (param_1[1].init_off != 0) goto LAB_00ad8db4;
            *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3c4) = 1;
          }
          else {
LAB_00ad8c6c:
                    /* try { // try from 00ad8c6c to 00bd8c7b has its CatchHandler @ 00ad8cbc */
            lVar22 = ssl_get_cipher_by_char(param_1,local_88);
                    /* try { // try from 00ad8c7c to 00bd8cd7 has its CatchHandler @ 00ad8c20 */
            if ((lVar22 != 0) && (iVar12 = OPENSSL_sk_push(pEVar33,lVar22), iVar12 == 0))
            goto LAB_00ad8d5c;
          }
          uVar35 = uVar35 - uVar27;
          puVar32 = puVar32 + uVar27;
        } while (uVar27 <= uVar35);
      }
      else {
        do {
          memcpy(local_88,puVar32,uVar27);
          if ((char)local_88[0] == '\0') {
                    /* try { // try from 00ad8b00 to 00bd8b03 has its CatchHandler @ 00ad8bf8 */
            cVar3 = *(char *)((long)local_88 + (ulong)(uVar14 - 2));
            if (cVar3 == 'V') {
              if (*(char *)((long)local_88 + uVar30) != '\0') goto LAB_00ad8b40;
              iVar12 = ssl_check_version_downgrade(param_1);
              if (iVar12 == 0) goto LAB_00ad8dd8;
            }
            else if ((cVar3 == '\0') && (*(char *)((long)local_88 + uVar30) == -1)) {
              if (param_1[1].init_off != 0) goto LAB_00ad8db4;
              *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3c4) = 1;
                    /* try { // try from 00ad8b30 to 00bd8b33 has its CatchHandler @ 00ad8bf4 */
            }
            else {
LAB_00ad8b40:
              lVar22 = ssl_get_cipher_by_char(param_1,(ulong)local_88 | 1);
                    /* try { // try from 00ad8b60 to 00bd8b63 has its CatchHandler @ 00ad8bf0 */
              if ((lVar22 != 0) && (iVar12 = OPENSSL_sk_push(pEVar33,lVar22), iVar12 == 0))
              goto LAB_00ad8d5c;
            }
          }
          uVar35 = uVar35 - uVar27;
          puVar32 = puVar32 + uVar27;
        } while (uVar27 <= uVar35);
      }
      if (uVar35 != 0) goto LAB_00ad8cb4;
      if (*(int *)&param_1->param != 0) {
        iVar12 = *(int *)(*(long *)&(param_1->ctx->ex_data).dummy + 0x10);
        iVar13 = OPENSSL_sk_num(pEVar33);
        if (0 < iVar13) {
          iVar13 = 0;
          do {
            lVar22 = OPENSSL_sk_value(pEVar33,iVar13);
                    /* try { // try from 00ad8d1c to 00bd8d33 has its CatchHandler @ 00ad8ed8 */
            if (*(int *)(lVar22 + 0x10) == iVar12) goto LAB_00ad8d78;
            iVar13 = iVar13 + 1;
            iVar15 = OPENSSL_sk_num(pEVar33);
          } while (iVar13 < iVar15);
        }
        iVar12 = 0xd7;
                    /* try { // try from 00ad8d4c to 00bd8d5f has its CatchHandler @ 00ad8eb8 */
        iVar13 = 0x4b6;
        goto LAB_00ad8d50;
      }
LAB_00ad8d78:
      uVar14 = (uint)uVar23;
      if (uVar14 != 0) {
        lVar22 = 0;
        do {
          if (pbVar37[lVar22] == 0) {
            if ((0x2ff < param_1->version) &&
               (iVar12 = ssl_parse_clienthello_tlsext(param_1,local_88 + 1), iVar12 == 0)) {
                    /* catch() { ... } // from try @ 00ad8fa4 with catch @ 00ad8ff4 */
              ERR_put_error(0x14,0x17d,0xe3,"ssl/statem/statem_srvr.c",0x4cb);
              goto LAB_00ad86a0;
            }
            iVar12 = ssl_fill_hello_random(param_1,1,*(long *)&param_1->read_ahead + 0x90,0x20);
            if (iVar12 < 1) {
              uVar34 = 0x50;
              goto LAB_00ad8690;
            }
            if (((*(int *)&param_1->param == 0) && (0x300 < param_1->version)) &&
               (pBVar26 = param_1[1].rbio, pBVar26 != (BIO *)0x0)) {
              local_88[0] = 0;
              pSVar20 = param_1->ctx;
              puVar21 = (undefined4 *)((long)&pSVar20->method + 4);
                    /* try { // try from 00ad8e68 to 00bd8e77 has its CatchHandler @ 00ad8eec */
              *puVar21 = 0x30;
                    /* try { // try from 00ad8e78 to 00bd8f53 has its CatchHandler @ 00ad8cd8 */
              iVar12 = (*(code *)pBVar26)(param_1,&pSVar20->cipher_list,puVar21,pEVar33,local_88,
                                          param_1[1].wbio);
              if (iVar12 != 0) {
                pSVar20 = param_1->ctx;
                *(undefined4 *)&param_1->param = 1;
                pSVar20->md5 = pEVar33;
                pSVar20->default_passwd_callback_userdata = (void *)0x0;
                if (local_88[0] == 0) {
                  psVar16 = SSL_get_ciphers(param_1);
                  local_88[0] = ssl3_choose_cipher(param_1,pEVar33,psVar16);
                    /* catch() { ... } // from try @ 00ad8d4c with catch @ 00ad8eb8 */
                  if (local_88[0] == 0) {
                    iVar12 = 0xc1;
                    iVar13 = 0x4f5;
                    goto LAB_00ad8be0;
                  }
                  pSVar20 = param_1->ctx;
                }
                *(long *)&(pSVar20->ex_data).dummy = local_88[0];
                OPENSSL_sk_free(param_1->cert);
                pcVar17 = (cert_st *)OPENSSL_sk_dup(param_1->ctx->md5);
                    /* catch() { ... } // from try @ 00ad8d1c with catch @ 00ad8ed8 */
                uVar34._0_4_ = param_1->sid_ctx_length;
                uVar34._4_1_ = param_1->sid_ctx[0];
                uVar34._5_1_ = param_1->sid_ctx[1];
                uVar34._6_1_ = param_1->sid_ctx[2];
                uVar34._7_1_ = param_1->sid_ctx[3];
                param_1->cert = pcVar17;
                OPENSSL_sk_free(uVar34);
                    /* catch() { ... } // from try @ 00ad8dd0 with catch @ 00ad8eec
                       catch() { ... } // from try @ 00ad8e68 with catch @ 00ad8eec */
                uVar34 = OPENSSL_sk_dup(param_1->ctx->md5);
                pEVar33 = (EVP_MD *)0x0;
                param_1->sid_ctx_length = (int)uVar34;
                param_1->sid_ctx[0] = (char)((ulong)uVar34 >> 0x20);
                param_1->sid_ctx[1] = (char)((ulong)uVar34 >> 0x28);
                param_1->sid_ctx[2] = (char)((ulong)uVar34 >> 0x30);
                param_1->sid_ctx[3] = (char)((ulong)uVar34 >> 0x38);
              }
            }
                    /* catch() { ... } // from try @ 00ad8df4 with catch @ 00ad8efc */
            *(undefined8 *)(*(long *)&param_1->read_ahead + 0x280) = 0;
            uVar2 = *(uint *)&(param_1->ctx->ex_data).sk;
            if (uVar2 != 0) {
              iVar12 = ssl_allow_compression(param_1);
              if (iVar12 == 0) {
                iVar12 = 0x154;
                iVar13 = 0x510;
                goto LAB_00ad9138;
              }
              iVar12 = OPENSSL_sk_num(*(undefined8 *)(param_1->mode + 0xf0));
              if (0 < iVar12) {
                iVar12 = 0;
                goto LAB_00ad8f34;
              }
              puVar18 = (uint *)0x0;
              goto LAB_00ad9040;
            }
            if (*(int *)&param_1->param != 0) goto LAB_00ad90d0;
            iVar12 = ssl_allow_compression(param_1);
            if ((iVar12 == 0) || (*(long *)(param_1->mode + 0xf0) == 0)) {
              puVar18 = (uint *)0x0;
              iVar12 = *(int *)&param_1->param;
              goto joined_r0x00ad90a8;
            }
            iVar12 = OPENSSL_sk_num();
                    /* try { // try from 00ad8fa4 to 00bd8fb3 has its CatchHandler @ 00ad8ff4 */
            if (iVar12 < 1) {
              puVar18 = (uint *)0x0;
            }
            else {
              iVar13 = 0;
              do {
                    /* try { // try from 00ad8fb4 to 00bd900f has its CatchHandler @ 00ad8f54 */
                puVar18 = (uint *)OPENSSL_sk_value(*(undefined8 *)(param_1->mode + 0xf0),iVar13);
                lVar22 = 0;
                do {
                  if (*puVar18 == (uint)pbVar37[lVar22]) {
                    *(uint **)(*(long *)&param_1->read_ahead + 0x280) = puVar18;
                    if (*(int *)&param_1->param == 0) goto LAB_00ad90e0;
                    goto LAB_00ad90d0;
                  }
                  lVar22 = lVar22 + 1;
                } while ((uint)lVar22 < uVar14);
                iVar13 = iVar13 + 1;
                puVar18 = (uint *)0x0;
              } while (iVar13 < iVar12);
            }
            goto LAB_00ad90c8;
          }
          lVar22 = lVar22 + 1;
        } while ((uint)lVar22 < uVar14);
      }
      ERR_put_error(0x14,0x17d,0xbb,"ssl/statem/statem_srvr.c",0x4c4);
      goto LAB_00ad868c;
    }
    ERR_put_error(0x14,0xa1,0xb7,"ssl/statem/statem_srvr.c",0xcaf);
    uVar34 = 0x2f;
    pEVar33 = (EVP_MD *)0x0;
  }
  goto LAB_00ad8690;
LAB_00ad8dd8:
  ERR_put_error(0x14,0xa1,0x175,"ssl/statem/statem_srvr.c",0xcee);
                    /* try { // try from 00ad8df4 to 00bd8e1b has its CatchHandler @ 00ad8efc */
  uVar34 = 0x56;
  goto LAB_00ad8cd4;
LAB_00ad8d5c:
  iVar12 = 0x41;
  iVar13 = 0xcf9;
LAB_00ad8ccc:
  ERR_put_error(0x14,0xa1,iVar12,"ssl/statem/statem_srvr.c",iVar13);
LAB_00ad8cd0:
  uVar34 = 0x50;
  goto LAB_00ad8cd4;
  while( true ) {
                    /* catch() { ... } // from try @ 00ad8fb4 with catch @ 00ad8f54 */
    iVar12 = iVar12 + 1;
    iVar13 = OPENSSL_sk_num(*(undefined8 *)(param_1->mode + 0xf0));
    if (iVar13 <= iVar12) break;
LAB_00ad8f34:
    puVar18 = (uint *)OPENSSL_sk_value(*(undefined8 *)(param_1->mode + 0xf0),iVar12);
    if (uVar2 == *puVar18) {
      *(uint **)(*(long *)&param_1->read_ahead + 0x280) = puVar18;
      break;
    }
  }
LAB_00ad9040:
  if (*(long *)(*(long *)&param_1->read_ahead + 0x280) == 0) {
                    /* try { // try from 00ad9094 to 00bd91bf has its CatchHandler @ 00ad9094
                       catch() { ... } // from try @ 00ad9094 with catch @ 00ad9094
                       catch() { ... } // from try @ 00ad91c8 with catch @ 00ad9094 */
    iVar12 = 0x155;
    iVar13 = 0x51d;
LAB_00ad9138:
    ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
    uVar34 = 0x50;
  }
  else {
    lVar22 = 0;
    do {
      if (uVar2 == pbVar37[lVar22]) goto LAB_00ad90c8;
      lVar22 = lVar22 + 1;
    } while ((uint)lVar22 < uVar14);
    iVar12 = 0x156;
    iVar13 = 0x528;
LAB_00ad8d50:
    ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
    uVar34 = 0x2f;
  }
  goto LAB_00ad8690;
LAB_00ad90c8:
  iVar12 = *(int *)&param_1->param;
joined_r0x00ad90a8:
  if (iVar12 != 0) {
LAB_00ad90d0:
    OPENSSL_sk_free(pEVar33);
    return 2;
  }
LAB_00ad90e0:
  if (puVar18 == (uint *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar18;
  }
  pEVar19 = param_1->ctx->md5;
  *(uint *)&(param_1->ctx->ex_data).sk = uVar14;
  OPENSSL_sk_free(pEVar19);
  param_1->ctx->md5 = pEVar33;
  if (pEVar33 == (EVP_MD *)0x0) {
    iVar12 = 0x44;
    iVar13 = 0x55d;
    goto LAB_00ad9138;
  }
  iVar12 = tls1_set_server_sigalgs(param_1);
  if (iVar12 != 0) {
    pEVar33 = (EVP_MD *)0x0;
    goto LAB_00ad90d0;
  }
  iVar12 = 0xe2;
  iVar13 = 0x562;
LAB_00ad8490:
  ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
  pEVar33 = (EVP_MD *)0x0;
  goto LAB_00ad86a0;
LAB_00ad8db4:
  ERR_put_error(0x14,0xa1,0x159,"ssl/statem/statem_srvr.c",0xcdc);
                    /* try { // try from 00ad8dd0 to 00bd8dd7 has its CatchHandler @ 00ad8eec */
  uVar34 = 0x28;
LAB_00ad8cd4:
                    /* catch() { ... } // from try @ 00ad8e78 with catch @ 00ad8cd8 */
  OPENSSL_sk_free(pEVar33);
  pEVar33 = (EVP_MD *)0x0;
LAB_00ad8690:
  ssl3_send_alert(param_1,2,uVar34);
LAB_00ad86a0:
  ossl_statem_set_error(param_1);
  OPENSSL_sk_free(pEVar33);
  return 0;
}

