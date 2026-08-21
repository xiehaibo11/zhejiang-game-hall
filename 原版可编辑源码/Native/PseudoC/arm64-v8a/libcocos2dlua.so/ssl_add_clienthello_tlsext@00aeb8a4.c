
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
          goto LAB_00aeb954;
        }
        iVar6 = iVar6 + 1;
        iVar7 = OPENSSL_sk_num(psVar8);
      } while (iVar6 < iVar7);
    }
  }
  bVar5 = false;
LAB_00aeb954:
  pbVar18 = param_2 + 2;
  if (param_3 <= pbVar18) {
    return (byte *)0x0;
  }
  if (param_1[1].init_off != 0) {
    local_68 = pbVar18;
    iVar6 = ssl_add_clienthello_renegotiate_ext(param_1,0,&local_6c,0);
    if (iVar6 == 0) {
      iVar6 = 0x115;
      iVar7 = 0x41c;
      goto LAB_00aeba50;
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
      iVar7 = 0x427;
      goto LAB_00aeba50;
    }
    pbVar18 = local_68 + local_6c;
  }
  if (*(int *)((long)&param_1->tlsext_ocsp_ids + 4) == 0x300) goto LAB_00aeba18;
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
      goto LAB_00aeba50;
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
      psVar12 = (stack_st_SRTP_PROTECTION_PROFILE *)&UNK_013d3858;
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
        goto LAB_00aeba50;
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
    pbVar18 = &DAT_013d384c;
    local_68 = local_68 + sVar10;
    uVar3 = *(uint *)(param_1->verify_callback + 0x1c) & 0x30000;
    if (uVar3 == 0x10000) {
LAB_00aebd10:
      pSVar17 = (SRTP_PROTECTION_PROFILE *)0x2;
    }
    else {
      if (uVar3 == 0x20000) {
        pbVar18 = &DAT_013d384e;
        goto LAB_00aebd10;
      }
      if (uVar3 == 0x30000) {
        pbVar18 = &DAT_013d384c;
        pSVar17 = (SRTP_PROTECTION_PROFILE *)0x4;
      }
      else {
        pbVar18 = *(byte **)&param_1->tlsext_heartbeat;
        if (pbVar18 == (byte *)0x0) {
          pbVar18 = &DAT_013d3850;
          pSVar17 = (SRTP_PROTECTION_PROFILE *)0x8;
        }
        else {
          pSVar17 = param_1->srtp_profile;
          if (((ulong)pSVar17 & 1) != 0) {
            iVar6 = 0x152;
            iVar7 = 0x123;
            goto LAB_00aeba50;
          }
          if ((SRTP_PROTECTION_PROFILE *)0xfffd < pSVar17) {
            iVar6 = 0x115;
            iVar7 = 0x493;
            goto LAB_00aeba50;
          }
        }
      }
    }
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) <
        ((ulong)((long)&pSVar17->name + 6U) & 0xfffffffffffffffe)) {
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
           (iVar6 = ssl_security(param_1,0x20004,(&UINT_013d35e8)[(ulong)bVar4 * 3],
                                 (&UINT_013d35e4)[(ulong)bVar4 * 3],pbVar18), iVar6 != 0)) {
          bVar4 = *pbVar18;
          goto LAB_00aebd6c;
        }
      }
      else {
LAB_00aebd6c:
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
        if (pSVar13->cert == (cert_st *)0x0) goto LAB_00aebe4c;
        sVar10 = *(size_t *)&pSVar13->read_ahead;
        if (sVar10 != 0) goto LAB_00aebeb4;
      }
LAB_00aebebc:
      if ((*(long *)&param_1->tlsext_hb_seq != 0) &&
         (*(long *)(*(long *)&param_1->tlsext_hb_seq + 8) == 0)) goto LAB_00aebf48;
      sVar10 = 0;
      bVar5 = true;
    }
    else {
      if (pSVar13 == (SSL_CTX *)0x0) goto LAB_00aebebc;
LAB_00aebe4c:
      puVar14 = *(ushort **)&param_1->tlsext_hb_seq;
      if ((puVar14 == (ushort *)0x0) || (*(long *)(puVar14 + 4) == 0)) goto LAB_00aebebc;
      sVar10 = (size_t)*puVar14;
      __dest = CRYPTO_malloc((uint)*puVar14,"ssl/t1_lib.c",0x4b8);
      param_1->ctx->cert = __dest;
      if (__dest == (cert_st *)0x0) {
        return (byte *)0x0;
      }
      memcpy(__dest,*(void **)(*(long *)&param_1->tlsext_hb_seq + 8),sVar10);
      *(size_t *)&param_1->ctx->read_ahead = sVar10;
      if (sVar10 == 0) goto LAB_00aebebc;
LAB_00aebeb4:
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
LAB_00aebf48:
  pbVar18 = local_68;
  iVar6 = *(int *)((long)&param_1->tlsext_ocsp_ids + 4);
  if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
    if (0x302 < iVar6) {
LAB_00aebf7c:
      p_Var15 = param_1->verify_callback;
      puVar20 = &DAT_013d3786;
      uVar3 = *(uint *)(p_Var15 + 0x1c) & 0x30000;
      if (uVar3 == 0x30000) {
        uVar22 = 4;
      }
      else if (uVar3 == 0x20000) {
        puVar20 = &DAT_013d3788;
        uVar22 = 2;
      }
      else if (uVar3 == 0x10000) {
        puVar20 = &DAT_013d3786;
        uVar22 = 2;
      }
      else if ((param_1->server == 0) ||
              (puVar20 = *(undefined1 **)(p_Var15 + 0x158), puVar20 == (undefined1 *)0x0)) {
        puVar20 = *(undefined1 **)(p_Var15 + 0x148);
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &DAT_013d378a;
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
          if (0xec < bVar4) {
            if (bVar4 == 0xed) {
              lVar9 = 6;
            }
            else {
                    /* try { // try from 00aec0e4 to 00bec0e7 has its CatchHandler @ 00aec14c */
              if (bVar4 == 0xee) {
                lVar9 = 7;
              }
              else {
                if (bVar4 != 0xef) goto switchD_00aec0cc_default;
                lVar9 = 8;
                    /* try { // try from 00aec0f4 to 00bec113 has its CatchHandler @ 00aec158 */
              }
            }
            goto switchD_00aec0cc_caseD_1;
          }
          lVar9 = 0;
          switch(bVar4) {
          case 1:
            break;
          case 2:
                    /* catch() { ... } // from try @ 00aec114 with catch @ 00aec0d0 */
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
                    /* try { // try from 00aec114 to 00bec187 has its CatchHandler @ 00aec0d0 */
            break;
          default:
            goto switchD_00aec0cc_default;
          }
switchD_00aec0cc_caseD_1:
                    /* catch() { ... } // from try @ 00aec0e4 with catch @ 00aec14c */
                    /* catch() { ... } // from try @ 00aec0f4 with catch @ 00aec158 */
          if (((((undefined4 *)(&UNK_013d3880 + lVar9 * 0x10) != (undefined4 *)0x0) &&
               (lVar21 = ssl_md((&DAT_013d3888)[lVar9 * 4]), lVar21 != 0)) &&
              (((byte)puVar20[uVar23 + 1] - 0xed < 3 || ((byte)puVar20[uVar23 + 1] - 1 < 3)))) &&
             (iVar6 = ssl_security(param_1,0x5000b,*(undefined4 *)(&UNK_013d3884 + lVar9 * 0x10),
                                   *(undefined4 *)(&UNK_013d3880 + lVar9 * 0x10),pbVar2), iVar6 != 0
             )) {
            *local_78 = *pbVar2;
            local_78[1] = puVar20[uVar23 + 1];
            local_78 = local_78 + 2;
          }
switchD_00aec0cc_default:
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
  else if ((iVar6 < 0xfefe) && (iVar6 != 0x100)) goto LAB_00aebf7c;
  if (*(int *)((long)&param_1->tlsext_ellipticcurvelist_length + 4) == 1) {
    iVar6 = OPENSSL_sk_num(param_1->tls_session_secret_cb);
    if (iVar6 < 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      iVar6 = 0;
      do {
        pOVar11 = (OCSP_RESPID *)OPENSSL_sk_value(param_1->tls_session_secret_cb,iVar6);
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
    local_68[3] = (byte)lVar1;
    local_68[4] = 1;
    local_68[5] = (byte)((ulong)lVar9 >> 8);
    local_68[6] = (byte)lVar9;
                    /* try { // try from 00aec310 to 00bec44b has its CatchHandler @ 00aec310
                       catch() { ... } // from try @ 00aec310 with catch @ 00aec310
                       catch() { ... } // from try @ 00aec454 with catch @ 00aec310 */
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
      i2d_X509_EXTENSIONS(param_1->tls_session_secret_cb_arg,&local_68);
    }
  }
  if ((*(long *)(param_1->mode + 0x2d8) == 0) ||
     (*(int *)(*(long *)&param_1->read_ahead + 400) != 0)) {
    pvVar16 = param_1[1].init_msg;
  }
  else {
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < 4) {
      return (byte *)0x0;
    }
    *local_68 = 0x33;
    local_68[1] = 0x74;
                    /* try { // try from 00aec44c to 00bec453 has its CatchHandler @ 00aec51c */
                    /* try { // try from 00aec454 to 00bec55f has its CatchHandler @ 00aec310 */
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
    local_68[3] = (char)param_1[1].init_num + 2;
    local_68[4] = (byte)((uint)param_1[1].init_num >> 8);
    local_68[5] = (byte)param_1[1].init_num;
    local_68 = local_68 + 6;
    memcpy(local_68,param_1[1].init_msg,(ulong)(uint)param_1[1].init_num);
                    /* catch() { ... } // from try @ 00aec44c with catch @ 00aec51c */
    local_68 = local_68 + (uint)param_1[1].init_num;
    *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3f0) = 1;
  }
  if ((((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0) &&
     (psVar12 = SSL_get_srtp_profiles(param_1), psVar12 != (stack_st_SRTP_PROTECTION_PROFILE *)0x0))
  {
    iVar6 = ssl_add_clienthello_use_srtp_ext(param_1,0,&local_6c,0);
    if (iVar6 != 0) {
      iVar6 = 0x115;
      iVar7 = 0x56a;
LAB_00aeba50:
      ERR_put_error(0x14,iVar6,0x44,"ssl/t1_lib.c",iVar7);
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
      goto LAB_00aeba50;
    }
    local_68 = local_68 + local_6c;
  }
  custom_ext_init(param_1->verify_callback + 0x198);
  iVar6 = custom_ext_add(param_1,0,&local_68,param_3,param_4);
  if (iVar6 == 0) {
    return (byte *)0x0;
  }
  if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) {
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
  if (param_1->tlsext_ellipticcurvelist != (uchar *)0x0) {
    if (param_3 <= local_68) {
      return (byte *)0x0;
    }
    if ((ulong)((long)param_3 - (long)local_68) < 4) {
      return (byte *)0x0;
    }
    *local_68 = 0;
    local_68[1] = 0x12;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68 = local_68 + 4;
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
  if (((*(byte *)((long)&param_1->tlsext_debug_arg + 4) >> 4 & 1) != 0) &&
     (uVar3 = (int)pbVar18 - param_1->s2->escape, (uVar3 & 0xffffff00) == 0x100)) {
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
    local_68[5] = 0x15;
    local_68[6] = (byte)((uint)iVar6 >> 8);
    local_68[7] = (byte)iVar6;
    local_68 = local_68 + 8;
    memset(local_68,0,(long)iVar6);
    pbVar18 = local_68 + iVar6;
  }
LAB_00aeba18:
  iVar6 = ((int)pbVar18 - (int)param_2) + -2;
  if (iVar6 != 0) {
    *param_2 = (byte)((uint)iVar6 >> 8);
    param_2[1] = (byte)iVar6;
    return pbVar18;
  }
  return param_2;
}

