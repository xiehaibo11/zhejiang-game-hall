
undefined8 ssl_parse_clienthello_tlsext(SSL *param_1,long *param_2)

{
  size_t sVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  tls_session_secret_cb_fn ptVar9;
  OCSP_RESPID *a;
  dtls1_state_st *pdVar10;
  void *pvVar11;
  stack_st_SRTP_PROTECTION_PROFILE *psVar12;
  X509_EXTENSIONS *pXVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  stack_st_X509_NAME **ppsVar17;
  byte *pbVar18;
  BIO_METHOD *pBVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  BIO *pBVar24;
  ulong uVar25;
  byte *pbVar26;
  SSL_CTX *pSVar27;
  long lVar28;
  byte *pbVar29;
  stack_st_X509_NAME *psVar30;
  byte *pbVar31;
  size_t sVar32;
  _func_3094 *p_Var33;
  ulong uVar34;
  undefined4 local_94;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  ulong local_78;
  byte *local_70;
  ulong local_68;
  
  custom_ext_init(param_1->verify_callback + 0x1a8);
  local_94 = 0x32;
  lVar14 = *(long *)&param_1->read_ahead;
  param_1->tlsext_ellipticcurvelist_length = 0xffffffff00000000;
  *(undefined4 *)(lVar14 + 0x3c8) = 0;
  CRYPTO_free(*(void **)(lVar14 + 0x3d0));
  lVar14 = *(long *)&param_1->read_ahead;
  *(undefined8 *)(lVar14 + 0x3d8) = 0;
  *(undefined8 *)(lVar14 + 0x3d0) = 0;
  CRYPTO_free(*(void **)(lVar14 + 0x3e0));
  lVar14 = *(long *)&param_1->read_ahead;
  *(undefined8 *)(lVar14 + 1000) = 0;
  *(undefined8 *)(lVar14 + 0x3e0) = 0;
                    /* try { // try from 00ade2b4 to 00bde2bb has its CatchHandler @ 00ade37c */
                    /* try { // try from 00ade2bc to 00bde38f has its CatchHandler @ 00ade188 */
  if ((((*(byte *)((long)&param_1->tlsext_debug_arg + 4) >> 6 & 1) != 0) &&
      (uVar20 = param_2[1], 3 < uVar20)) && ((uVar20 & 0xfffffffffffffffe) != 4)) {
    lVar28 = *param_2;
    uVar34 = (ulong)CONCAT11(*(undefined1 *)(lVar28 + 4),*(undefined1 *)(lVar28 + 5));
    sVar32 = (uVar20 - 6) - uVar34;
    if ((uVar34 <= uVar20 - 6) &&
       (CONCAT11(*(undefined1 *)(lVar28 + 2),*(undefined1 *)(lVar28 + 3)) == 0)) {
      uVar7 = SSL_client_version(param_1);
      if ((uVar7 & 0xffffff00) == 0x300) {
        iVar8 = SSL_client_version(param_1);
        sVar1 = 0x22;
        if (iVar8 < 0x303) {
          sVar1 = 0x12;
        }
        if (sVar32 != sVar1) goto LAB_00ade364;
LAB_00ade340:
        iVar8 = CRYPTO_memcmp((void *)(lVar28 + uVar34 + 6),&DAT_018a53db,sVar32);
        bVar5 = iVar8 == 0;
      }
      else {
        if (sVar32 == 0x12) goto LAB_00ade340;
LAB_00ade364:
        bVar5 = false;
      }
      lVar14 = *(long *)&param_1->read_ahead;
      *(bool *)(lVar14 + 0x3f4) = bVar5;
    }
  }
                    /* catch() { ... } // from try @ 00ade2b4 with catch @ 00ade37c */
  CRYPTO_free(*(void **)(lVar14 + 0x2c0));
  puVar15 = *(ulong **)&param_1->read_ahead;
  puVar15[0x58] = 0;
  *puVar15 = *puVar15 & 0xfffffffffffffeff;
  CRYPTO_free(param_1[1].d1);
  param_1[1].d1 = (dtls1_state_st *)0x0;
  param_1[1].quiet_shutdown = 0;
  param_1[1].shutdown = 0;
  lVar14 = param_2[1];
  if (lVar14 != 0) {
    pbVar26 = local_80;
    uVar20 = local_78;
    if (lVar14 == 1) goto LAB_00adebbc;
    puVar21 = (undefined1 *)*param_2;
    uVar34 = (ulong)CONCAT11(*puVar21,puVar21[1]);
    if (lVar14 - 2U != uVar34) goto LAB_00adebbc;
    pbVar29 = puVar21 + 2;
    *param_2 = (long)(pbVar29 + uVar34);
    param_2[1] = 0;
    local_70 = pbVar29;
    local_68 = uVar34;
    iVar8 = FUN_00ae1804(&local_70);
    pbVar26 = local_80;
    uVar20 = local_78;
    if (iVar8 == 0) goto LAB_00adebbc;
    if (uVar34 < 2) {
      bVar5 = false;
    }
    else {
      bVar5 = false;
      do {
        bVar2 = *pbVar29;
        pbVar31 = pbVar29 + 1;
        local_70 = pbVar29 + 2;
        local_68 = uVar34 - 2;
        pbVar26 = local_80;
        uVar20 = local_78;
        if (local_68 < 2) goto LAB_00adebbc;
        local_78 = (ulong)CONCAT11(pbVar29[2],pbVar29[3]);
        uVar22 = uVar34 - 4;
        uVar34 = uVar22 - local_78;
        if (uVar22 < local_78) goto LAB_00adebbc;
        local_80 = pbVar29 + 4;
        pbVar29 = local_80 + local_78;
        sVar3 = CONCAT11(bVar2,*pbVar31);
        local_70 = pbVar29;
        local_68 = uVar34;
        if (*(code **)&param_1->tlsext_ocsp_resplen != (code *)0x0) {
          (**(code **)&param_1->tlsext_ocsp_resplen)
                    (param_1,0,sVar3,local_80,local_78,param_1->tlsext_ecpointformatlist_length);
        }
        if (sVar3 == -0xff) {
          iVar8 = ssl_parse_clienthello_renegotiate_ext(param_1,&local_80,&local_94);
          pbVar26 = local_80;
          uVar20 = local_78;
          if (iVar8 == 0) goto LAB_00adebbc;
          bVar5 = true;
        }
        else if (param_1->version != 0x300) {
          pbVar26 = local_80;
          uVar20 = local_78;
          switch(sVar3) {
          case 0:
            if ((local_78 < 2) ||
               (uVar22 = (ulong)CONCAT11(*local_80,local_80[1]), local_78 - 2 != uVar22))
            goto LAB_00adebbc;
            pbVar26 = local_80 + 2 + uVar22;
            local_78 = 0;
            uVar20 = local_78;
            if ((uVar22 == 0) ||
               (((uVar22 - 1 < 2 || (local_80[2] != 0)) ||
                (uVar23 = (ulong)CONCAT11(local_80[3],local_80[4]), uVar22 - 3 != uVar23))))
            goto LAB_00adebbc;
            pbVar31 = local_80 + 5;
            local_80 = pbVar26;
            if (*(int *)&param_1->param == 0) {
                    /* try { // try from 00adea78 to 00bdea93 has its CatchHandler @ 00adec40 */
              if ((0xff < uVar23) || (pvVar11 = memchr(pbVar31,0,uVar23), pvVar11 != (void *)0x0)) {
                local_94 = 0x70;
                pbVar26 = local_80;
                uVar20 = local_78;
                goto LAB_00adebbc;
              }
              pSVar27 = param_1->ctx;
              CRYPTO_free(pSVar27->info_callback);
                    /* try { // try from 00adeab0 to 00bdeab7 has its CatchHandler @ 00adebf0 */
              p_Var33 = (_func_3094 *)CRYPTO_strndup(pbVar31,uVar23,"ssl/packet_locl.h",0x198);
              pSVar27->info_callback = p_Var33;
                    /* try { // try from 00adeab8 to 00bdeb8f has its CatchHandler @ 00ade808 */
              if (p_Var33 == (_func_3094 *)0x0) goto LAB_00ade410;
              *(undefined4 *)&param_1->tlsext_ellipticcurvelist_length = 1;
            }
            else {
              p_Var33 = param_1->ctx->info_callback;
              if (p_Var33 == (_func_3094 *)0x0) {
                *(undefined4 *)&param_1->tlsext_ellipticcurvelist_length = 0;
              }
              else {
                sVar32 = strlen((char *)p_Var33);
                if (uVar23 == sVar32) {
                  iVar8 = CRYPTO_memcmp(pbVar31,p_Var33,uVar23);
                  bVar6 = iVar8 == 0;
                }
                else {
                  bVar6 = false;
                }
                *(uint *)&param_1->tlsext_ellipticcurvelist_length = (uint)bVar6;
              }
            }
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xe:
          case 0xf:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
switchD_00ade4f0_caseD_1:
            if ((((byte)param_1->method->get_timeout[0x68] >> 3 & 1) == 0) ||
               ((psVar12 = SSL_get_srtp_profiles(param_1), sVar3 != 0xe ||
                (psVar12 == (stack_st_SRTP_PROTECTION_PROFILE *)0x0)))) {
              if (sVar3 == 0x16) {
                **(ulong **)&param_1->read_ahead = **(ulong **)&param_1->read_ahead | 0x100;
              }
              else if ((*(int *)&param_1->param == 0) &&
                      (iVar8 = custom_ext_parse(param_1,1,sVar3,local_80,local_78,&local_94),
                      pbVar26 = local_80, uVar20 = local_78, iVar8 < 1)) goto LAB_00adebbc;
            }
            else {
              iVar8 = ssl_parse_clienthello_use_srtp_ext(param_1,&local_80,&local_94);
              pbVar26 = local_80;
              uVar20 = local_78;
              if (iVar8 != 0) goto LAB_00adebbc;
            }
            break;
          case 5:
            if (local_78 == 0) goto LAB_00adebbc;
            uVar20 = local_78 - 1;
            pbVar26 = local_80 + 1;
            bVar2 = *local_80;
            *(uint *)((long)&param_1->tlsext_ellipticcurvelist_length + 4) = (uint)bVar2;
            if (bVar2 == 1) {
              if (uVar20 < 2) goto LAB_00adebbc;
              uVar23 = local_78 - 3;
              uVar22 = (ulong)CONCAT11(local_80[1],local_80[2]);
              local_78 = uVar23 - uVar22;
              if (uVar23 < uVar22) goto LAB_00adebbc;
              pbVar31 = local_80 + 3;
              local_80 = pbVar31 + uVar22;
              OPENSSL_sk_pop_free(param_1->tls_session_secret_cb,OCSP_RESPID_free);
              if (uVar22 == 0) {
                param_1->tls_session_secret_cb = (tls_session_secret_cb_fn)0x0;
              }
              else {
                ptVar9 = (tls_session_secret_cb_fn)OPENSSL_sk_new_null();
                param_1->tls_session_secret_cb = ptVar9;
                if (ptVar9 == (tls_session_secret_cb_fn)0x0) goto LAB_00ade410;
                do {
                  pbVar26 = local_80;
                  uVar20 = local_78;
                  if (uVar22 == 1) goto LAB_00adebbc;
                  uVar23 = (ulong)CONCAT11(*pbVar31,pbVar31[1]);
                  uVar16 = uVar22 - 2;
                  uVar22 = uVar16 - uVar23;
                  if ((uVar16 < uVar23) || (uVar23 == 0)) goto LAB_00adebbc;
                  local_90 = pbVar31 + 2;
                  a = d2i_OCSP_RESPID((OCSP_RESPID **)0x0,&local_90,uVar23);
                  pbVar26 = local_80;
                  uVar20 = local_78;
                  if (a == (OCSP_RESPID *)0x0) goto LAB_00adebbc;
                  pbVar31 = pbVar31 + 2 + uVar23;
                  if (local_90 != pbVar31) {
                    OCSP_RESPID_free(a);
                    pbVar26 = local_80;
                    uVar20 = local_78;
                    /* catch() { ... } // from try @ 00aded60 with catch @ 00adec9c
                       catch() { ... } // from try @ 00adede8 with catch @ 00adec9c
                       catch() { ... } // from try @ 00adee70 with catch @ 00adec9c
                       catch() { ... } // from try @ 00adeed0 with catch @ 00adec9c
                       catch() { ... } // from try @ 00adefa4 with catch @ 00adec9c */
                    goto LAB_00adebbc;
                  }
                  iVar8 = OPENSSL_sk_push(param_1->tls_session_secret_cb,a);
                  if (iVar8 == 0) {
                    OCSP_RESPID_free(a);
                    goto LAB_00ade410;
                  }
                } while (uVar22 != 0);
              }
              pbVar26 = local_80;
              uVar20 = local_78;
              if ((local_78 < 2) ||
                 (uVar22 = (ulong)CONCAT11(*local_80,local_80[1]), local_78 - 2 != uVar22))
              goto LAB_00adebbc;
              pbVar26 = local_80 + 2;
              pbVar31 = pbVar26 + uVar22;
              local_78 = 0;
              local_80 = pbVar31;
              if (uVar22 != 0) {
                local_88 = pbVar26;
                OPENSSL_sk_pop_free(param_1->tls_session_secret_cb_arg,X509_EXTENSION_free);
                pXVar13 = d2i_X509_EXTENSIONS((X509_EXTENSIONS **)0x0,&local_88,uVar22);
                param_1->tls_session_secret_cb_arg = pXVar13;
                pbVar26 = local_80;
                uVar20 = local_78;
                if ((pXVar13 == (X509_EXTENSIONS *)0x0) || (local_88 != pbVar31)) goto LAB_00adebbc;
              }
            }
            else {
              *(undefined4 *)((long)&param_1->tlsext_ellipticcurvelist_length + 4) = 0xffffffff;
              local_80 = pbVar26;
              local_78 = uVar20;
            }
            break;
          case 10:
            if (local_78 < 2) goto LAB_00adebbc;
            pbVar31 = local_80 + 1;
            psVar30 = (stack_st_X509_NAME *)(ulong)CONCAT11(*local_80,*pbVar31);
            if ((stack_st_X509_NAME *)(local_78 - 2) != psVar30) goto LAB_00adebbc;
            pbVar18 = local_80 + 2;
            local_80 = pbVar18 + (long)psVar30;
            local_78 = 0;
            pbVar26 = local_80;
            uVar20 = local_78;
            if ((psVar30 == (stack_st_X509_NAME *)0x0) || ((*pbVar31 & 1) != 0)) goto LAB_00adebbc;
            if (*(int *)&param_1->param == 0) {
              pSVar27 = param_1->ctx;
              CRYPTO_free((void *)pSVar27->max_cert_list);
              pSVar27->mode = 0;
              pSVar27->max_cert_list = 0;
              lVar14 = CRYPTO_memdup(pbVar18,psVar30,"ssl/packet_locl.h",0x181);
              pSVar27->max_cert_list = lVar14;
              if (lVar14 == 0) goto LAB_00ade410;
              ppsVar17 = (stack_st_X509_NAME **)&pSVar27->mode;
LAB_00ade79c:
              *ppsVar17 = psVar30;
            }
            break;
          case 0xb:
            if (local_78 == 0) goto LAB_00adebbc;
            psVar30 = (stack_st_X509_NAME *)(local_78 - 1);
            pbVar31 = local_80 + 1;
            bVar2 = *local_80;
            if (psVar30 != (stack_st_X509_NAME *)(ulong)bVar2) goto LAB_00adebbc;
            local_80 = local_80 + local_78;
            local_78 = 0;
            pbVar26 = local_80;
            uVar20 = local_78;
            if (bVar2 == 0) goto LAB_00adebbc;
            if (*(int *)&param_1->param == 0) {
              pSVar27 = param_1->ctx;
              CRYPTO_free((void *)pSVar27->options);
              pSVar27->client_CA = (stack_st_X509_NAME *)0x0;
              pSVar27->options = 0;
              uVar20 = CRYPTO_memdup(pbVar31,psVar30,"ssl/packet_locl.h",0x181);
              pSVar27->options = uVar20;
              if (uVar20 != 0) {
                ppsVar17 = &pSVar27->client_CA;
                goto LAB_00ade79c;
              }
              goto LAB_00ade410;
            }
            break;
          case 0xc:
            if (local_78 == 0) goto LAB_00adebbc;
            sVar32 = local_78 - 1;
            pbVar31 = local_80 + 1;
            if (sVar32 != *local_80) goto LAB_00adebbc;
            local_80 = local_80 + local_78;
            local_78 = 0;
            pvVar11 = memchr(pbVar31,0,sVar32);
            pbVar26 = local_80;
            uVar20 = local_78;
            if (pvVar11 != (void *)0x0) goto LAB_00adebbc;
            CRYPTO_free(param_1[1].d1);
                    /* catch() { ... } // from try @ 00ade8bc with catch @ 00ade808
                       catch() { ... } // from try @ 00ade944 with catch @ 00ade808
                       catch() { ... } // from try @ 00ade9cc with catch @ 00ade808
                       catch() { ... } // from try @ 00adea54 with catch @ 00ade808
                       catch() { ... } // from try @ 00adeab8 with catch @ 00ade808
                       catch() { ... } // from try @ 00adebb0 with catch @ 00ade808 */
            pdVar10 = (dtls1_state_st *)CRYPTO_strndup(pbVar31,sVar32,"ssl/packet_locl.h",0x198);
            param_1[1].d1 = pdVar10;
            if (pdVar10 == (dtls1_state_st *)0x0) goto LAB_00ade410;
            break;
          case 0xd:
            if (local_78 < 2) goto LAB_00adebbc;
            pbVar31 = local_80 + 1;
            uVar4 = CONCAT11(*local_80,*pbVar31);
            uVar22 = (ulong)uVar4;
            if (local_78 - 2 != uVar22) goto LAB_00adebbc;
            pbVar18 = local_80 + 2;
            local_80 = pbVar18 + uVar22;
            local_78 = 0;
            pbVar26 = local_80;
            uVar20 = local_78;
            if (((*pbVar31 & 1) != 0) || (uVar22 == 0)) goto LAB_00adebbc;
            if ((*(int *)&param_1->param == 0) &&
               (((byte)param_1->method->get_timeout[0x68] >> 1 & 1) != 0)) {
              if (param_1->verify_callback == (_func_3151 *)0x0) goto LAB_00adebbc;
              CRYPTO_free(*(void **)(*(long *)&param_1->read_ahead + 0x2c0));
              pvVar11 = CRYPTO_malloc((uint)uVar4,"ssl/t1_lib.c",0xdfb);
              lVar14 = *(long *)&param_1->read_ahead;
              *(void **)(lVar14 + 0x2c0) = pvVar11;
                    /* try { // try from 00ade8b4 to 00bde8bb has its CatchHandler @ 00adebe0 */
              pbVar26 = local_80;
              uVar20 = local_78;
              if (pvVar11 == (void *)0x0) goto LAB_00adebbc;
                    /* try { // try from 00ade8bc to 00bde93b has its CatchHandler @ 00ade808 */
              *(ulong *)(lVar14 + 0x2c8) = uVar22;
              memcpy(pvVar11,pbVar18,uVar22);
            }
            break;
          case 0x10:
            lVar14 = *(long *)&param_1->read_ahead;
            if (*(int *)(lVar14 + 400) != 0) goto switchD_00ade4f0_caseD_1;
            local_94 = 0x32;
                    /* try { // try from 00ade9c4 to 00bde9cb has its CatchHandler @ 00adebc0 */
                    /* try { // try from 00ade9cc to 00bdea4b has its CatchHandler @ 00ade808 */
            if ((local_78 < 2) ||
               (uVar22 = (ulong)CONCAT11(*local_80,local_80[1]), local_78 - 2 != uVar22))
            goto LAB_00adebbc;
            pbVar31 = local_80 + 2;
            local_80 = pbVar31 + uVar22;
            local_78 = 0;
            pbVar18 = pbVar31;
            uVar23 = uVar22;
            pbVar26 = local_80;
            uVar20 = local_78;
            if (uVar22 < 2) goto LAB_00adebbc;
            do {
              uVar25 = (ulong)*pbVar18;
              uVar16 = (uVar23 - 1) - uVar25;
              if ((uVar23 - 1 < uVar25) || (*pbVar18 == 0)) goto LAB_00adebbc;
              pbVar18 = pbVar18 + uVar25 + 1;
              uVar23 = uVar16;
            } while (uVar16 != 0);
            CRYPTO_free(*(void **)(lVar14 + 0x3e0));
            *(undefined8 *)(lVar14 + 1000) = 0;
            *(undefined8 *)(lVar14 + 0x3e0) = 0;
            if (uVar22 != 0) {
              lVar28 = CRYPTO_memdup(pbVar31,uVar22,"ssl/packet_locl.h",0x181);
                    /* try { // try from 00adea4c to 00bdea53 has its CatchHandler @ 00adebb0 */
              *(long *)(lVar14 + 0x3e0) = lVar28;
              if (lVar28 == 0) goto LAB_00ade410;
                    /* try { // try from 00adea54 to 00bdea77 has its CatchHandler @ 00ade808 */
              *(ulong *)(lVar14 + 1000) = uVar22;
            }
            break;
          case 0x23:
                    /* try { // try from 00ade944 to 00bde9c3 has its CatchHandler @ 00ade808 */
            if ((*(code **)(param_1 + 1) != (code *)0x0) &&
               (iVar8 = (**(code **)(param_1 + 1))
                                  (param_1,local_80,local_78 & 0xffffffff,param_1[1].method),
               iVar8 == 0)) goto LAB_00ade410;
            break;
          default:
            if ((sVar3 != 0x3374) || (*(int *)(*(long *)&param_1->read_ahead + 400) != 0))
            goto switchD_00ade4f0_caseD_1;
            *(undefined4 *)(*(long *)&param_1->read_ahead + 0x3c8) = 1;
          }
        }
      } while (1 < uVar34);
    }
    if (param_2[1] != 0) {
LAB_00ade410:
      local_94 = 0x50;
      pbVar26 = local_80;
      uVar20 = local_78;
      goto LAB_00adebbc;
    }
    if (bVar5) goto LAB_00adebf0;
  }
                    /* try { // try from 00adeb90 to 00bdeb97 has its CatchHandler @ 00adebe0 */
  if ((param_1[1].init_off == 0) ||
     ((*(byte *)((long)&param_1->tlsext_debug_arg + 6) >> 2 & 1) != 0)) {
LAB_00adebf0:
                    /* catch() { ... } // from try @ 00adeab0 with catch @ 00adebf0 */
    local_70 = (byte *)CONCAT44(local_70._4_4_,0x70);
    pBVar24 = (BIO *)param_1->mode;
    if ((((pBVar24 == (BIO *)0x0) || (pBVar19 = pBVar24[4].method, pBVar19 == (BIO_METHOD *)0x0)) &&
        ((pBVar24 = param_1[1].bbio, pBVar24 == (BIO *)0x0 ||
         (pBVar19 = pBVar24[4].method, pBVar19 == (BIO_METHOD *)0x0)))) ||
       (iVar8 = (*(code *)pBVar19)(param_1,&local_70,pBVar24[4].callback), iVar8 == 3)) {
      *(undefined4 *)&param_1->tlsext_ellipticcurvelist_length = 0;
      return 1;
    }
    if (iVar8 == 2) {
      ssl3_send_alert(param_1,2,(ulong)local_70 & 0xffffffff);
      ERR_put_error(0x14,0x12e,0xe2,"ssl/t1_lib.c",0x943);
      return 0;
    }
    if (iVar8 != 1) {
      return 1;
    }
                    /* catch() { ... } // from try @ 00adea78 with catch @ 00adec40 */
    ssl3_send_alert(param_1,1,(ulong)local_70 & 0xffffffff);
    return 1;
  }
                    /* try { // try from 00adeb98 to 00bdeb9f has its CatchHandler @ 00adebd0 */
                    /* try { // try from 00adeba0 to 00bdeba7 has its CatchHandler @ 00adebc0 */
                    /* try { // try from 00adeba8 to 00bdebaf has its CatchHandler @ 00adebb0 */
                    /* catch() { ... } // from try @ 00adea4c with catch @ 00adebb0
                       catch() { ... } // from try @ 00adeba8 with catch @ 00adebb0
                       try { // try from 00adebb0 to 00bdec9b has its CatchHandler @ 00ade808 */
  local_94 = 0x28;
  ERR_put_error(0x14,0x140,0x152,"ssl/t1_lib.c",0x92d);
  pbVar26 = local_80;
  uVar20 = local_78;
LAB_00adebbc:
  local_78 = uVar20;
  local_80 = pbVar26;
                    /* catch() { ... } // from try @ 00ade9c4 with catch @ 00adebc0
                       catch() { ... } // from try @ 00adeba0 with catch @ 00adebc0 */
  ssl3_send_alert(param_1,2,local_94);
                    /* catch() { ... } // from try @ 00ade93c with catch @ 00adebd0
                       catch() { ... } // from try @ 00adeb98 with catch @ 00adebd0 */
                    /* catch() { ... } // from try @ 00ade8b4 with catch @ 00adebe0
                       catch() { ... } // from try @ 00adeb90 with catch @ 00adebe0 */
  return 0;
}

