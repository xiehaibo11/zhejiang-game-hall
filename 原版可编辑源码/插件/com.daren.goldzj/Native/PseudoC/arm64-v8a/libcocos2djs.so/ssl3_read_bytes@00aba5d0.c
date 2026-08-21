
ulong ssl3_read_bytes(SSL *param_1,uint param_2,uint *param_3,void *param_4,ulong param_5,
                     int param_6)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  EVP_CIPHER_CTX **ppEVar4;
  int *piVar5;
  SSL_CTX **ppSVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  SSL *pSVar12;
  int iVar13;
  uint uVar14;
  BIO *b;
  undefined8 uVar15;
  int iVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  EVP_CIPHER_CTX **ppEVar21;
  uint *puVar22;
  uint uVar23;
  SSL_CTX **ppSVar24;
  uint uVar25;
  uint uVar26;
  ulong __n;
  code *local_a0;
  char acStack_70 [16];
  
  lVar19._0_4_ = param_1[1].sid_ctx_length;
  lVar19._4_1_ = param_1[1].sid_ctx[0];
  lVar19._5_1_ = param_1[1].sid_ctx[1];
  lVar19._6_1_ = param_1[1].sid_ctx[2];
  lVar19._7_1_ = param_1[1].sid_ctx[3];
  if ((lVar19 != 0) || (iVar13 = ssl3_setup_read_buffer(param_1), iVar13 != 0)) {
    if (((param_2 < 0x18) && ((1 << (ulong)(param_2 & 0x1f) & 0xc00001U) != 0)) &&
       ((param_2 == 0x17 || (param_6 == 0)))) {
      uVar25 = (uint)param_5;
      if ((param_2 == 0x16) && (iVar13 = *(int *)((long)&param_1[6].enc_read_ctx + 4), iVar13 != 0))
      {
        if ((int)uVar25 < 1) {
          __n = 0;
          pSVar12 = param_1;
LAB_00aba7bc:
          uVar20 = 0;
          do {
            lVar19 = uVar20 - 0x3c;
            uVar1 = uVar20 & 0xffffffff;
            uVar20 = uVar20 + 1;
            param_1[6].sid_ctx[uVar1 - 0x3c] = pSVar12[6].sid_ctx[lVar19];
          } while ((uint)uVar20 < *(uint *)((long)&param_1[6].enc_read_ctx + 4));
        }
        else {
          __n = 0;
          iVar16 = uVar25 + 1;
          do {
            if (iVar13 == 0) goto LAB_00aba7e0;
            iVar16 = iVar16 + -1;
            *(uchar *)((long)param_4 + __n) = param_1[6].sid_ctx[__n - 0x3c];
            __n = __n + 1;
            iVar13 = *(int *)((long)&param_1[6].enc_read_ctx + 4) + -1;
            *(int *)((long)&param_1[6].enc_read_ctx + 4) = iVar13;
          } while (1 < iVar16);
          if (iVar13 != 0) {
            pSVar12 = (SSL *)((long)&param_1->version + __n);
            goto LAB_00aba7bc;
          }
        }
LAB_00aba7e0:
        if (param_3 != (uint *)0x0) {
          *param_3 = 0x16;
        }
        goto LAB_00aba668;
      }
      iVar13 = ossl_statem_get_in_handshake(param_1);
      if ((iVar13 != 0) || (iVar13 = SSL_in_init(param_1), iVar13 == 0)) {
LAB_00aba6fc:
        puVar3 = (uint *)((long)&param_1[6].enc_read_ctx + 4);
        ppEVar4 = &param_1[6].enc_read_ctx;
        local_a0 = (code *)0x0;
        piVar5 = &param_1[6].mac_flags;
LAB_00abacec:
        uVar14 = *(uint *)&param_1[1].cert;
        param_1->rwstate = 1;
        if (uVar14 != 0) goto LAB_00abad08;
        do {
          uVar20 = ssl3_get_record(param_1);
          __n = uVar20 & 0xffffffff;
          if ((int)uVar20 < 1) goto LAB_00aba668;
          uVar14 = *(uint *)&param_1[1].cert;
          if (uVar14 == 0) {
            iVar13 = 0x426;
            goto LAB_00abaec0;
          }
LAB_00abad08:
          uVar26 = 0;
          lVar19 = 0x808;
          do {
            if (*(int *)((long)&param_1->version + lVar19) == 0) break;
            uVar26 = uVar26 + 1;
                    /* catch() { ... } // from try @ 00abadac with catch @ 00abad1c
                       catch() { ... } // from try @ 00abae7c with catch @ 00abad1c */
            lVar19 = lVar19 + 0x48;
          } while (uVar26 < uVar14);
          if (uVar26 != uVar14) goto code_r0x00abad54;
          *(undefined4 *)&param_1[1].cert = 0;
        } while( true );
      }
      uVar14 = (*param_1->handshake_func)(param_1);
      __n = (ulong)uVar14;
      if ((int)uVar14 < 0) goto LAB_00aba668;
      if (uVar14 != 0) goto LAB_00aba6fc;
      iVar13 = 0xe5;
      iVar16 = 0x40b;
    }
    else {
      iVar13 = 0x44;
      iVar16 = 0x3e4;
    }
LAB_00aba660:
    ERR_put_error(0x14,0x94,iVar13,"ssl/record/rec_layer_s3.c",iVar16);
  }
LAB_00aba664:
  __n = 0xffffffff;
LAB_00aba668:
  return __n & 0xffffffff;
code_r0x00abad54:
  uVar20 = (ulong)uVar26;
  if ((*(int *)((long)&param_1[2].initial_ctx + (ulong)uVar26 * 0x48 + 4) != 0x15) &&
     (*(int *)(&param_1[2].next_proto_negotiated + uVar20 * 9) != 0)) {
    *(undefined4 *)((long)&param_1[6].cert + 4) = 0;
  }
                    /* try { // try from 00abad80 to 00bbadab has its CatchHandler @ 00abae84 */
  puVar2 = (uint *)((long)&param_1[2].initial_ctx + (ulong)uVar26 * 0x48 + 4);
  if ((*(int *)(*(long *)&param_1->read_ahead + 0xe8) == 0) || (*puVar2 == 0x16)) {
    if (((byte)param_1->shutdown >> 1 & 1) != 0) {
      *(undefined4 *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = 0;
      param_1->rwstate = 1;
      __n = 0;
      goto LAB_00aba668;
    }
    uVar23 = *puVar2;
    ppSVar24 = &param_1[2].initial_ctx + (ulong)uVar26 * 9;
                    /* try { // try from 00abadac to 00bbadff has its CatchHandler @ 00abad1c */
    if ((uVar23 == param_2) || (((param_3 != (uint *)0x0 && (param_2 == 0x16)) && (uVar23 == 0x14)))
       ) {
      iVar13 = SSL_in_init(param_1);
      if (((param_2 == 0x17) && (iVar13 != 0)) && (*(long *)(param_1->sid_ctx + 0xc) == 0)) {
        iVar13 = 100;
        iVar16 = 0x461;
                    /* try { // try from 00abaf5c to 00bbafaf has its CatchHandler @ 00abaecc */
      }
      else {
                    /* try { // try from 00abae00 to 00bbae07 has its CatchHandler @ 00abae84 */
        if (((param_2 != 0x16) || (*puVar2 != 0x14)) || (*puVar3 == 0)) {
          if (param_3 != (uint *)0x0) {
            *param_3 = *puVar2;
          }
          __n = param_5 & 0xffffffff;
          if ((int)uVar25 < 1) goto LAB_00aba668;
          if (param_6 == 0) {
            if (param_2 == 0x17) {
              __n = 0;
              do {
                uVar11 = uVar25 - (int)__n;
                uVar23 = *(uint *)(ppSVar24 + 1);
                if (uVar11 <= *(uint *)(ppSVar24 + 1)) {
                  uVar23 = uVar11;
                }
                memcpy(param_4,(void *)((long)&(((stack_st_SRTP_PROTECTION_PROFILE *)ppSVar24[3])->
                                               stack).num + (ulong)*(uint *)(ppSVar24 + 2)),
                       (ulong)uVar23);
                    /* try { // try from 00aba840 to 00bba8db has its CatchHandler @ 00aba840
                       catch() { ... } // from try @ 00aba840 with catch @ 00aba840
                       catch() { ... } // from try @ 00aba8e4 with catch @ 00aba840
                       catch() { ... } // from try @ 00aba948 with catch @ 00aba840 */
                param_4 = (void *)((long)param_4 + (ulong)uVar23);
                iVar13 = *(int *)(ppSVar24 + 1) - uVar23;
                *(int *)(ppSVar24 + 1) = iVar13;
                *(uint *)(ppSVar24 + 2) = *(int *)(ppSVar24 + 2) + uVar23;
                if (iVar13 == 0) {
                  *(undefined4 *)((long)&param_1[1].compress + 4) = 0xf0;
                  *(int *)(ppSVar24 + 2) = 0;
                  *(uint *)(ppSVar24 + 6) = 1;
                }
                uVar23 = uVar23 + (int)__n;
                __n = (ulong)uVar23;
                if (iVar13 == 0) {
                  uVar26 = uVar26 + 1;
                  ppSVar24 = ppSVar24 + 9;
                }
              } while ((uVar23 < uVar25) && (uVar26 < uVar14));
            }
            else {
              uVar23 = *(uint *)(&param_1[2].next_proto_negotiated + uVar20 * 9);
              if (uVar25 <= *(uint *)(&param_1[2].next_proto_negotiated + uVar20 * 9)) {
                uVar23 = uVar25;
              }
              __n = (ulong)uVar23;
              memcpy(param_4,(void *)((long)&((&param_1[2].srtp_profiles)[uVar20 * 9]->stack).num +
                                     (ulong)*(uint *)(&param_1[2].next_proto_negotiated_len +
                                                     uVar20 * 0x48)),__n);
              iVar13 = *(int *)(&param_1[2].next_proto_negotiated_len + uVar20 * 0x48);
              param_4 = (void *)((long)param_4 + __n);
              iVar16 = *(int *)(&param_1[2].next_proto_negotiated + uVar20 * 9) - uVar23;
              *(int *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = iVar16;
              *(uint *)(&param_1[2].next_proto_negotiated_len + uVar20 * 0x48) = iVar13 + uVar23;
                    /* try { // try from 00aba8dc to 00bba8e3 has its CatchHandler @ 00aba948 */
              if (iVar16 == 0) {
                    /* try { // try from 00aba8e4 to 00bba943 has its CatchHandler @ 00aba840 */
                *(undefined4 *)((long)&param_1[1].compress + 4) = 0xf0;
                *(undefined4 *)(&param_1[2].next_proto_negotiated_len + uVar20 * 0x48) = 0;
                (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
                uVar26 = uVar26 + 1;
              }
            }
          }
          else {
            __n = 0;
            do {
                    /* try { // try from 00abae34 to 00bbae37 has its CatchHandler @ 00abae88 */
              uVar11 = uVar25 - (int)__n;
              uVar23 = *(uint *)(ppSVar24 + 1);
              if (uVar11 <= *(uint *)(ppSVar24 + 1)) {
                uVar23 = uVar11;
              }
              memcpy(param_4,(void *)((long)&(((stack_st_SRTP_PROTECTION_PROFILE *)ppSVar24[3])->
                                             stack).num + (ulong)*(uint *)(ppSVar24 + 2)),
                     (ulong)uVar23);
              uVar11 = *(uint *)(ppSVar24 + 1);
              param_4 = (void *)((long)param_4 + (ulong)uVar23);
              if (uVar11 == 0) {
                *(uint *)(ppSVar24 + 6) = 1;
              }
              uVar11 = (uint)(uVar11 == 0 || uVar23 == uVar11);
                    /* try { // try from 00abae78 to 00bbae7b has its CatchHandler @ 00abae80 */
                    /* try { // try from 00abae7c to 00bbaecb has its CatchHandler @ 00abad1c */
              uVar23 = uVar23 + (int)__n;
              __n = (ulong)uVar23;
                    /* catch() { ... } // from try @ 00abae78 with catch @ 00abae80 */
              ppSVar6 = ppSVar24 + 9;
                    /* catch() { ... } // from try @ 00abad80 with catch @ 00abae84
                       catch() { ... } // from try @ 00abae00 with catch @ 00abae84 */
              if (uVar11 == 0) {
                ppSVar6 = ppSVar24;
              }
                    /* catch() { ... } // from try @ 00abae34 with catch @ 00abae88 */
              uVar26 = uVar26 + uVar11;
            } while (((uVar23 < uVar25) && (param_2 == 0x17)) &&
                    (ppSVar24 = ppSVar6, uVar26 < uVar14));
          }
          if ((int)__n != 0) goto LAB_00abaefc;
          goto LAB_00abacec;
        }
        iVar13 = 0x85;
        iVar16 = 0x469;
      }
    }
    else {
      if (*(int *)ppSVar24 == 2) {
        iVar13 = 0x4ad;
LAB_00abaec0:
        ERR_put_error(0x14,0x94,0x44,"ssl/record/rec_layer_s3.c",iVar13);
        uVar15 = 0x50;
        goto LAB_00abaec8;
      }
      if (param_1->method->version == 0x10000) {
        if ((uVar23 != 0x15) || (param_1->server != 0)) {
          param_1->version = *(int *)ppSVar24;
          iVar13 = 0xf4;
                    /* try { // try from 00abafb0 to 00bbafb7 has its CatchHandler @ 00abb034 */
          iVar16 = 0x4bb;
          goto LAB_00abb1e4;
        }
LAB_00aba950:
        uVar14 = 2;
        ppEVar21 = (EVP_CIPHER_CTX **)piVar5;
        puVar22 = (uint *)&param_1[6].field_0xcc;
LAB_00aba96c:
        uVar23 = *puVar22;
        uVar11 = *(uint *)(&param_1[2].next_proto_negotiated + uVar20 * 9);
        uVar26 = uVar11;
        if (uVar14 - uVar23 <= uVar11) {
          uVar26 = uVar14 - uVar23;
        }
        if (uVar26 != 0) {
          uVar26 = *(uint *)(&param_1[2].next_proto_negotiated_len + uVar20 * 0x48);
          uVar10 = (uVar23 - 1) - uVar14;
          if (uVar10 <= ~uVar11) {
            uVar10 = ~uVar11;
          }
          iVar13 = uVar10 + 1;
          do {
            iVar13 = iVar13 + 1;
            uVar9 = *(undefined1 *)
                     ((long)&((&param_1[2].srtp_profiles)[uVar20 * 9]->stack).num + (ulong)uVar26);
            *puVar22 = uVar23 + 1;
            *(undefined1 *)((long)ppEVar21 + (ulong)uVar23) = uVar9;
            uVar26 = *(int *)(&param_1[2].next_proto_negotiated_len + uVar20 * 0x48) + 1;
            *(uint *)(&param_1[2].next_proto_negotiated_len + uVar20 * 0x48) = uVar26;
            *(int *)(&param_1[2].next_proto_negotiated + uVar20 * 9) =
                 *(int *)(&param_1[2].next_proto_negotiated + uVar20 * 9) + -1;
            uVar23 = *puVar22;
          } while (iVar13 != 0);
        }
        if (uVar23 < uVar14) {
          (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
          goto LAB_00abacec;
        }
      }
      else {
                    /* try { // try from 00aba944 to 00bba947 has its CatchHandler @ 00aba948 */
        if (uVar23 == 0x16) {
          uVar14 = 4;
          ppEVar21 = ppEVar4;
          puVar22 = puVar3;
          goto LAB_00aba96c;
        }
                    /* catch() { ... } // from try @ 00aba8dc with catch @ 00aba948
                       catch() { ... } // from try @ 00aba944 with catch @ 00aba948
                       try { // try from 00aba948 to 00bba95f has its CatchHandler @ 00aba840 */
        if (uVar23 == 0x15) goto LAB_00aba950;
      }
      if (param_1->server == 0) {
        if ((((3 < *puVar3) && (*(char *)ppEVar4 == '\0')) && (param_1->ctx != (SSL_CTX *)0x0)) &&
           (*(long *)&(param_1->ctx->ex_data).dummy != 0)) {
          *puVar3 = 0;
                    /* catch() { ... } // from try @ 00ababf0 with catch @ 00abac24 */
                    /* catch() { ... } // from try @ 00ababac with catch @ 00abac2c */
                    /* catch() { ... } // from try @ 00abab54 with catch @ 00abac34 */
          if (((*(char *)((long)&param_1[6].enc_read_ctx + 1) == '\0') &&
              (*(char *)((long)&param_1[6].enc_read_ctx + 2) == '\0')) &&
             (*(char *)((long)&param_1[6].enc_read_ctx + 3) == '\0')) {
            if (param_1->msg_callback_arg != (code *)0x0) {
                    /* catch() { ... } // from try @ 00abaafc with catch @ 00abac54 */
              (*param_1->msg_callback_arg)
                        (0,param_1->version,0x16,ppEVar4,4,param_1,*(undefined8 *)&param_1->hit);
            }
            iVar13 = SSL_is_init_finished(param_1);
                    /* catch() { ... } // from try @ 00abaadc with catch @ 00abac80
                       catch() { ... } // from try @ 00abab34 with catch @ 00abac80
                       catch() { ... } // from try @ 00abab8c with catch @ 00abac80
                       catch() { ... } // from try @ 00ababe4 with catch @ 00abac80 */
            if (((iVar13 == 0) || ((**(byte **)&param_1->read_ahead & 1) != 0)) ||
               (*(int *)(*(byte **)&param_1->read_ahead + 0xfc) != 0)) goto LAB_00abacec;
            ssl3_renegotiate(param_1);
            iVar13 = ssl3_renegotiate_check(param_1);
            if (iVar13 == 0) goto LAB_00abacec;
            uVar14 = (*param_1->handshake_func)(param_1);
            __n = (ulong)uVar14;
            if ((int)uVar14 < 0) goto LAB_00aba668;
            if (uVar14 == 0) {
              iVar13 = 0xe5;
              iVar16 = 0x509;
              goto LAB_00aba660;
            }
            bVar8 = *(byte *)&param_1->tlsext_hostname;
            goto joined_r0x00abacc8;
          }
          ERR_put_error(0x14,0x94,0x69,"ssl/record/rec_layer_s3.c",0x4f7);
          uVar15 = 0x32;
          goto LAB_00abaec8;
        }
      }
      else {
        iVar13 = SSL_is_init_finished(param_1);
                    /* try { // try from 00abaa60 to 00bbaadb has its CatchHandler @ 00abaa60
                       catch() { ... } // from try @ 00abaa60 with catch @ 00abaa60
                       catch() { ... } // from try @ 00abab08 with catch @ 00abaa60
                       catch() { ... } // from try @ 00abab60 with catch @ 00abaa60
                       catch() { ... } // from try @ 00ababb8 with catch @ 00abaa60
                       catch() { ... } // from try @ 00ababf4 with catch @ 00abaa60 */
        if (((((iVar13 != 0) && (*(int *)(*(long *)&param_1->read_ahead + 0x3c4) == 0)) &&
             (0x300 < param_1->version)) && ((3 < *puVar3 && (*(char *)ppEVar4 == '\x01')))) &&
           ((param_1->ctx != (SSL_CTX *)0x0 &&
            ((*(long *)&(param_1->ctx->ex_data).dummy != 0 &&
             ((*(byte *)(param_1->mode + 0x10a) >> 2 & 1) == 0)))))) {
          *(undefined4 *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = 0;
          (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
          ssl3_send_alert(param_1,1,100);
          goto LAB_00abacec;
        }
      }
      if (*(uint *)&param_1[6].field_0xcc < 2) {
        if ((param_1->shutdown & 1) != 0) {
          param_1->rwstate = 1;
          *(undefined4 *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = 0;
          (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
          __n = 0;
          goto LAB_00aba668;
        }
        uVar14 = *puVar2;
        if (uVar14 == 0x14) {
          iVar13 = 0x85;
          iVar16 = 0x58c;
        }
        else {
                    /* try { // try from 00abab8c to 00bbab93 has its CatchHandler @ 00abac80 */
          if (3 < *puVar3) {
            iVar13 = ossl_statem_get_in_handshake(param_1);
            if (iVar13 == 0) {
              iVar13 = SSL_is_init_finished(param_1);
                    /* try { // try from 00ababac to 00bbabb7 has its CatchHandler @ 00abac2c */
                    /* try { // try from 00ababb8 to 00bbabe3 has its CatchHandler @ 00abaa60 */
              if ((iVar13 != 0) && ((**(byte **)&param_1->read_ahead & 1) == 0)) {
                ossl_statem_set_in_init(param_1,1);
                param_1[1].init_off = 1;
                param_1->new_session = 1;
              }
              uVar14 = (*param_1->handshake_func)(param_1);
                    /* try { // try from 00ababe4 to 00bbabeb has its CatchHandler @ 00abac80 */
              __n = (ulong)uVar14;
              if ((int)uVar14 < 0) goto LAB_00aba668;
              if (uVar14 == 0) {
                iVar13 = 0xe5;
                iVar16 = 0x59f;
                    /* try { // try from 00abb0e0 to 00bbb10b has its CatchHandler @ 00abb1e4 */
                goto LAB_00aba660;
              }
                    /* try { // try from 00ababf0 to 00bbabf3 has its CatchHandler @ 00abac24 */
              bVar8 = *(byte *)&param_1->tlsext_hostname;
                    /* try { // try from 00ababf4 to 00bbad1b has its CatchHandler @ 00abaa60 */
joined_r0x00abacc8:
              if (((bVar8 >> 2 & 1) == 0) && (*(int *)(param_1[1].sid_ctx + 0x18) == 0)) {
                    /* try { // try from 00abb160 to 00bbb167 has its CatchHandler @ 00abb1e4 */
                param_1->rwstate = 3;
                b = SSL_get_rbio(param_1);
                BIO_clear_flags(b,0xf);
                BIO_set_flags(b,9);
                goto LAB_00aba664;
              }
              goto LAB_00abacec;
            }
            uVar14 = *puVar2;
          }
          if (uVar14 - 0x14 < 3) {
            iVar13 = 0x44;
            iVar16 = 0x5cc;
          }
          else if (uVar14 == 0x17) {
            iVar13 = ossl_statem_app_data_allowed(param_1);
            if (iVar13 != 0) {
              *(undefined4 *)(*(long *)&param_1->read_ahead + 0x108) = 2;
              goto LAB_00aba664;
            }
                    /* try { // try from 00abb1d8 to 00bbb1db has its CatchHandler @ 00abb1e0 */
                    /* try { // try from 00abb1dc to 00bbb22b has its CatchHandler @ 00abb07c */
            iVar13 = 0xf5;
                    /* catch() { ... } // from try @ 00abb1d8 with catch @ 00abb1e0 */
            iVar16 = 0x5db;
          }
          else {
                    /* try { // try from 00abb194 to 00bbb197 has its CatchHandler @ 00abb1e8 */
            iVar13 = 0xf5;
            iVar16 = 0x5c1;
          }
        }
      }
      else {
        cVar7 = (char)*piVar5;
        pcVar17 = param_1->msg_callback_arg;
        bVar8 = *(byte *)((long)&param_1[6].mac_flags + 1);
        *(undefined4 *)&param_1[6].field_0xcc = 0;
        if (pcVar17 != (code *)0x0) {
                    /* try { // try from 00abaadc to 00bbaae3 has its CatchHandler @ 00abac80 */
          (*pcVar17)(0,param_1->version,0x15,piVar5,2,param_1,*(undefined8 *)&param_1->hit);
        }
        pcVar17 = *(code **)&(param_1->ex_data).dummy;
        uVar14 = (uint)bVar8;
        if (pcVar17 == (code *)0x0) {
                    /* try { // try from 00abaafc to 00bbab07 has its CatchHandler @ 00abac54 */
          pcVar18 = *(code **)(param_1->mode + 0xf8);
                    /* try { // try from 00abab08 to 00bbab33 has its CatchHandler @ 00abaa60 */
          pcVar17 = local_a0;
          if (pcVar18 != (code *)0x0) {
            pcVar17 = pcVar18;
          }
          if (pcVar17 != (code *)0x0) goto LAB_00abab14;
          local_a0 = (code *)0x0;
        }
        else {
LAB_00abab14:
          (*pcVar17)(param_1,0x4004,CONCAT11(cVar7,bVar8));
          local_a0 = pcVar17;
        }
        if (cVar7 != '\x01') {
          if (cVar7 == '\x02') {
                    /* try { // try from 00abafe4 to 00bbafe7 has its CatchHandler @ 00abb038 */
            param_1->rwstate = 1;
            *(uint *)(*(long *)&param_1->read_ahead + 0xf0) = uVar14;
            ERR_put_error(0x14,0x94,uVar14 + 1000,"ssl/record/rec_layer_s3.c",0x572);
            BIO_snprintf(acStack_70,0x10,"%d",(ulong)bVar8);
                    /* try { // try from 00abb028 to 00bbb02b has its CatchHandler @ 00abb030 */
                    /* try { // try from 00abb02c to 00bbb07b has its CatchHandler @ 00abaecc */
                    /* catch() { ... } // from try @ 00abb028 with catch @ 00abb030 */
                    /* catch() { ... } // from try @ 00abaf30 with catch @ 00abb034
                       catch() { ... } // from try @ 00abafb0 with catch @ 00abb034 */
            ERR_add_error_data(2,"SSL alert number ",acStack_70);
                    /* catch() { ... } // from try @ 00abafe4 with catch @ 00abb038 */
            param_1->shutdown = param_1->shutdown | 2;
            (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
            SSL_CTX_remove_session((SSL_CTX *)param_1[1].bbio,(SSL_SESSION *)param_1->ctx);
            __n = 0;
            goto LAB_00aba668;
          }
                    /* try { // try from 00abb10c to 00bbb15f has its CatchHandler @ 00abb07c */
          ERR_put_error(0x14,0x94,0xf6,"ssl/record/rec_layer_s3.c",0x57b);
          uVar15 = 0x2f;
          goto LAB_00abaec8;
        }
                    /* try { // try from 00abab34 to 00bbab3b has its CatchHandler @ 00abac80 */
        *(uint *)(*(long *)&param_1->read_ahead + 0xec) = uVar14;
        (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
        iVar13 = *(int *)((long)&param_1[6].cert + 4) + 1;
                    /* try { // try from 00abab54 to 00bbab5f has its CatchHandler @ 00abac34 */
        *(int *)((long)&param_1[6].cert + 4) = iVar13;
        if (iVar13 != 5) {
                    /* try { // try from 00abab60 to 00bbab8b has its CatchHandler @ 00abaa60 */
          if (uVar14 != 100) {
            if (uVar14 == 0) {
              param_1->shutdown = param_1->shutdown | 2;
              __n = (ulong)bVar8;
              goto LAB_00aba668;
            }
            goto LAB_00abacec;
          }
          ERR_put_error(0x14,0x94,0x153,"ssl/record/rec_layer_s3.c",0x566);
          uVar15 = 0x28;
          goto LAB_00abaec8;
        }
        iVar13 = 0x199;
        iVar16 = 0x554;
                    /* catch() { ... } // from try @ 00abb10c with catch @ 00abb07c
                       catch() { ... } // from try @ 00abb1dc with catch @ 00abb07c */
      }
    }
  }
  else {
                    /* try { // try from 00abaf30 to 00bbaf5b has its CatchHandler @ 00abb034 */
    iVar13 = 0x91;
    iVar16 = 0x444;
  }
LAB_00abb1e4:
                    /* catch() { ... } // from try @ 00abb0e0 with catch @ 00abb1e4
                       catch() { ... } // from try @ 00abb160 with catch @ 00abb1e4 */
  ERR_put_error(0x14,0x94,iVar13,"ssl/record/rec_layer_s3.c",iVar16);
                    /* catch() { ... } // from try @ 00abb194 with catch @ 00abb1e8 */
  uVar15 = 10;
LAB_00abaec8:
                    /* catch() { ... } // from try @ 00abaf5c with catch @ 00abaecc
                       catch() { ... } // from try @ 00abb02c with catch @ 00abaecc */
  ssl3_send_alert(param_1,2,uVar15);
  goto LAB_00aba664;
LAB_00abaefc:
  if (((uVar26 == uVar14) && (param_6 == 0)) &&
     (((*(byte *)&param_1->tlsext_hostname >> 4 & 1) != 0 &&
      (*(int *)(param_1[1].sid_ctx + 0x18) == 0)))) {
    ssl3_release_read_buffer(param_1);
  }
  goto LAB_00aba668;
}

