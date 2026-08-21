
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
LAB_00ac9f90:
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
            if (iVar13 == 0) goto LAB_00ac9fb4;
            iVar16 = iVar16 + -1;
            *(uchar *)((long)param_4 + __n) = param_1[6].sid_ctx[__n - 0x3c];
            __n = __n + 1;
            iVar13 = *(int *)((long)&param_1[6].enc_read_ctx + 4) + -1;
            *(int *)((long)&param_1[6].enc_read_ctx + 4) = iVar13;
          } while (1 < iVar16);
          if (iVar13 != 0) {
            pSVar12 = (SSL *)((long)&param_1->version + __n);
            goto LAB_00ac9f90;
          }
        }
LAB_00ac9fb4:
        if (param_3 != (uint *)0x0) {
          *param_3 = 0x16;
        }
        goto LAB_00ac9e3c;
      }
      iVar13 = ossl_statem_get_in_handshake(param_1);
      if ((iVar13 != 0) || (iVar13 = SSL_in_init(param_1), iVar13 == 0)) {
LAB_00ac9ed0:
        puVar3 = (uint *)((long)&param_1[6].enc_read_ctx + 4);
        ppEVar4 = &param_1[6].enc_read_ctx;
        local_a0 = (code *)0x0;
        piVar5 = &param_1[6].mac_flags;
LAB_00aca4c0:
        uVar14 = *(uint *)&param_1[1].cert;
        param_1->rwstate = 1;
        if (uVar14 != 0) goto LAB_00aca4dc;
        do {
          uVar20 = ssl3_get_record(param_1);
          __n = uVar20 & 0xffffffff;
          if ((int)uVar20 < 1) goto LAB_00ac9e3c;
          uVar14 = *(uint *)&param_1[1].cert;
          if (uVar14 == 0) {
                    /* try { // try from 00aca684 to 00bca71f has its CatchHandler @ 00aca48c */
            iVar13 = 0x426;
            goto LAB_00aca694;
          }
LAB_00aca4dc:
          uVar26 = 0;
          lVar19 = 0x808;
          do {
            if (*(int *)((long)&param_1->version + lVar19) == 0) break;
            uVar26 = uVar26 + 1;
            lVar19 = lVar19 + 0x48;
          } while (uVar26 < uVar14);
          if (uVar26 != uVar14) goto code_r0x00aca528;
          *(undefined4 *)&param_1[1].cert = 0;
        } while( true );
      }
      uVar14 = (*param_1->handshake_func)(param_1);
      __n = (ulong)uVar14;
      if ((int)uVar14 < 0) goto LAB_00ac9e3c;
      if (uVar14 != 0) goto LAB_00ac9ed0;
      iVar13 = 0xe5;
      iVar16 = 0x40b;
    }
    else {
      iVar13 = 0x44;
      iVar16 = 0x3e4;
    }
LAB_00ac9e34:
    ERR_put_error(0x14,0x94,iVar13,"ssl/record/rec_layer_s3.c",iVar16);
  }
LAB_00ac9e38:
  __n = 0xffffffff;
LAB_00ac9e3c:
  return __n & 0xffffffff;
code_r0x00aca528:
  uVar20 = (ulong)uVar26;
  if ((*(int *)((long)&param_1[2].initial_ctx + (ulong)uVar26 * 0x48 + 4) != 0x15) &&
     (*(int *)(&param_1[2].next_proto_negotiated + uVar20 * 9) != 0)) {
    *(undefined4 *)((long)&param_1[6].cert + 4) = 0;
  }
  puVar2 = (uint *)((long)&param_1[2].initial_ctx + (ulong)uVar26 * 0x48 + 4);
  if ((*(int *)(*(long *)&param_1->read_ahead + 0xe8) == 0) || (*puVar2 == 0x16)) {
    if (((byte)param_1->shutdown >> 1 & 1) != 0) {
      *(undefined4 *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = 0;
      param_1->rwstate = 1;
      __n = 0;
      goto LAB_00ac9e3c;
    }
    uVar23 = *puVar2;
    ppSVar24 = &param_1[2].initial_ctx + (ulong)uVar26 * 9;
    if ((uVar23 == param_2) || (((param_3 != (uint *)0x0 && (param_2 == 0x16)) && (uVar23 == 0x14)))
       ) {
      iVar13 = SSL_in_init(param_1);
      if (((param_2 == 0x17) && (iVar13 != 0)) && (*(long *)(param_1->sid_ctx + 0xc) == 0)) {
        iVar13 = 100;
        iVar16 = 0x461;
      }
      else {
        if (((param_2 != 0x16) || (*puVar2 != 0x14)) || (*puVar3 == 0)) {
          if (param_3 != (uint *)0x0) {
            *param_3 = *puVar2;
          }
          __n = param_5 & 0xffffffff;
          if ((int)uVar25 < 1) goto LAB_00ac9e3c;
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
              if (iVar16 == 0) {
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
                    /* try { // try from 00aca604 to 00bca637 has its CatchHandler @ 00aca704 */
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
                    /* try { // try from 00aca638 to 00bca64b has its CatchHandler @ 00aca6d0 */
              uVar11 = (uint)(uVar11 == 0 || uVar23 == uVar11);
                    /* try { // try from 00aca650 to 00bca683 has its CatchHandler @ 00aca6d4 */
              uVar23 = uVar23 + (int)__n;
              __n = (ulong)uVar23;
              ppSVar6 = ppSVar24 + 9;
              if (uVar11 == 0) {
                ppSVar6 = ppSVar24;
              }
              uVar26 = uVar26 + uVar11;
            } while (((uVar23 < uVar25) && (param_2 == 0x17)) &&
                    (ppSVar24 = ppSVar6, uVar26 < uVar14));
          }
          if ((int)__n != 0) goto LAB_00aca6d0;
          goto LAB_00aca4c0;
        }
        iVar13 = 0x85;
        iVar16 = 0x469;
      }
    }
    else {
      if (*(int *)ppSVar24 == 2) {
        iVar13 = 0x4ad;
LAB_00aca694:
        ERR_put_error(0x14,0x94,0x44,"ssl/record/rec_layer_s3.c",iVar13);
        uVar15 = 0x50;
        goto LAB_00aca69c;
      }
      if (param_1->method->version == 0x10000) {
        if ((uVar23 != 0x15) || (param_1->server != 0)) {
          param_1->version = *(int *)ppSVar24;
          iVar13 = 0xf4;
          iVar16 = 0x4bb;
          goto LAB_00aca9b8;
        }
LAB_00aca124:
        uVar14 = 2;
        ppEVar21 = (EVP_CIPHER_CTX **)piVar5;
        puVar22 = (uint *)&param_1[6].field_0xcc;
LAB_00aca140:
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
          goto LAB_00aca4c0;
        }
      }
      else {
        if (uVar23 == 0x16) {
          uVar14 = 4;
          ppEVar21 = ppEVar4;
          puVar22 = puVar3;
          goto LAB_00aca140;
        }
        if (uVar23 == 0x15) goto LAB_00aca124;
      }
      if (param_1->server == 0) {
                    /* try { // try from 00aca268 to 00bca2a7 has its CatchHandler @ 00aca268
                       catch() { ... } // from try @ 00aca268 with catch @ 00aca268
                       catch() { ... } // from try @ 00aca310 with catch @ 00aca268
                       catch() { ... } // from try @ 00aca3a0 with catch @ 00aca268 */
        if ((((3 < *puVar3) && (*(char *)ppEVar4 == '\0')) && (param_1->ctx != (SSL_CTX *)0x0)) &&
           (*(long *)&(param_1->ctx->ex_data).dummy != 0)) {
          *puVar3 = 0;
                    /* try { // try from 00aca3f4 to 00bca43f has its CatchHandler @ 00aca3f4
                       catch() { ... } // from try @ 00aca3f4 with catch @ 00aca3f4
                       catch() { ... } // from try @ 00aca444 with catch @ 00aca3f4 */
          if (((*(char *)((long)&param_1[6].enc_read_ctx + 1) == '\0') &&
              (*(char *)((long)&param_1[6].enc_read_ctx + 2) == '\0')) &&
             (*(char *)((long)&param_1[6].enc_read_ctx + 3) == '\0')) {
            if (param_1->msg_callback_arg != (code *)0x0) {
                    /* try { // try from 00aca440 to 00bca443 has its CatchHandler @ 00aca478 */
              (*param_1->msg_callback_arg)
                        (0,param_1->version,0x16,ppEVar4,4,param_1,*(undefined8 *)&param_1->hit);
            }
                    /* try { // try from 00aca444 to 00bca48b has its CatchHandler @ 00aca3f4 */
            iVar13 = SSL_is_init_finished(param_1);
            if (((iVar13 == 0) || ((**(byte **)&param_1->read_ahead & 1) != 0)) ||
               (*(int *)(*(byte **)&param_1->read_ahead + 0xfc) != 0)) goto LAB_00aca4c0;
            ssl3_renegotiate(param_1);
            iVar13 = ssl3_renegotiate_check(param_1);
            if (iVar13 == 0) goto LAB_00aca4c0;
                    /* catch() { ... } // from try @ 00aca440 with catch @ 00aca478 */
            uVar14 = (*param_1->handshake_func)(param_1);
            __n = (ulong)uVar14;
            if ((int)uVar14 < 0) goto LAB_00ac9e3c;
                    /* try { // try from 00aca48c to 00bca603 has its CatchHandler @ 00aca48c
                       catch() { ... } // from try @ 00aca48c with catch @ 00aca48c
                       catch() { ... } // from try @ 00aca684 with catch @ 00aca48c */
            if (uVar14 == 0) {
              iVar13 = 0xe5;
                    /* catch() { ... } // from try @ 00acaa4c with catch @ 00aca9d8 */
              iVar16 = 0x509;
              goto LAB_00ac9e34;
            }
            bVar8 = *(byte *)&param_1->tlsext_hostname;
            goto joined_r0x00aca49c;
          }
          ERR_put_error(0x14,0x94,0x69,"ssl/record/rec_layer_s3.c",0x4f7);
          uVar15 = 0x32;
          goto LAB_00aca69c;
        }
      }
      else {
        iVar13 = SSL_is_init_finished(param_1);
        if (((((iVar13 != 0) && (*(int *)(*(long *)&param_1->read_ahead + 0x3c4) == 0)) &&
             (0x300 < param_1->version)) && ((3 < *puVar3 && (*(char *)ppEVar4 == '\x01')))) &&
           ((param_1->ctx != (SSL_CTX *)0x0 &&
            ((*(long *)&(param_1->ctx->ex_data).dummy != 0 &&
             ((*(byte *)(param_1->mode + 0x10a) >> 2 & 1) == 0)))))) {
          *(undefined4 *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = 0;
          (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
          ssl3_send_alert(param_1,1,100);
          goto LAB_00aca4c0;
        }
      }
      if (*(uint *)&param_1[6].field_0xcc < 2) {
        if ((param_1->shutdown & 1) != 0) {
          param_1->rwstate = 1;
          *(undefined4 *)(&param_1[2].next_proto_negotiated + uVar20 * 9) = 0;
          (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
          __n = 0;
          goto LAB_00ac9e3c;
        }
        uVar14 = *puVar2;
        if (uVar14 == 0x14) {
          iVar13 = 0x85;
          iVar16 = 0x58c;
        }
        else {
          if (3 < *puVar3) {
            iVar13 = ossl_statem_get_in_handshake(param_1);
            if (iVar13 == 0) {
              iVar13 = SSL_is_init_finished(param_1);
              if ((iVar13 != 0) && ((**(byte **)&param_1->read_ahead & 1) == 0)) {
                    /* try { // try from 00aca398 to 00bca39f has its CatchHandler @ 00aca3b4 */
                ossl_statem_set_in_init(param_1,1);
                    /* try { // try from 00aca3a0 to 00bca3f3 has its CatchHandler @ 00aca268 */
                param_1[1].init_off = 1;
                param_1->new_session = 1;
              }
              uVar14 = (*param_1->handshake_func)(param_1);
                    /* catch() { ... } // from try @ 00aca2e4 with catch @ 00aca3b4
                       catch() { ... } // from try @ 00aca398 with catch @ 00aca3b4 */
                    /* catch() { ... } // from try @ 00aca2a8 with catch @ 00aca3b8
                       catch() { ... } // from try @ 00aca338 with catch @ 00aca3b8 */
              __n = (ulong)uVar14;
              if ((int)uVar14 < 0) goto LAB_00ac9e3c;
              if (uVar14 == 0) {
                    /* catch() { ... } // from try @ 00aca884 with catch @ 00aca8a0 */
                iVar13 = 0xe5;
                    /* catch() { ... } // from try @ 00aca878 with catch @ 00aca8b0 */
                iVar16 = 0x59f;
                goto LAB_00ac9e34;
              }
              bVar8 = *(byte *)&param_1->tlsext_hostname;
joined_r0x00aca49c:
              if (((bVar8 >> 2 & 1) == 0) && (*(int *)(param_1[1].sid_ctx + 0x18) == 0)) {
                    /* try { // try from 00aca938 to 00bca947 has its CatchHandler @ 00aca9a8 */
                param_1->rwstate = 3;
                b = SSL_get_rbio(param_1);
                    /* try { // try from 00aca948 to 00bca9d7 has its CatchHandler @ 00aca8c4 */
                BIO_clear_flags(b,0xf);
                BIO_set_flags(b,9);
                goto LAB_00ac9e38;
              }
              goto LAB_00aca4c0;
            }
            uVar14 = *puVar2;
          }
                    /* try { // try from 00aca878 to 00bca87f has its CatchHandler @ 00aca8b0 */
          if (uVar14 - 0x14 < 3) {
                    /* try { // try from 00aca884 to 00bca88b has its CatchHandler @ 00aca8a0 */
                    /* try { // try from 00aca88c to 00bca8c3 has its CatchHandler @ 00aca850 */
            iVar13 = 0x44;
            iVar16 = 0x5cc;
          }
          else if (uVar14 == 0x17) {
                    /* catch() { ... } // from try @ 00aca948 with catch @ 00aca8c4 */
            iVar13 = ossl_statem_app_data_allowed(param_1);
            if (iVar13 != 0) {
              *(undefined4 *)(*(long *)&param_1->read_ahead + 0x108) = 2;
              goto LAB_00ac9e38;
            }
                    /* catch() { ... } // from try @ 00aca938 with catch @ 00aca9a8 */
            iVar13 = 0xf5;
            iVar16 = 0x5db;
          }
          else {
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
                    /* try { // try from 00aca2a8 to 00bca2db has its CatchHandler @ 00aca3b8 */
          (*pcVar17)(0,param_1->version,0x15,piVar5,2,param_1,*(undefined8 *)&param_1->hit);
        }
        pcVar17 = *(code **)&(param_1->ex_data).dummy;
        uVar14 = (uint)bVar8;
        if (pcVar17 == (code *)0x0) {
          pcVar18 = *(code **)(param_1->mode + 0xf8);
          pcVar17 = local_a0;
          if (pcVar18 != (code *)0x0) {
            pcVar17 = pcVar18;
          }
                    /* try { // try from 00aca2e4 to 00bca30f has its CatchHandler @ 00aca3b4 */
          if (pcVar17 != (code *)0x0) goto LAB_00aca2e8;
          local_a0 = (code *)0x0;
        }
        else {
LAB_00aca2e8:
          (*pcVar17)(param_1,0x4004,CONCAT11(cVar7,bVar8));
          local_a0 = pcVar17;
        }
        if (cVar7 != '\x01') {
          if (cVar7 == '\x02') {
                    /* catch() { ... } // from try @ 00aca818 with catch @ 00aca7d0 */
            param_1->rwstate = 1;
            *(uint *)(*(long *)&param_1->read_ahead + 0xf0) = uVar14;
            ERR_put_error(0x14,0x94,uVar14 + 1000,"ssl/record/rec_layer_s3.c",0x572);
            BIO_snprintf(acStack_70,0x10,"%d",(ulong)bVar8);
                    /* try { // try from 00aca7f8 to 00bca7ff has its CatchHandler @ 00aca83c */
            ERR_add_error_data(2,"SSL alert number ",acStack_70);
                    /* try { // try from 00aca814 to 00bca817 has its CatchHandler @ 00aca82c */
                    /* try { // try from 00aca818 to 00bca84f has its CatchHandler @ 00aca7d0 */
            param_1->shutdown = param_1->shutdown | 2;
            (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
                    /* catch() { ... } // from try @ 00aca814 with catch @ 00aca82c */
            SSL_CTX_remove_session((SSL_CTX *)param_1[1].bbio,(SSL_SESSION *)param_1->ctx);
            __n = 0;
            goto LAB_00ac9e3c;
          }
          ERR_put_error(0x14,0x94,0xf6,"ssl/record/rec_layer_s3.c",0x57b);
          uVar15 = 0x2f;
          goto LAB_00aca69c;
        }
                    /* try { // try from 00aca310 to 00bca337 has its CatchHandler @ 00aca268 */
        *(uint *)(*(long *)&param_1->read_ahead + 0xec) = uVar14;
        (&param_1[2].tlsext_hb_seq)[uVar20 * 0x12] = 1;
        iVar13 = *(int *)((long)&param_1[6].cert + 4) + 1;
        *(int *)((long)&param_1[6].cert + 4) = iVar13;
        if (iVar13 != 5) {
                    /* try { // try from 00aca338 to 00bca34b has its CatchHandler @ 00aca3b8 */
          if (uVar14 != 100) {
            if (uVar14 == 0) {
              param_1->shutdown = param_1->shutdown | 2;
              __n = (ulong)bVar8;
              goto LAB_00ac9e3c;
            }
            goto LAB_00aca4c0;
          }
          ERR_put_error(0x14,0x94,0x153,"ssl/record/rec_layer_s3.c",0x566);
          uVar15 = 0x28;
          goto LAB_00aca69c;
        }
                    /* catch() { ... } // from try @ 00aca7f8 with catch @ 00aca83c */
        iVar13 = 0x199;
        iVar16 = 0x554;
                    /* catch() { ... } // from try @ 00aca88c with catch @ 00aca850 */
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 00aca604 with catch @ 00aca704 */
    iVar13 = 0x91;
    iVar16 = 0x444;
  }
LAB_00aca9b8:
  ERR_put_error(0x14,0x94,iVar13,"ssl/record/rec_layer_s3.c",iVar16);
  uVar15 = 10;
LAB_00aca69c:
  ssl3_send_alert(param_1,2,uVar15);
  goto LAB_00ac9e38;
LAB_00aca6d0:
                    /* catch() { ... } // from try @ 00aca638 with catch @ 00aca6d0 */
                    /* catch() { ... } // from try @ 00aca650 with catch @ 00aca6d4 */
  if (((uVar26 == uVar14) && (param_6 == 0)) &&
     (((*(byte *)&param_1->tlsext_hostname >> 4 & 1) != 0 &&
      (*(int *)(param_1[1].sid_ctx + 0x18) == 0)))) {
    ssl3_release_read_buffer(param_1);
  }
  goto LAB_00ac9e3c;
}

