
undefined8 tls_process_key_exchange(long param_1,long *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *d;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  void *ptr;
  long lVar20;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar21;
  DH *dh;
  BIGNUM *pBVar22;
  BIGNUM *a;
  BIGNUM *a_00;
  EVP_MD_CTX *ctx_00;
  int iVar23;
  int line;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long lVar27;
  EVP_MD *local_70;
  int local_64;
  
  local_64 = -1;
                    /* try { // try from 00ad1d28 to 00bd1d2f has its CatchHandler @ 00ad1ea8 */
  d = (void *)*param_2;
  uVar5 = param_2[1];
                    /* try { // try from 00ad1d30 to 00bd1dd3 has its CatchHandler @ 00ad1c8c */
  uVar6 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x14);
  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8));
  *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x3f8) = 0;
  if ((uVar6 & 0x1c8) == 0) goto LAB_00ad1e6c;
  uVar24 = param_2[1] - 2;
  if ((ulong)param_2[1] < 2) {
LAB_00ad1d7c:
    iVar17 = 0x32;
    iVar18 = 0x1a5;
    iVar23 = 0x9f;
    line = 0x52d;
LAB_00ad1d98:
    local_64 = iVar17;
    ERR_put_error(0x14,iVar18,iVar23,"ssl/statem/statem_clnt.c",line);
  }
  else {
    puVar25 = (undefined1 *)*param_2;
    uVar26 = (ulong)CONCAT11(*puVar25,puVar25[1]);
    if (uVar24 < uVar26) goto LAB_00ad1d7c;
                    /* try { // try from 00ad1ddc to 00bd1ec3 has its CatchHandler @ 00ad1c8c */
    *param_2 = (long)(puVar25 + 2 + uVar26);
    param_2[1] = uVar24 - uVar26;
    if (0x80 < uVar26) {
      iVar17 = 0x28;
      iVar18 = 0x1a5;
      iVar23 = 0x92;
      line = 0x539;
      goto LAB_00ad1d98;
    }
    lVar27 = *(long *)(param_1 + 0x178);
    ptr = *(void **)(lVar27 + 0x80);
    if (uVar26 == 0) {
      CRYPTO_free(ptr);
      *(undefined8 *)(*(long *)(param_1 + 0x178) + 0x80) = 0;
LAB_00ad1e6c:
      if ((uVar6 & 0x48) != 0) goto LAB_00ad1e78;
      if ((uVar6 >> 5 & 1) != 0) {
        uVar24 = param_2[1] - 2;
        if (1 < (ulong)param_2[1]) {
          puVar25 = (undefined1 *)*param_2;
          uVar8 = *puVar25;
          uVar9 = puVar25[1];
          uVar26 = (ulong)CONCAT11(uVar8,uVar9);
          uVar16 = uVar24 - uVar26;
          if (uVar26 <= uVar24) {
            puVar1 = puVar25 + 2 + uVar26;
            *param_2 = (long)puVar1;
            param_2[1] = uVar16;
            if (1 < uVar16) {
              uVar10 = *puVar1;
              uVar11 = puVar1[1];
              uVar24 = (ulong)CONCAT11(uVar10,uVar11);
              lVar27 = (uVar16 - 2) - uVar24;
              if (uVar24 <= uVar16 - 2) {
                pbVar3 = puVar1 + 2 + uVar24;
                *param_2 = (long)pbVar3;
                param_2[1] = lVar27;
                if (lVar27 != 0) {
                  bVar7 = *pbVar3;
                  uVar26 = (ulong)bVar7;
                  uVar24 = (lVar27 - 1U) - uVar26;
                  if (uVar26 <= lVar27 - 1U) {
                    pbVar4 = pbVar3 + 1 + uVar26;
                    *param_2 = (long)pbVar4;
                    param_2[1] = uVar24;
                    if (1 < uVar24) {
                      bVar14 = *pbVar4;
                      bVar15 = pbVar4[1];
                      uVar26 = (ulong)CONCAT11(bVar14,bVar15);
                      if (uVar26 <= uVar24 - 2) {
                        *param_2 = (long)(pbVar4 + 2 + uVar26);
                        param_2[1] = (uVar24 - 2) - uVar26;
                        pBVar22 = BN_bin2bn(puVar25 + 2,(uint)CONCAT11(uVar8,uVar9),(BIGNUM *)0x0);
                        *(BIGNUM **)(param_1 + 0x340) = pBVar22;
                        if (pBVar22 != (BIGNUM *)0x0) {
                          pBVar22 = BN_bin2bn(puVar1 + 2,(uint)CONCAT11(uVar10,uVar11),(BIGNUM *)0x0
                                             );
                          *(BIGNUM **)(param_1 + 0x348) = pBVar22;
                          if (pBVar22 != (BIGNUM *)0x0) {
                            pBVar22 = BN_bin2bn(pbVar3 + 1,(uint)bVar7,(BIGNUM *)0x0);
                            *(BIGNUM **)(param_1 + 0x350) = pBVar22;
                            if (pBVar22 != (BIGNUM *)0x0) {
                              pBVar22 = BN_bin2bn(pbVar4 + 2,(uint)CONCAT11(bVar14,bVar15),
                                                  (BIGNUM *)0x0);
                              *(BIGNUM **)(param_1 + 0x358) = pBVar22;
                              if (pBVar22 != (BIGNUM *)0x0) {
                                iVar17 = srp_verify_server_param(param_1,&local_64);
                                if (iVar17 == 0) {
                                  local_64 = 0x32;
                                  iVar17 = 0x1a6;
                                  iVar18 = 0x173;
                                  iVar23 = 0x56f;
                                  goto LAB_00ad1f90;
                                }
                                if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18)
                                    & 3) == 0) goto LAB_00ad1e78;
                                goto LAB_00ad2458;
                              }
                            }
                          }
                        }
                        iVar17 = 0x50;
                        iVar18 = 0x1a6;
                        iVar23 = 3;
                        line = 0x569;
                        goto LAB_00ad1d98;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar17 = 0x32;
        iVar18 = 0x1a6;
        iVar23 = 0x9f;
        line = 0x558;
        goto LAB_00ad1d98;
      }
      if ((uVar6 & 0x102) != 0) {
        uVar24 = param_2[1] - 2;
        if (1 < (ulong)param_2[1]) {
          puVar25 = (undefined1 *)*param_2;
          uVar8 = *puVar25;
          uVar9 = puVar25[1];
          uVar26 = (ulong)CONCAT11(uVar8,uVar9);
          uVar16 = uVar24 - uVar26;
          if (uVar26 <= uVar24) {
            puVar1 = puVar25 + 2 + uVar26;
            *param_2 = (long)puVar1;
            param_2[1] = uVar16;
            if (1 < uVar16) {
              uVar10 = *puVar1;
              uVar11 = puVar1[1];
              uVar24 = (ulong)CONCAT11(uVar10,uVar11);
              uVar26 = (uVar16 - 2) - uVar24;
              if (uVar24 <= uVar16 - 2) {
                puVar2 = puVar1 + 2 + uVar24;
                *param_2 = (long)puVar2;
                param_2[1] = uVar26;
                if (1 < uVar26) {
                  uVar12 = *puVar2;
                  uVar13 = puVar2[1];
                  uVar24 = (ulong)CONCAT11(uVar12,uVar13);
                  if (uVar24 <= uVar26 - 2) {
                    *param_2 = (long)(puVar2 + 2 + uVar24);
                    param_2[1] = (uVar26 - 2) - uVar24;
                    pEVar21 = EVP_PKEY_new();
                    dh = DH_new();
                    if ((pEVar21 == (EVP_PKEY *)0x0) || (dh == (DH *)0x0)) {
                      iVar17 = 0x41;
                      iVar18 = 0x595;
                      local_64 = 0x50;
                      goto LAB_00ad23f4;
                    }
                    pBVar22 = BN_bin2bn(puVar25 + 2,(uint)CONCAT11(uVar8,uVar9),(BIGNUM *)0x0);
                    a = BN_bin2bn(puVar1 + 2,(uint)CONCAT11(uVar10,uVar11),(BIGNUM *)0x0);
                    a_00 = BN_bin2bn(puVar2 + 2,(uint)CONCAT11(uVar12,uVar13),(BIGNUM *)0x0);
                    if (((pBVar22 == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) ||
                       (a_00 == (BIGNUM *)0x0)) {
                      local_64 = 0x50;
                      iVar17 = 3;
                      iVar18 = 0x59f;
LAB_00ad2490:
                      ERR_put_error(0x14,0x1a3,iVar17,"ssl/statem/statem_clnt.c",iVar18);
                    }
                    else {
                      iVar17 = BN_is_zero(pBVar22);
                      if (((iVar17 != 0) || (iVar17 = BN_is_zero(a), iVar17 != 0)) ||
                         (iVar17 = BN_is_zero(a_00), iVar17 != 0)) {
                    /* try { // try from 00ad2320 to 00bd2333 has its CatchHandler @ 00ad2444 */
                        iVar17 = 0x66;
                        iVar18 = 0x5a5;
                        local_64 = 0x32;
                        goto LAB_00ad2490;
                      }
                      iVar17 = DH_set0_pqg(dh,pBVar22,0,a);
                      if (iVar17 == 0) {
                    /* try { // try from 00ad26cc to 00bd27ab has its CatchHandler @ 00ad2630 */
                        local_64 = 0x50;
                        iVar17 = 3;
                        iVar18 = 0x5ab;
                        goto LAB_00ad2490;
                      }
                      iVar17 = DH_set0_key(dh,a_00,0);
                      if (iVar17 == 0) {
                        local_64 = 0x50;
                        ERR_put_error(0x14,0x1a3,3,"ssl/statem/statem_clnt.c",0x5b2);
                        pBVar22 = (BIGNUM *)0x0;
                        a = (BIGNUM *)0x0;
                      }
                      else {
                        uVar19 = DH_security_bits(dh);
                        iVar17 = ssl_security(param_1,0x40007,uVar19,0,dh);
                        if (iVar17 == 0) {
                          local_64 = 0x28;
                          iVar17 = 0x18a;
                          iVar18 = 0x5b9;
                        }
                        else {
                          iVar17 = EVP_PKEY_assign(pEVar21,0x1c,dh);
                          if (iVar17 != 0) {
                            lVar27 = *(long *)(param_1 + 0x90);
                            *(EVP_PKEY **)(lVar27 + 0x3f8) = pEVar21;
                            bVar7 = *(byte *)(*(long *)(lVar27 + 0x228) + 0x18) & 3;
                            goto joined_r0x00ad26b8;
                          }
                          local_64 = 0x50;
                          iVar17 = 6;
                          iVar18 = 0x5bf;
                        }
LAB_00ad23f4:
                        ERR_put_error(0x14,0x1a3,iVar17,"ssl/statem/statem_clnt.c",iVar18);
                        pBVar22 = (BIGNUM *)0x0;
                        a = (BIGNUM *)0x0;
                        a_00 = (BIGNUM *)0x0;
                      }
                    }
                    BN_free(pBVar22);
                    BN_free(a);
                    BN_free(a_00);
                    DH_free(dh);
                    EVP_PKEY_free(pEVar21);
                    goto LAB_00ad1f94;
                  }
                }
              }
            }
          }
        }
        iVar17 = 0x32;
        iVar18 = 0x1a3;
        iVar23 = 0x9f;
        line = 0x58c;
        goto LAB_00ad1d98;
      }
      if ((uVar6 & 0x84) == 0) {
        if (uVar6 != 0) {
          iVar17 = 10;
          iVar18 = 0x16d;
          iVar23 = 0xf4;
          line = 0x661;
          goto LAB_00ad1d98;
        }
        goto LAB_00ad1e78;
      }
      if ((ulong)param_2[1] < 3) {
        local_64 = 0x32;
        iVar17 = 0x1a4;
        iVar18 = 0xa0;
        iVar23 = 0x5ee;
LAB_00ad1f90:
        ERR_put_error(0x14,iVar17,iVar18,"ssl/statem/statem_clnt.c",iVar23);
      }
      else {
        lVar27 = *param_2;
        *param_2 = lVar27 + 3;
        param_2[1] = param_2[1] - 3;
        iVar17 = tls1_check_curve(param_1,lVar27,3);
        if (iVar17 == 0) {
          local_64 = 0x32;
          iVar17 = 0x1a4;
          iVar18 = 0x17a;
                    /* try { // try from 00ad2154 to 00bd215b has its CatchHandler @ 00ad2228 */
          iVar23 = 0x5f7;
          goto LAB_00ad1f90;
        }
        iVar17 = tls1_ec_curve_id2nid(*(undefined1 *)(lVar27 + 2),&local_70);
        if (iVar17 == 0) {
          local_64 = 0x50;
          iVar17 = 0x1a4;
          iVar18 = 0x13a;
          iVar23 = 0x600;
                    /* try { // try from 00ad217c to 00bd2183 has its CatchHandler @ 00ad224c */
          goto LAB_00ad1f90;
        }
                    /* try { // try from 00ad20f8 to 00bd2153 has its CatchHandler @ 00ad20f8
                       catch() { ... } // from try @ 00ad20f8 with catch @ 00ad20f8
                       catch() { ... } // from try @ 00ad21e8 with catch @ 00ad20f8 */
        if (((uint)local_70 & 3) == 2) {
          pEVar21 = EVP_PKEY_new();
          if ((pEVar21 != (EVP_PKEY *)0x0) &&
             (iVar17 = EVP_PKEY_set_type(pEVar21,iVar17), iVar17 != 0)) {
            *(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8) = pEVar21;
            lVar27 = param_2[1];
joined_r0x00ad21ec:
            if (lVar27 != 0) {
              uVar24 = (ulong)*(byte *)*param_2;
              if (uVar24 <= lVar27 - 1U) {
                *param_2 = (long)((byte *)*param_2 + uVar24 + 1);
                param_2[1] = (lVar27 - 1U) - uVar24;
                iVar17 = EVP_PKEY_set1_tls_encodedpoint
                                   (*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x3f8));
                if (iVar17 == 0) {
                  local_64 = 0x32;
                  iVar17 = 0x1a4;
                  iVar18 = 0x132;
                  iVar23 = 0x628;
                }
                else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad2320 with catch @ 00ad2444
                        */
                  bVar7 = *(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18) & 9;
joined_r0x00ad26b8:
                  if (bVar7 != 0) {
LAB_00ad2458:
                    pEVar21 = (EVP_PKEY *)
                              X509_get0_pubkey(*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x98));
                    if (pEVar21 != (EVP_PKEY *)0x0) {
                      local_70 = (EVP_MD *)0x0;
                      uVar24 = param_2[1];
                      uVar26 = uVar5 - uVar24;
                      if (((long)uVar26 < 0) || (uVar5 < uVar26)) {
                        local_64 = 0x50;
                        iVar17 = 0x16d;
                        iVar18 = 0x44;
                        iVar23 = 0x674;
                      }
                      else if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 1 & 1)
                               == 0) {
                        iVar17 = EVP_PKEY_id(pEVar21);
                        if (iVar17 == 6) {
                          local_70 = (EVP_MD *)EVP_md5_sha1();
                        }
                        else {
                          local_70 = EVP_sha1();
                        }
LAB_00ad25a8:
                        uVar5 = param_2[1] - 2;
                        if (1 < (ulong)param_2[1]) {
                          puVar25 = (undefined1 *)*param_2;
                          uVar8 = *puVar25;
                          uVar9 = puVar25[1];
                          uVar24 = (ulong)CONCAT11(uVar8,uVar9);
                          lVar27 = uVar5 - uVar24;
                          if (uVar24 <= uVar5) {
                            *param_2 = (long)(puVar25 + 2 + uVar24);
                            param_2[1] = lVar27;
                            if (lVar27 == 0) {
                              iVar17 = EVP_PKEY_size(pEVar21);
                              if (iVar17 < 0) {
                                local_64 = 0x50;
                                iVar17 = 0x16d;
                                iVar18 = 0x44;
                    /* catch() { ... } // from try @ 00ad26c8 with catch @ 00ad2798 */
                                iVar23 = 0x69a;
                              }
                              else if ((ulong)(long)iVar17 < uVar24) {
                                local_64 = 0x32;
                                iVar17 = 0x16d;
                                iVar18 = 0x108;
                                iVar23 = 0x6a5;
                              }
                              else {
                                ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
                                if (ctx_00 == (EVP_MD_CTX *)0x0) {
                                  local_64 = 0x50;
                                  iVar17 = 0x16d;
                                  iVar18 = 0x41;
                                  iVar23 = 0x6ac;
                                }
                                else {
                    /* try { // try from 00ad27ac to 00bd286f has its CatchHandler @ 00ad27ac
                       catch() { ... } // from try @ 00ad27ac with catch @ 00ad27ac
                       catch() { ... } // from try @ 00ad2874 with catch @ 00ad27ac */
                                  iVar17 = EVP_DigestInit_ex(ctx_00,local_70,(ENGINE *)0x0);
                                  if ((((iVar17 < 1) ||
                                       (iVar17 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 
                                                  + 0x90) + 0xb0),0x20), iVar17 < 1)) ||
                                      (iVar17 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 +
                                                                                          0x90) +
                                                                                0x90),0x20),
                                      iVar17 < 1)) ||
                                     (iVar17 = EVP_DigestUpdate(ctx_00,d,uVar26), iVar17 < 1)) {
                                    EVP_MD_CTX_free(ctx_00);
                    /* try { // try from 00ad2870 to 00bd2873 has its CatchHandler @ 00ad295c */
                    /* try { // try from 00ad2874 to 00bd296f has its CatchHandler @ 00ad27ac */
                                    local_64 = 0x50;
                                    iVar17 = 0x16d;
                                    iVar18 = 6;
                                    iVar23 = 0x6b9;
                                  }
                                  else {
                                    iVar17 = EVP_VerifyFinal(ctx_00,puVar25 + 2,
                                                             (uint)CONCAT11(uVar8,uVar9),pEVar21);
                                    EVP_MD_CTX_free(ctx_00);
                                    if (0 < iVar17) {
                                      return 3;
                                    }
                                    local_64 = 0x33;
                                    iVar17 = 0x16d;
                                    iVar18 = 0x7b;
                                    iVar23 = 0x6c1;
                                  }
                                }
                              }
                              goto LAB_00ad1f90;
                            }
                          }
                        }
                        local_64 = 0x32;
                        iVar17 = 0x16d;
                        iVar18 = 0x9f;
                        iVar23 = 0x694;
                      }
                      else {
                        if (1 < uVar24) {
                          lVar27 = *param_2;
                          *param_2 = lVar27 + 2;
                          param_2[1] = uVar24 - 2;
                          iVar17 = tls12_check_peer_sigalg(&local_70,param_1,lVar27,pEVar21);
                          if (iVar17 == 0) {
                            local_64 = 0x32;
                    /* try { // try from 00ad26c8 to 00bd26cb has its CatchHandler @ 00ad2798 */
                          }
                          else {
                            if (iVar17 != -1) goto LAB_00ad25a8;
                    /* try { // try from 00ad2630 to 00bd26c7 has its CatchHandler @ 00ad2630
                       catch() { ... } // from try @ 00ad2630 with catch @ 00ad2630
                       catch() { ... } // from try @ 00ad26cc with catch @ 00ad2630 */
                            local_64 = 0x50;
                          }
                          goto LAB_00ad1f94;
                        }
                        local_64 = 0x32;
                        iVar17 = 0x16d;
                        iVar18 = 0xa0;
                        iVar23 = 0x67d;
                      }
                      goto LAB_00ad1f90;
                    }
                  }
LAB_00ad1e78:
                  if (((uVar6 & 0x1c8) == 0) &&
                     ((*(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18) & 0x44) == 0))
                  {
                    /* catch() { ... } // from try @ 00ad1dd4 with catch @ 00ad1e94 */
                    iVar17 = ssl3_check_cert_and_algorithm(param_1);
                    if (iVar17 == 0) {
                      iVar17 = 0x32;
                      local_64 = iVar17;
                      goto LAB_00ad1da0;
                    }
                    /* catch() { ... } // from try @ 00ad1d28 with catch @ 00ad1ea8 */
                    local_64 = 0x50;
                    iVar17 = 0x16d;
                    iVar18 = 0x44;
                    iVar23 = 0x6cd;
                  }
                  else {
                    if (param_2[1] == 0) {
                      return 3;
                    }
                    iVar17 = 0x16d;
                    iVar18 = 0x99;
                    iVar23 = 0x6d6;
                    local_64 = 0x32;
                  }
                }
                goto LAB_00ad1f90;
              }
            }
            local_64 = 0x32;
            iVar17 = 0x1a4;
            iVar18 = 0x9f;
                    /* catch() { ... } // from try @ 00ad21e4 with catch @ 00ad2220 */
            iVar23 = 0x620;
                    /* catch() { ... } // from try @ 00ad21d8 with catch @ 00ad2224 */
            goto LAB_00ad1f90;
          }
          local_64 = 0x50;
          ERR_put_error(0x14,0x1a4,6,"ssl/statem/statem_clnt.c",0x609);
          EVP_PKEY_free(pEVar21);
        }
        else {
                    /* try { // try from 00ad2188 to 00bd218b has its CatchHandler @ 00ad2230 */
          ctx = EVP_PKEY_CTX_new_id(0x198,(ENGINE *)0x0);
                    /* try { // try from 00ad21b0 to 00bd21bb has its CatchHandler @ 00ad224c */
                    /* try { // try from 00ad21d8 to 00bd21df has its CatchHandler @ 00ad2224 */
          if (((ctx != (EVP_PKEY_CTX *)0x0) && (iVar18 = EVP_PKEY_paramgen_init(ctx), 0 < iVar18))
             && ((iVar17 = EVP_PKEY_CTX_ctrl(ctx,0x198,6,0x1001,iVar17,(void *)0x0), 0 < iVar17 &&
                 (iVar17 = EVP_PKEY_paramgen(ctx,(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8)),
                 0 < iVar17)))) {
                    /* try { // try from 00ad21e4 to 00bd21e7 has its CatchHandler @ 00ad2220 */
            EVP_PKEY_CTX_free(ctx);
                    /* try { // try from 00ad21e8 to 00bd229f has its CatchHandler @ 00ad20f8 */
            lVar27 = param_2[1];
            goto joined_r0x00ad21ec;
          }
                    /* catch() { ... } // from try @ 00ad2154 with catch @ 00ad2228 */
                    /* catch() { ... } // from try @ 00ad2188 with catch @ 00ad2230 */
          local_64 = 0x50;
          ERR_put_error(0x14,0x1a4,6,"ssl/statem/statem_clnt.c",0x616);
                    /* catch() { ... } // from try @ 00ad217c with catch @ 00ad224c
                       catch() { ... } // from try @ 00ad21b0 with catch @ 00ad224c */
          EVP_PKEY_CTX_free(ctx);
        }
      }
LAB_00ad1f94:
      iVar17 = local_64;
      if (local_64 == -1) goto LAB_00ad1db0;
    }
    else {
      CRYPTO_free(ptr);
      lVar20 = CRYPTO_strndup(puVar25 + 2,uVar26,"ssl/statem/../packet_locl.h",0x198);
      *(long *)(lVar27 + 0x80) = lVar20;
      if (lVar20 != 0) goto LAB_00ad1e6c;
      iVar17 = 0x50;
      local_64 = iVar17;
    }
  }
LAB_00ad1da0:
  ssl3_send_alert(param_1,2,iVar17);
LAB_00ad1db0:
  ossl_statem_set_error(param_1);
                    /* try { // try from 00ad1dd4 to 00bd1ddb has its CatchHandler @ 00ad1e94 */
  return 0;
}

