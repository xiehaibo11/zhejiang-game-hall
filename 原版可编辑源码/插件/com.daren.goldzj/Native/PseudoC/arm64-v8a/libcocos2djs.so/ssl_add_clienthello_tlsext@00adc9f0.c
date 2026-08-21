
byte * ssl_add_clienthello_tlsext(SSL *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  stack_st_SSL_CIPHER *psVar8;
  long lVar9;
  size_t sVar10;
  cert_st *__dest;
  OCSP_RESPID *pOVar11;
  stack_st_SRTP_PROTECTION_PROFILE *psVar12;
  SSL_CTX *pSVar13;
  ushort *puVar14;
  _func_3151 *p_Var15;
  void *pvVar16;
  SRTP_PROTECTION_PROFILE *pSVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  byte *local_78;
  int local_6c;
  byte *local_68;
  
  if ((0x300 < param_1->version) || (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0)) {
    local_68 = param_2;
    psVar8 = SSL_get_ciphers(param_1);
    iVar6 = OPENSSL_sk_num();
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        lVar9 = OPENSSL_sk_value(psVar8,iVar6);
        if (((*(byte *)(lVar9 + 0x14) & 0x84) != 0) || ((*(byte *)(lVar9 + 0x18) >> 3 & 1) != 0)) {
          bVar5 = true;
          goto LAB_00adcaa0;
        }
        iVar6 = iVar6 + 1;
        iVar7 = OPENSSL_sk_num(psVar8);
      } while (iVar6 < iVar7);
    }
  }
  bVar5 = false;
LAB_00adcaa0:
  pbVar18 = param_2 + 2;
                    /* try { // try from 00adcaa8 to 00bdcb73 has its CatchHandler @ 00adcbbc */
  if (param_3 <= pbVar18) {
    return (byte *)0x0;
  }
  if (param_1[1].init_off != 0) {
    local_68 = pbVar18;
    iVar6 = ssl_add_clienthello_renegotiate_ext(param_1,0,&local_6c,0);
    if (iVar6 == 0) {
      iVar6 = 0x115;
      iVar7 = 0x41c;
      goto LAB_00adcb9c;
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < (long)local_6c + 4U) {
      return (byte *)0x0;
    }
    *local_68 = 0xff;
    local_68[1] = 1;
    local_68[2] = (byte)((uint)local_6c >> 8);
    local_68[3] = (byte)local_6c;
    local_68 = local_68 + 4;
    iVar6 = ssl_add_clienthello_renegotiate_ext(param_1,local_68,&local_6c,local_6c);
    if (iVar6 == 0) {
      iVar6 = 0x115;
                    /* try { // try from 00adccd4 to 00bdcd93 has its CatchHandler @ 00adccd4
                       catch() { ... } // from try @ 00adccd4 with catch @ 00adccd4
                       catch() { ... } // from try @ 00adce60 with catch @ 00adccd4 */
      iVar7 = 0x427;
      goto LAB_00adcb9c;
    }
    pbVar18 = local_68 + local_6c;
  }
  if (*(int *)((long)&param_1->tlsext_ocsp_ids + 4) == 0x300) goto LAB_00adcb64;
  local_68 = pbVar18;
  if (param_1->tlsext_ecpointformatlist != (uchar *)0x0) {
    sVar10 = strlen((char *)param_1->tlsext_ecpointformatlist);
    if (param_3 <= pbVar18) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)pbVar18) < sVar10 + 9) {
      return (byte *)0x0;
    }
    *pbVar18 = 0;
    local_68[1] = 0;
    local_68[2] = (byte)(sVar10 + 5 >> 8);
    local_68[3] = (byte)(sVar10 + 5);
    local_68[4] = (byte)(sVar10 + 3 >> 8);
    local_68[5] = (byte)(sVar10 + 3);
    local_68[6] = 0;
    local_68[7] = (byte)(sVar10 >> 8);
    local_68[8] = (byte)sVar10;
    local_68 = local_68 + 9;
    memcpy(local_68,param_1->tlsext_ecpointformatlist,sVar10);
    local_68 = local_68 + sVar10;
  }
  pbVar18 = local_68;
  if (param_1[1].d1 != (dtls1_state_st *)0x0) {
    sVar10 = strlen((char *)param_1[1].d1);
    if (0xfe < sVar10 - 1) {
      iVar6 = 0x115;
      iVar7 = 0x455;
      goto LAB_00adcb9c;
    }
    if (param_3 <= pbVar18) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)pbVar18) < sVar10 + 5) {
      return (byte *)0x0;
    }
    *pbVar18 = 0;
    local_68[1] = 0xc;
    local_68[2] = (byte)(sVar10 + 1 >> 8);
    local_68[3] = (byte)(sVar10 + 1);
    pbVar18 = local_68 + 5;
    local_68[4] = (byte)sVar10;
    local_68 = pbVar18;
    memcpy(pbVar18,param_1[1].d1,sVar10);
    local_68 = local_68 + sVar10;
  }
  if (bVar5) {
    psVar12 = param_1->srtp_profiles;
    if (psVar12 == (stack_st_SRTP_PROTECTION_PROFILE *)0x0) {
                    /* try { // try from 00adcd94 to 00bdce5f has its CatchHandler @ 00adcea8 */
      psVar12 = (stack_st_SRTP_PROTECTION_PROFILE *)&UNK_018a53d8;
      sVar10 = 2;
      if (((byte)param_1->verify_callback[0x1e] & 3) == 0) {
        sVar10 = 3;
      }
    }
    else {
      sVar10 = *(size_t *)&param_1->next_proto_negotiated_len;
      if (0xff < sVar10) {
        iVar6 = 0x115;
        iVar7 = 0x478;
        goto LAB_00adcb9c;
      }
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < sVar10 + 5) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 0xb;
    local_68[2] = (byte)(sVar10 + 1 >> 8);
    local_68[3] = (byte)(sVar10 + 1);
    pbVar18 = local_68 + 5;
    local_68[4] = (byte)sVar10;
    local_68 = pbVar18;
    memcpy(pbVar18,psVar12,sVar10);
    pbVar18 = &DAT_018a53cc;
    local_68 = local_68 + sVar10;
    uVar3 = *(uint *)(param_1->verify_callback + 0x1c) & 0x30000;
    if (uVar3 == 0x10000) {
LAB_00adce5c:
      pSVar17 = (SRTP_PROTECTION_PROFILE *)0x2;
    }
    else {
      if (uVar3 == 0x20000) {
        pbVar18 = &DAT_018a53ce;
        goto LAB_00adce5c;
      }
      if (uVar3 == 0x30000) {
        pbVar18 = &DAT_018a53cc;
        pSVar17 = (SRTP_PROTECTION_PROFILE *)&DAT_00000004;
      }
      else {
        pbVar18 = *(byte **)&param_1->tlsext_heartbeat;
        if (pbVar18 == (byte *)0x0) {
                    /* try { // try from 00add17c to 00bdd18b has its CatchHandler @ 00add1b0 */
          pbVar18 = &DAT_018a53d0;
          pSVar17 = (SRTP_PROTECTION_PROFILE *)&DAT_00000008;
        }
        else {
          pSVar17 = param_1->srtp_profile;
          if (((ulong)pSVar17 & 1) != 0) {
            iVar6 = 0x152;
            iVar7 = 0x123;
            goto LAB_00adcb9c;
          }
          if ((SRTP_PROTECTION_PROFILE *)0xfffd < pSVar17) {
            iVar6 = 0x115;
                    /* try { // try from 00add15c to 00bdd16b has its CatchHandler @ 00add1b4 */
            iVar7 = 0x493;
            goto LAB_00adcb9c;
          }
        }
      }
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) <
        ((ulong)((long)&pSVar17->name + 6) & 0xfffffffffffffffe)) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 10;
    pbVar19 = local_68 + 6;
    local_68 = local_68 + 2;
    for (uVar22 = (ulong)pSVar17 >> 1; uVar22 != 0; uVar22 = uVar22 - 1) {
      bVar4 = *pbVar18;
      if (bVar4 == 0) {
        bVar4 = pbVar18[1];
        if (((byte)(bVar4 - 1) < 0x1d) &&
           (iVar6 = ssl_security(param_1,0x20004,(&UINT_018a5168)[(ulong)bVar4 * 3],
                                 (&UINT_018a5164)[(ulong)bVar4 * 3],pbVar18), iVar6 != 0)) {
          bVar4 = *pbVar18;
          goto LAB_00adceb8;
        }
      }
      else {
LAB_00adceb8:
        *pbVar19 = bVar4;
        pbVar19[1] = pbVar18[1];
        pbVar19 = pbVar19 + 2;
      }
      pbVar18 = pbVar18 + 2;
    }
    *local_68 = (byte)((ulong)(pbVar19 + (-2 - (long)local_68)) >> 8);
    pbVar18 = pbVar19 + (-4 - (long)local_68);
    local_68[1] = (byte)(pbVar19 + (-2 - (long)local_68));
    local_68[2] = (byte)((ulong)pbVar18 >> 8);
    local_68[3] = (byte)pbVar18;
    local_68 = local_68 + (long)(pbVar18 + 4);
  }
  if (((*(byte *)((long)&param_1->tlsext_debug_arg + 5) >> 6 & 1) == 0) &&
     (iVar6 = ssl_security(param_1,10,0,0,0), iVar6 != 0)) {
    pSVar13 = param_1->ctx;
    if (param_1->new_session == 0) {
      if (pSVar13 != (SSL_CTX *)0x0) {
        if (pSVar13->cert == (cert_st *)0x0) goto LAB_00adcf98;
        sVar10 = *(size_t *)&pSVar13->read_ahead;
        if (sVar10 != 0) goto LAB_00add000;
      }
LAB_00add008:
      if ((*(long *)&param_1->tlsext_hb_seq != 0) &&
         (*(long *)(*(long *)&param_1->tlsext_hb_seq + 8) == 0)) goto LAB_00add094;
      sVar10 = 0;
      bVar5 = true;
    }
    else {
      if (pSVar13 == (SSL_CTX *)0x0) goto LAB_00add008;
LAB_00adcf98:
      puVar14 = *(ushort **)&param_1->tlsext_hb_seq;
      if ((puVar14 == (ushort *)0x0) || (*(long *)(puVar14 + 4) == 0)) goto LAB_00add008;
      sVar10 = (size_t)*puVar14;
      __dest = CRYPTO_malloc((uint)*puVar14,"ssl/t1_lib.c",0x4b8);
      param_1->ctx->cert = __dest;
      if (__dest == (cert_st *)0x0) {
        return (byte *)0x0;
      }
      memcpy(__dest,*(void **)(*(long *)&param_1->tlsext_hb_seq + 8),sVar10);
      *(size_t *)&param_1->ctx->read_ahead = sVar10;
      if (sVar10 == 0) goto LAB_00add008;
LAB_00add000:
      bVar5 = false;
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < sVar10 + 4) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 0x23;
    local_68[2] = (byte)(sVar10 >> 8);
    local_68[3] = (byte)sVar10;
    local_68 = local_68 + 4;
    if (!bVar5) {
      memcpy(local_68,param_1->ctx->cert,sVar10);
      local_68 = local_68 + sVar10;
    }
  }
LAB_00add094:
  pbVar18 = local_68;
  iVar6 = *(int *)((long)&param_1->tlsext_ocsp_ids + 4);
  if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
    if (0x302 < iVar6) {
LAB_00add0c8:
      p_Var15 = param_1->verify_callback;
      puVar20 = &DAT_018a5306;
      uVar3 = *(uint *)(p_Var15 + 0x1c) & 0x30000;
      if (uVar3 == 0x30000) {
        uVar22 = 4;
      }
      else if (uVar3 == 0x20000) {
        puVar20 = &DAT_018a5308;
        uVar22 = 2;
      }
      else if (uVar3 == 0x10000) {
        puVar20 = &DAT_018a5306;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00add18c with catch @ 00add0fc
                        */
        uVar22 = 2;
      }
      else if ((param_1->server == 0) ||
              (puVar20 = *(undefined1 **)(p_Var15 + 0x158), puVar20 == (undefined1 *)0x0)) {
        puVar20 = *(undefined1 **)(p_Var15 + 0x148);
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &DAT_018a530a;
          uVar22 = 0x24;
        }
        else {
          uVar22 = *(ulong *)(p_Var15 + 0x150);
        }
      }
      else {
        uVar22 = *(ulong *)(p_Var15 + 0x160);
      }
      if (param_3 <= local_68) {
        return (byte *)0x0;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00add17c with catch @ 00add1b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00add15c with catch @ 00add1b4
                        */
      if ((ulong)((long)param_3 - (long)local_68) < uVar22 + 6) {
        return (byte *)0x0;
      }
      *local_68 = 0;
      local_68[1] = 0xd;
      pbVar19 = local_68 + 6;
      local_78 = pbVar19;
      local_68 = pbVar19;
      if (uVar22 != 0) {
        uVar23 = 0;
        do {
          pbVar2 = puVar20 + uVar23;
          bVar4 = *pbVar2;
                    /* try { // try from 00add1f4 to 00bdd373 has its CatchHandler @ 00add1f4
                       catch() { ... } // from try @ 00add1f4 with catch @ 00add1f4
                       catch() { ... } // from try @ 00add37c with catch @ 00add1f4
                       catch() { ... } // from try @ 00add438 with catch @ 00add1f4
                       catch() { ... } // from try @ 00add4f4 with catch @ 00add1f4
                       catch() { ... } // from try @ 00add778 with catch @ 00add1f4
                       catch() { ... } // from try @ 00add7e0 with catch @ 00add1f4 */
          if (0xec < bVar4) {
            if (bVar4 == 0xed) {
              lVar9 = 6;
            }
            else if (bVar4 == 0xee) {
              lVar9 = 7;
            }
            else {
              if (bVar4 != 0xef) goto switchD_00add218_default;
              lVar9 = 8;
            }
            goto switchD_00add218_caseD_1;
          }
          lVar9 = 0;
          switch(bVar4) {
          case 1:
            break;
          case 2:
            lVar9 = 1;
            break;
          case 3:
            lVar9 = 2;
            break;
          case 4:
            lVar9 = 3;
            break;
          case 5:
            lVar9 = 4;
            break;
          case 6:
            lVar9 = 5;
            break;
          default:
            goto switchD_00add218_default;
          }
switchD_00add218_caseD_1:
          if (((((undefined4 *)(&UNK_018a5400 + lVar9 * 0x10) != (undefined4 *)0x0) &&
               (lVar21 = ssl_md((&DAT_018a5408)[lVar9 * 4]), lVar21 != 0)) &&
              (((byte)puVar20[uVar23 + 1] - 0xed < 3 || ((byte)puVar20[uVar23 + 1] - 1 < 3)))) &&
             (iVar6 = ssl_security(param_1,0x5000b,*(undefined4 *)(&UNK_018a5404 + lVar9 * 0x10),
                                   *(undefined4 *)(&UNK_018a5400 + lVar9 * 0x10),pbVar2), iVar6 != 0
             )) {
            *local_78 = *pbVar2;
            local_78[1] = puVar20[uVar23 + 1];
            local_78 = local_78 + 2;
          }
switchD_00add218_default:
          uVar23 = uVar23 + 2;
        } while (uVar23 < uVar22);
      }
      lVar9 = (long)local_78 - (long)pbVar19;
      pbVar18[3] = (byte)(lVar9 + 2);
      pbVar18[4] = (byte)((ulong)lVar9 >> 8);
      pbVar18[2] = (byte)((ulong)(lVar9 + 2) >> 8);
      pbVar18[5] = (byte)lVar9;
      local_68 = local_68 + lVar9;
    }
  }
  else if ((iVar6 < 0xfefe) && (iVar6 != 0x100)) goto LAB_00add0c8;
  if (*(int *)((long)&param_1->tlsext_ellipticcurvelist_length + 4) == 1) {
    iVar6 = OPENSSL_sk_num(param_1->tls_session_secret_cb);
    if (iVar6 < 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      iVar6 = 0;
      do {
                    /* try { // try from 00add374 to 00bdd37b has its CatchHandler @ 00add800 */
        pOVar11 = (OCSP_RESPID *)OPENSSL_sk_value(param_1->tls_session_secret_cb,iVar6);
                    /* try { // try from 00add37c to 00bdd42f has its CatchHandler @ 00add1f4 */
        iVar7 = i2d_OCSP_RESPID(pOVar11,(uchar **)0x0);
        if (iVar7 < 1) {
          return (byte *)0x0;
        }
        lVar9 = lVar9 + iVar7 + 2;
        iVar6 = iVar6 + 1;
        iVar7 = OPENSSL_sk_num(param_1->tls_session_secret_cb);
      } while (iVar6 < iVar7);
    }
    if (param_1->tls_session_secret_cb_arg == (X509_EXTENSIONS *)0x0) {
      lVar21 = 0;
    }
    else {
      iVar6 = i2d_X509_EXTENSIONS(param_1->tls_session_secret_cb_arg,(uchar **)0x0);
      if (iVar6 < 0) {
        return (byte *)0x0;
      }
      lVar21 = (long)iVar6;
    }
    if (0xfff0 < (ulong)(lVar21 + lVar9)) {
      return (byte *)0x0;
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < lVar9 + lVar21 + 9U) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    lVar1 = lVar21 + lVar9 + 5;
    local_68[1] = 5;
    local_68[2] = (byte)((ulong)lVar1 >> 8);
                    /* try { // try from 00add430 to 00bdd437 has its CatchHandler @ 00add7f0 */
    local_68[3] = (byte)lVar1;
                    /* try { // try from 00add438 to 00bdd4eb has its CatchHandler @ 00add1f4 */
    local_68[4] = 1;
    local_68[5] = (byte)((ulong)lVar9 >> 8);
    local_68[6] = (byte)lVar9;
    local_68 = local_68 + 7;
    iVar6 = OPENSSL_sk_num(param_1->tls_session_secret_cb);
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        pbVar18 = local_68;
        pOVar11 = (OCSP_RESPID *)OPENSSL_sk_value(param_1->tls_session_secret_cb,iVar6);
        local_68 = local_68 + 2;
        iVar7 = i2d_OCSP_RESPID(pOVar11,&local_68);
        *pbVar18 = (byte)((uint)iVar7 >> 8);
        pbVar18[1] = (byte)iVar7;
        iVar6 = iVar6 + 1;
        iVar7 = OPENSSL_sk_num(param_1->tls_session_secret_cb);
      } while (iVar6 < iVar7);
    }
    *local_68 = (byte)((ulong)lVar21 >> 8);
    local_68[1] = (byte)lVar21;
    local_68 = local_68 + 2;
    if (lVar21 != 0) {
                    /* try { // try from 00add4ec to 00bdd4f3 has its CatchHandler @ 00add7e0 */
      i2d_X509_EXTENSIONS(param_1->tls_session_secret_cb_arg,&local_68);
    }
  }
                    /* try { // try from 00add4f4 to 00bdd533 has its CatchHandler @ 00add1f4 */
  if ((*(long *)(param_1->mode + 0x2d8) == 0) ||
     (*(int *)(*(long *)&param_1->read_ahead + 400) != 0)) {
    pvVar16 = param_1[1].init_msg;
  }
  else {
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
                    /* try { // try from 00add580 to 00bdd593 has its CatchHandler @ 00add810 */
    if ((ulong)((long)param_3 - (long)local_68) < 4) {
      return (byte *)0x0;
    }
    *local_68 = 0x33;
    local_68[1] = 0x74;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68 = local_68 + 4;
    pvVar16 = param_1[1].init_msg;
  }
  if ((pvVar16 != (void *)0x0) && (*(int *)(*(long *)&param_1->read_ahead + 400) == 0)) {
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < (ulong)(param_1[1].init_num + 6)) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 0x10;
    local_68[2] = (byte)((uint)(param_1[1].init_num + 2) >> 8);
                    /* try { // try from 00add61c to 00bdd623 has its CatchHandler @ 00add8c0 */
    local_68[3] = (char)param_1[1].init_num + 2;
    local_68[4] = (byte)((uint)param_1[1].init_num >> 8);
                    /* try { // try from 00add640 to 00bdd6cb has its CatchHandler @ 00add8d0 */
    local_68[5] = (byte)param_1[1].init_num;
    local_68 = local_68 + 6;
    memcpy(local_68,param_1[1].init_msg,(ulong)(uint)param_1[1].init_num);
    local_68 = local_68 + (uint)param_1[1].init_num;
    *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3f0) = 1;
  }
                    /* try { // try from 00add534 to 00bdd54f has its CatchHandler @ 00add87c */
  if ((((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0) &&
     (psVar12 = SSL_get_srtp_profiles(param_1), psVar12 != (stack_st_SRTP_PROTECTION_PROFILE *)0x0))
  {
    iVar6 = ssl_add_clienthello_use_srtp_ext(param_1,0,&local_6c,0);
    if (iVar6 != 0) {
                    /* try { // try from 00add550 to 00bdd567 has its CatchHandler @ 00add85c */
      iVar6 = 0x115;
      iVar7 = 0x56a;
LAB_00adcb9c:
      ERR_put_error(0x14,iVar6,0x44,"ssl/t1_lib.c",iVar7);
                    /* catch() { ... } // from try @ 00adcaa8 with catch @ 00adcbbc */
      return (byte *)0x0;
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < (long)local_6c + 4U) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 0xe;
    local_68[2] = (byte)((uint)local_6c >> 8);
    local_68[3] = (byte)local_6c;
    local_68 = local_68 + 4;
    iVar6 = ssl_add_clienthello_use_srtp_ext(param_1,local_68,&local_6c,local_6c);
    if (iVar6 != 0) {
      iVar6 = 0x115;
      iVar7 = 0x57a;
      goto LAB_00adcb9c;
    }
    local_68 = local_68 + local_6c;
  }
  custom_ext_init(param_1->verify_callback + 0x198);
  iVar6 = custom_ext_add(param_1,0,&local_68,param_3,param_4);
  if (iVar6 == 0) {
    return (byte *)0x0;
  }
                    /* try { // try from 00add768 to 00bdd777 has its CatchHandler @ 00add8c0 */
  if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
                    /* try { // try from 00add778 to 00bdd7c7 has its CatchHandler @ 00add1f4 */
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < 4) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 0x16;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68 = local_68 + 4;
  }
                    /* try { // try from 00add7c8 to 00bdd7cf has its CatchHandler @ 00add800 */
  if (param_1->tlsext_ellipticcurvelist != (uchar *)0x0) {
                    /* try { // try from 00add7d0 to 00bdd7d7 has its CatchHandler @ 00add7f0 */
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
                    /* try { // try from 00add7d8 to 00bdd7df has its CatchHandler @ 00add7e0 */
    if ((ulong)((long)param_3 - (long)local_68) < 4) {
      return (byte *)0x0;
    }
                    /* catch() { ... } // from try @ 00add4ec with catch @ 00add7e0
                       catch() { ... } // from try @ 00add7d8 with catch @ 00add7e0
                       try { // try from 00add7e0 to 00bdd927 has its CatchHandler @ 00add1f4 */
    *local_68 = 0;
    local_68[1] = 0x12;
                    /* catch() { ... } // from try @ 00add430 with catch @ 00add7f0
                       catch() { ... } // from try @ 00add7d0 with catch @ 00add7f0 */
    local_68[2] = 0;
                    /* catch() { ... } // from try @ 00add374 with catch @ 00add800
                       catch() { ... } // from try @ 00add7c8 with catch @ 00add800 */
    local_68[3] = 0;
    local_68 = local_68 + 4;
                    /* catch() { ... } // from try @ 00add580 with catch @ 00add810 */
  }
  if (param_3 <= local_68) {
    return (byte *)0x0;
  }
  if ((ulong)((long)param_3 - (long)local_68) < 4) {
    return (byte *)0x0;
  }
  *local_68 = 0;
  local_68[1] = 0x17;
  local_68[2] = 0;
  local_68[3] = 0;
  pbVar18 = local_68 + 4;
                    /* catch() { ... } // from try @ 00add550 with catch @ 00add85c */
  if (((*(byte *)((long)&param_1->tlsext_debug_arg + 4) >> 4 & 1) != 0) &&
     (uVar3 = (int)pbVar18 - param_1->s2->escape, (uVar3 & 0xffffff00) == 0x100)) {
                    /* catch() { ... } // from try @ 00add534 with catch @ 00add87c */
    iVar6 = 0x1fc - uVar3;
    if ((int)(0x200 - uVar3) < 4) {
      iVar6 = 0;
    }
    if (param_3 <= pbVar18) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)pbVar18) < (ulong)(long)(iVar6 + 4)) {
      return (byte *)0x0;
    }
    *pbVar18 = 0;
                    /* catch() { ... } // from try @ 00add61c with catch @ 00add8c0
                       catch() { ... } // from try @ 00add768 with catch @ 00add8c0 */
    local_68[5] = 0x15;
                    /* catch() { ... } // from try @ 00add640 with catch @ 00add8d0 */
    local_68[6] = (byte)((uint)iVar6 >> 8);
    local_68[7] = (byte)iVar6;
    local_68 = local_68 + 8;
    memset(local_68,0,(long)iVar6);
    pbVar18 = local_68 + iVar6;
  }
LAB_00adcb64:
  iVar6 = ((int)pbVar18 - (int)param_2) + -2;
  if (iVar6 != 0) {
                    /* try { // try from 00adcb74 to 00bdcbd7 has its CatchHandler @ 00adc9e8 */
    *param_2 = (byte)((uint)iVar6 >> 8);
    param_2[1] = (byte)iVar6;
    return pbVar18;
  }
  return param_2;
}

