
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
  
                    /* try { // try from 00ae72ac to 00be7323 has its CatchHandler @ 00ae72ac
                       catch() { ... } // from try @ 00ae72ac with catch @ 00ae72ac
                       catch() { ... } // from try @ 00ae736c with catch @ 00ae72ac */
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
                    /* try { // try from 00ae7324 to 00be736b has its CatchHandler @ 00ae7410 */
          iVar13 = 0x3b7;
        }
        else {
          cVar3 = pcVar28[1];
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
              goto LAB_00ae739c;
            }
            iVar12 = 0xfc;
            iVar13 = 0x3c3;
                    /* catch() { ... } // from try @ 00ae7528 with catch @ 00ae75a0 */
          }
        }
        goto LAB_00ae7344;
      }
    }
    iVar12 = 0x44;
    iVar13 = 0x3b1;
    goto LAB_00ae7344;
  }
  uVar23 = param_2[1] - 2;
  if ((ulong)param_2[1] < 2) {
                    /* try { // try from 00ae736c to 00be747f has its CatchHandler @ 00ae72ac */
    iVar12 = 0xa0;
    iVar13 = 0x3cd;
LAB_00ae7538:
    ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
    pEVar33 = (EVP_MD *)0x0;
LAB_00ae7540:
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
LAB_00ae739c:
    if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
      iVar13 = ssl_choose_server_version(param_1);
      if (iVar13 == 0) {
        uVar23 = param_2[1];
        goto LAB_00ae7430;
      }
LAB_00ae73f8:
                    /* catch() { ... } // from try @ 00ae7324 with catch @ 00ae7410 */
      ERR_put_error(0x14,0x17d,iVar13,"ssl/statem/statem_srvr.c",0x3e0);
      if ((param_1->generate_session_id != (GEN_SESSION_CB)0x0) ||
         (*(long *)&param_1->verify_mode != 0)) {
        pEVar33 = (EVP_MD *)0x0;
        uVar34 = 0x46;
        goto LAB_00ae7544;
      }
LAB_00ae7820:
      pEVar33 = (EVP_MD *)0x0;
      uVar34 = 0x46;
      param_1->version = *(int *)((long)&param_1->tlsext_ocsp_ids + 4);
      goto LAB_00ae7544;
    }
    if (param_1->method->version != 0x1ffff) {
      uVar2 = 0xff00;
      if (uVar14 != 0x100) {
        uVar2 = uVar14;
      }
      uVar14 = 0xff00;
      if (param_1->version != 0x100) {
        uVar14 = param_1->version;
      }
      if ((int)uVar14 < (int)uVar2) {
        iVar13 = 0x18c;
        goto LAB_00ae73f8;
      }
    }
LAB_00ae7430:
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
              goto LAB_00ae7538;
            }
            if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
              uVar30 = 0;
              a = (byte *)0x0;
joined_r0x00ae7734:
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
                      goto LAB_00ae7794;
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
                  goto joined_r0x00ae7734;
                }
              }
              iVar12 = 0x9f;
              iVar13 = 0x431;
            }
            goto LAB_00ae7538;
          }
        }
      }
                    /* try { // try from 00ae7528 to 00be7533 has its CatchHandler @ 00ae75a0 */
      iVar12 = 0x9f;
                    /* try { // try from 00ae7534 to 00be75d7 has its CatchHandler @ 00ae7480 */
      iVar13 = 0x424;
      goto LAB_00ae7538;
    }
    if (uVar23 < 2) {
LAB_00ae7474:
                    /* try { // try from 00ae7480 to 00be7527 has its CatchHandler @ 00ae7480
                       catch() { ... } // from try @ 00ae7480 with catch @ 00ae7480
                       catch() { ... } // from try @ 00ae7534 with catch @ 00ae7480 */
      iVar12 = 0xd5;
      iVar13 = 0x3fa;
      goto LAB_00ae7538;
    }
    puVar32 = (undefined1 *)*param_2;
    uVar4 = *puVar32;
    uVar5 = puVar32[1];
    *param_2 = (long)(puVar32 + 2);
    param_2[1] = uVar23 - 2;
    if (uVar23 - 2 < 2) goto LAB_00ae7474;
    uVar6 = puVar32[2];
    uVar7 = puVar32[3];
    *param_2 = (long)(puVar32 + 4);
    param_2[1] = uVar23 - 4;
    if (uVar23 - 4 < 2) goto LAB_00ae7474;
    uVar30 = (ulong)(uint)CONCAT11(uVar6,uVar7);
    uVar10 = puVar32[4];
    uVar11 = puVar32[5];
    puVar32 = puVar32 + 6;
    uVar23 = uVar23 - 6;
    *param_2 = (long)puVar32;
    param_2[1] = uVar23;
    if (0x20 < CONCAT11(uVar6,uVar7)) {
      iVar12 = 0x9f;
      iVar13 = 0x401;
      goto LAB_00ae7538;
    }
    uVar35 = (ulong)CONCAT11(uVar4,uVar5);
    uVar27 = uVar23 - uVar35;
    if (uVar23 < uVar35) {
LAB_00ae7654:
      iVar12 = 0xd5;
      iVar13 = 0x40b;
      goto LAB_00ae7538;
    }
    puVar1 = puVar32 + uVar35;
    uVar23 = uVar27 - uVar30;
    *param_2 = (long)puVar1;
    param_2[1] = uVar27;
    if (uVar27 < uVar30) goto LAB_00ae7654;
    uVar14 = (uint)CONCAT11(uVar10,uVar11);
    uVar27 = (ulong)uVar14;
    __src = puVar1 + uVar30;
    *param_2 = (long)__src;
    param_2[1] = uVar23;
    local_70 = puVar1;
    uStack_68 = uVar30;
    if (uVar23 < uVar27) goto LAB_00ae7654;
    *param_2 = (long)(__src + uVar27);
    param_2[1] = uVar23 - uVar27;
    if (uVar23 - uVar27 != 0) goto LAB_00ae7654;
    lVar22 = *(long *)&param_1->read_ahead;
    *(undefined8 *)(lVar22 + 0xb8) = 0;
    *(undefined8 *)(lVar22 + 0xb0) = 0;
    *(undefined8 *)(lVar22 + 200) = 0;
    *(undefined8 *)(lVar22 + 0xc0) = 0;
    if (0x1f < uVar14) {
      uVar14 = 0x20;
    }
    memcpy((void *)((*(long *)&param_1->read_ahead - (ulong)uVar14) + 0xd0),__src,(ulong)uVar14);
    uVar30 = 0;
    a = (byte *)0x0;
    local_88[1] = 0;
    local_88[2] = 0;
    pbVar37 = &DAT_013d3324;
    uVar23 = 1;
LAB_00ae7794:
    if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0) {
      uVar14 = SSL_get_options(param_1);
      if ((uVar14 >> 0xd & 1) != 0) {
        pcVar25 = *(code **)(param_1->mode + 200);
        if (pcVar25 == (code *)0x0) {
                    /* try { // try from 00ae7a54 to 00be7a5f has its CatchHandler @ 00ae7acc */
          if ((uVar30 == *(uint *)(param_1->msg_callback + 0x100)) &&
             (iVar13 = CRYPTO_memcmp(a,param_1->msg_callback,uVar30), iVar13 == 0))
          goto LAB_00ae77d4;
                    /* try { // try from 00ae7a60 to 00be7b03 has its CatchHandler @ 00ae79ac */
          iVar12 = 0x134;
          iVar13 = 0x459;
        }
        else {
          iVar13 = (*pcVar25)(param_1,a,uVar30);
          if (iVar13 != 0) {
LAB_00ae77d4:
            *(undefined4 *)(param_1->msg_callback + 0x104) = 1;
            goto LAB_00ae77e0;
          }
          iVar12 = 0x134;
          iVar13 = 0x452;
        }
LAB_00ae7a94:
        ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
        pEVar33 = (EVP_MD *)0x0;
        uVar34 = 0x28;
        goto LAB_00ae7544;
      }
LAB_00ae77e0:
                    /* try { // try from 00ae77ec to 00be786b has its CatchHandler @ 00ae77ec
                       catch() { ... } // from try @ 00ae77ec with catch @ 00ae77ec
                       catch() { ... } // from try @ 00ae78d4 with catch @ 00ae77ec */
      if ((param_1->method->version == 0x1ffff) &&
         (iVar13 = ssl_choose_server_version(param_1), iVar13 != 0)) {
        ERR_put_error(0x14,0x17d,iVar13,"ssl/statem/statem_srvr.c",0x461);
        goto LAB_00ae7820;
      }
    }
    *(undefined4 *)&param_1->param = 0;
    if ((iVar12 == 0) &&
       ((param_1->new_session == 0 || (((ulong)param_1->tlsext_debug_arg & 0x1000000000000) == 0))))
    {
      iVar13 = ssl_get_prev_session(param_1,local_88 + 1,&local_70);
      if (iVar13 != -1) {
                    /* try { // try from 00ae78d4 to 00be79ab has its CatchHandler @ 00ae77ec */
        if ((iVar13 != 1) || (param_1->version != *(int *)&param_1->ctx->method)) goto LAB_00ae783c;
        *(undefined4 *)&param_1->param = 1;
        goto LAB_00ae784c;
      }
LAB_00ae78ec:
      pEVar33 = (EVP_MD *)0x0;
      goto LAB_00ae7554;
    }
LAB_00ae783c:
    iVar13 = ssl_get_new_session(param_1,1);
    if (iVar13 == 0) goto LAB_00ae78ec;
LAB_00ae784c:
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
                    /* try { // try from 00ae786c to 00be78d3 has its CatchHandler @ 00ae7958 */
      if (uVar35 != uVar30 * uVar27) {
        ERR_put_error(0x14,0xa1,0x97,"ssl/statem/statem_srvr.c",0xcb6);
        uVar34 = 0x32;
        pEVar33 = (EVP_MD *)0x0;
        goto LAB_00ae7544;
      }
      pEVar33 = (EVP_MD *)OPENSSL_sk_new_null();
      if (pEVar33 == (EVP_MD *)0x0) {
        ERR_put_error(0x14,0xa1,0x41,"ssl/statem/statem_srvr.c",0xcbe);
        uVar34 = 0x50;
        pEVar33 = (EVP_MD *)0x0;
        goto LAB_00ae7544;
      }
      lVar36 = *(long *)&param_1->read_ahead;
      CRYPTO_free(*(void **)(lVar36 + 0x290));
      *(undefined8 *)(lVar36 + 0x298) = 0;
                    /* catch() { ... } // from try @ 00ae786c with catch @ 00ae7958 */
      *(undefined8 *)(lVar36 + 0x290) = 0;
      lVar22 = CRYPTO_memdup(puVar32,uVar35,"ssl/statem/../packet_locl.h",0x181);
      *(long *)(lVar36 + 0x290) = lVar22;
      if (lVar22 == 0) goto LAB_00ae7b84;
      *(ulong *)(lVar36 + 0x298) = uVar35;
      if (uVar35 < uVar27) {
LAB_00ae7b68:
                    /* try { // try from 00ae7b68 to 00be7b8f has its CatchHandler @ 00ae7bf4 */
        iVar12 = 0x44;
        iVar13 = 0xd01;
        goto LAB_00ae7b80;
      }
      uVar30 = (ulong)(uVar14 - 1);
      if (iVar12 == 0) {
        do {
          memcpy(local_88,puVar32,uVar27);
          cVar3 = *(char *)((long)local_88 + (ulong)(uVar14 - 2));
          if (cVar3 == 'V') {
            if (*(char *)((long)local_88 + uVar30) != '\0') goto LAB_00ae7b20;
            iVar12 = ssl_check_version_downgrade(param_1);
            if (iVar12 == 0) goto LAB_00ae7c8c;
          }
          else if ((cVar3 == '\0') && (*(char *)((long)local_88 + uVar30) == -1)) {
                    /* try { // try from 00ae7b04 to 00be7b67 has its CatchHandler @ 00ae7b04
                       catch() { ... } // from try @ 00ae7b04 with catch @ 00ae7b04
                       catch() { ... } // from try @ 00ae7b90 with catch @ 00ae7b04 */
            if (param_1[1].init_off != 0) goto LAB_00ae7c68;
            *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3c4) = 1;
          }
          else {
LAB_00ae7b20:
            lVar22 = ssl_get_cipher_by_char(param_1,local_88);
            if ((lVar22 != 0) && (iVar12 = OPENSSL_sk_push(pEVar33,lVar22), iVar12 == 0))
            goto LAB_00ae7c10;
          }
          uVar35 = uVar35 - uVar27;
          puVar32 = puVar32 + uVar27;
        } while (uVar27 <= uVar35);
      }
      else {
        do {
          memcpy(local_88,puVar32,uVar27);
                    /* try { // try from 00ae79ac to 00be7a53 has its CatchHandler @ 00ae79ac
                       catch() { ... } // from try @ 00ae79ac with catch @ 00ae79ac
                       catch() { ... } // from try @ 00ae7a60 with catch @ 00ae79ac */
          if ((char)local_88[0] == '\0') {
            cVar3 = *(char *)((long)local_88 + (ulong)(uVar14 - 2));
            if (cVar3 == 'V') {
              if (*(char *)((long)local_88 + uVar30) != '\0') goto LAB_00ae79f4;
              iVar12 = ssl_check_version_downgrade(param_1);
              if (iVar12 == 0) goto LAB_00ae7c8c;
            }
            else if ((cVar3 == '\0') && (*(char *)((long)local_88 + uVar30) == -1)) {
              if (param_1[1].init_off != 0) goto LAB_00ae7c68;
              *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3c4) = 1;
            }
            else {
LAB_00ae79f4:
              lVar22 = ssl_get_cipher_by_char(param_1,(ulong)local_88 | 1);
              if ((lVar22 != 0) && (iVar12 = OPENSSL_sk_push(pEVar33,lVar22), iVar12 == 0))
              goto LAB_00ae7c10;
            }
          }
          uVar35 = uVar35 - uVar27;
          puVar32 = puVar32 + uVar27;
        } while (uVar27 <= uVar35);
      }
      if (uVar35 != 0) goto LAB_00ae7b68;
      if (*(int *)&param_1->param != 0) {
        iVar12 = *(int *)(*(long *)&(param_1->ctx->ex_data).dummy + 0x10);
        iVar13 = OPENSSL_sk_num(pEVar33);
        if (0 < iVar13) {
          iVar13 = 0;
          do {
            lVar22 = OPENSSL_sk_value(pEVar33,iVar13);
            if (*(int *)(lVar22 + 0x10) == iVar12) goto LAB_00ae7c2c;
            iVar13 = iVar13 + 1;
            iVar15 = OPENSSL_sk_num(pEVar33);
          } while (iVar13 < iVar15);
        }
                    /* catch() { ... } // from try @ 00ae7b68 with catch @ 00ae7bf4 */
        iVar12 = 0xd7;
        iVar13 = 0x4b6;
        goto LAB_00ae7c04;
      }
LAB_00ae7c2c:
      uVar14 = (uint)uVar23;
      if (uVar14 != 0) {
        lVar22 = 0;
        do {
          if (pbVar37[lVar22] == 0) {
            if ((0x2ff < param_1->version) &&
               (iVar12 = ssl_parse_clienthello_tlsext(param_1,local_88 + 1), iVar12 == 0)) {
              ERR_put_error(0x14,0x17d,0xe3,"ssl/statem/statem_srvr.c",0x4cb);
                    /* try { // try from 00ae7ec4 to 00be7f1b has its CatchHandler @ 00ae7ec4
                       catch() { ... } // from try @ 00ae7ec4 with catch @ 00ae7ec4
                       catch() { ... } // from try @ 00ae7fe0 with catch @ 00ae7ec4 */
              goto LAB_00ae7554;
            }
            iVar12 = ssl_fill_hello_random(param_1,1,*(long *)&param_1->read_ahead + 0x90,0x20);
            if (iVar12 < 1) {
              uVar34 = 0x50;
              goto LAB_00ae7544;
            }
            if (((*(int *)&param_1->param == 0) && (0x300 < param_1->version)) &&
               (pBVar26 = param_1[1].rbio, pBVar26 != (BIO *)0x0)) {
              local_88[0] = 0;
              pSVar20 = param_1->ctx;
              puVar21 = (undefined4 *)((long)&pSVar20->method + 4);
              *puVar21 = 0x30;
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
                  if (local_88[0] == 0) {
                    /* catch() { ... } // from try @ 00ae7fd8 with catch @ 00ae8024 */
                    iVar12 = 0xc1;
                    iVar13 = 0x4f5;
                    goto LAB_00ae7a94;
                  }
                  pSVar20 = param_1->ctx;
                }
                *(long *)&(pSVar20->ex_data).dummy = local_88[0];
                OPENSSL_sk_free(param_1->cert);
                pcVar17 = (cert_st *)OPENSSL_sk_dup(param_1->ctx->md5);
                uVar34._0_4_ = param_1->sid_ctx_length;
                uVar34._4_1_ = param_1->sid_ctx[0];
                uVar34._5_1_ = param_1->sid_ctx[1];
                uVar34._6_1_ = param_1->sid_ctx[2];
                uVar34._7_1_ = param_1->sid_ctx[3];
                param_1->cert = pcVar17;
                OPENSSL_sk_free(uVar34);
                uVar34 = OPENSSL_sk_dup(param_1->ctx->md5);
                pEVar33 = (EVP_MD *)0x0;
                param_1->sid_ctx_length = (int)uVar34;
                param_1->sid_ctx[0] = (char)((ulong)uVar34 >> 0x20);
                param_1->sid_ctx[1] = (char)((ulong)uVar34 >> 0x28);
                param_1->sid_ctx[2] = (char)((ulong)uVar34 >> 0x30);
                param_1->sid_ctx[3] = (char)((ulong)uVar34 >> 0x38);
              }
            }
            *(undefined8 *)(*(long *)&param_1->read_ahead + 0x280) = 0;
            uVar2 = *(uint *)&(param_1->ctx->ex_data).sk;
            if (uVar2 != 0) {
              iVar12 = ssl_allow_compression(param_1);
              if (iVar12 == 0) {
                iVar12 = 0x154;
                iVar13 = 0x510;
                goto LAB_00ae7fec;
              }
              iVar12 = OPENSSL_sk_num(*(undefined8 *)(param_1->mode + 0xf0));
              if (0 < iVar12) {
                iVar12 = 0;
                goto LAB_00ae7de8;
              }
              puVar18 = (uint *)0x0;
              goto LAB_00ae7ef4;
            }
            if (*(int *)&param_1->param != 0) goto LAB_00ae7f84;
            iVar12 = ssl_allow_compression(param_1);
            if ((iVar12 == 0) || (*(long *)(param_1->mode + 0xf0) == 0)) {
              puVar18 = (uint *)0x0;
              iVar12 = *(int *)&param_1->param;
              goto joined_r0x00ae7f5c;
            }
            iVar12 = OPENSSL_sk_num();
            if (iVar12 < 1) {
              puVar18 = (uint *)0x0;
            }
            else {
              iVar13 = 0;
              do {
                puVar18 = (uint *)OPENSSL_sk_value(*(undefined8 *)(param_1->mode + 0xf0),iVar13);
                lVar22 = 0;
                do {
                  if (*puVar18 == (uint)pbVar37[lVar22]) {
                    *(uint **)(*(long *)&param_1->read_ahead + 0x280) = puVar18;
                    /* try { // try from 00ae7f6c to 00be7fd3 has its CatchHandler @ 00ae8050 */
                    if (*(int *)&param_1->param == 0) goto LAB_00ae7f94;
                    goto LAB_00ae7f84;
                  }
                  lVar22 = lVar22 + 1;
                } while ((uint)lVar22 < uVar14);
                iVar13 = iVar13 + 1;
                puVar18 = (uint *)0x0;
              } while (iVar13 < iVar12);
            }
            goto LAB_00ae7f7c;
          }
          lVar22 = lVar22 + 1;
        } while ((uint)lVar22 < uVar14);
      }
      ERR_put_error(0x14,0x17d,0xbb,"ssl/statem/statem_srvr.c",0x4c4);
      goto LAB_00ae7540;
    }
    ERR_put_error(0x14,0xa1,0xb7,"ssl/statem/statem_srvr.c",0xcaf);
    uVar34 = 0x2f;
    pEVar33 = (EVP_MD *)0x0;
  }
  goto LAB_00ae7544;
LAB_00ae7c8c:
  ERR_put_error(0x14,0xa1,0x175,"ssl/statem/statem_srvr.c",0xcee);
  uVar34 = 0x56;
  goto LAB_00ae7b88;
LAB_00ae7c10:
  iVar12 = 0x41;
  iVar13 = 0xcf9;
LAB_00ae7b80:
  ERR_put_error(0x14,0xa1,iVar12,"ssl/statem/statem_srvr.c",iVar13);
LAB_00ae7b84:
  uVar34 = 0x50;
  goto LAB_00ae7b88;
  while( true ) {
    iVar12 = iVar12 + 1;
    iVar13 = OPENSSL_sk_num(*(undefined8 *)(param_1->mode + 0xf0));
    if (iVar13 <= iVar12) break;
LAB_00ae7de8:
    puVar18 = (uint *)OPENSSL_sk_value(*(undefined8 *)(param_1->mode + 0xf0),iVar12);
    if (uVar2 == *puVar18) {
      *(uint **)(*(long *)&param_1->read_ahead + 0x280) = puVar18;
      break;
    }
  }
LAB_00ae7ef4:
  if (*(long *)(*(long *)&param_1->read_ahead + 0x280) == 0) {
    iVar12 = 0x155;
    iVar13 = 0x51d;
LAB_00ae7fec:
    ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
    uVar34 = 0x50;
  }
  else {
    lVar22 = 0;
    do {
      if (uVar2 == pbVar37[lVar22]) goto LAB_00ae7f7c;
      lVar22 = lVar22 + 1;
    } while ((uint)lVar22 < uVar14);
                    /* try { // try from 00ae7f1c to 00be7f1f has its CatchHandler @ 00ae803c */
    iVar12 = 0x156;
    iVar13 = 0x528;
LAB_00ae7c04:
    ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
    uVar34 = 0x2f;
  }
  goto LAB_00ae7544;
LAB_00ae7f7c:
  iVar12 = *(int *)&param_1->param;
joined_r0x00ae7f5c:
  if (iVar12 != 0) {
LAB_00ae7f84:
    OPENSSL_sk_free(pEVar33);
    return 2;
  }
LAB_00ae7f94:
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
                    /* try { // try from 00ae7fd8 to 00be7fdf has its CatchHandler @ 00ae8024 */
                    /* try { // try from 00ae7fe0 to 00be806b has its CatchHandler @ 00ae7ec4 */
    iVar12 = 0x44;
    iVar13 = 0x55d;
    goto LAB_00ae7fec;
  }
  iVar12 = tls1_set_server_sigalgs(param_1);
  if (iVar12 != 0) {
    pEVar33 = (EVP_MD *)0x0;
    goto LAB_00ae7f84;
  }
  iVar12 = 0xe2;
  iVar13 = 0x562;
LAB_00ae7344:
  ERR_put_error(0x14,0x17d,iVar12,"ssl/statem/statem_srvr.c",iVar13);
  pEVar33 = (EVP_MD *)0x0;
  goto LAB_00ae7554;
LAB_00ae7c68:
  ERR_put_error(0x14,0xa1,0x159,"ssl/statem/statem_srvr.c",0xcdc);
  uVar34 = 0x28;
LAB_00ae7b88:
  OPENSSL_sk_free(pEVar33);
                    /* try { // try from 00ae7b90 to 00be7c0f has its CatchHandler @ 00ae7b04 */
  pEVar33 = (EVP_MD *)0x0;
LAB_00ae7544:
  ssl3_send_alert(param_1,2,uVar34);
LAB_00ae7554:
  ossl_statem_set_error(param_1);
  OPENSSL_sk_free(pEVar33);
  return 0;
}

