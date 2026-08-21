
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
  d = (void *)*param_2;
  uVar5 = param_2[1];
  uVar6 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x14);
  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8));
                    /* try { // try from 00ae0c00 to 00be0d63 has its CatchHandler @ 00ae0c00
                       catch() { ... } // from try @ 00ae0c00 with catch @ 00ae0c00
                       catch() { ... } // from try @ 00ae0dc8 with catch @ 00ae0c00 */
  *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x3f8) = 0;
  if ((uVar6 & 0x1c8) == 0) goto LAB_00ae0d20;
  uVar24 = param_2[1] - 2;
  if ((ulong)param_2[1] < 2) {
LAB_00ae0c30:
    iVar17 = 0x32;
    iVar18 = 0x1a5;
    iVar23 = 0x9f;
    line = 0x52d;
LAB_00ae0c4c:
    local_64 = iVar17;
    ERR_put_error(0x14,iVar18,iVar23,"ssl/statem/statem_clnt.c",line);
  }
  else {
    puVar25 = (undefined1 *)*param_2;
    uVar26 = (ulong)CONCAT11(*puVar25,puVar25[1]);
    if (uVar24 < uVar26) goto LAB_00ae0c30;
    *param_2 = (long)(puVar25 + 2 + uVar26);
    param_2[1] = uVar24 - uVar26;
    if (0x80 < uVar26) {
      iVar17 = 0x28;
      iVar18 = 0x1a5;
      iVar23 = 0x92;
      line = 0x539;
      goto LAB_00ae0c4c;
    }
    lVar27 = *(long *)(param_1 + 0x178);
    ptr = *(void **)(lVar27 + 0x80);
    if (uVar26 == 0) {
      CRYPTO_free(ptr);
      *(undefined8 *)(*(long *)(param_1 + 0x178) + 0x80) = 0;
LAB_00ae0d20:
      if ((uVar6 & 0x48) != 0) goto LAB_00ae0d2c;
      if ((uVar6 >> 5 & 1) != 0) {
        uVar24 = param_2[1] - 2;
        if (1 < (ulong)param_2[1]) {
          puVar25 = (undefined1 *)*param_2;
          uVar8 = *puVar25;
          uVar9 = puVar25[1];
          uVar26 = (ulong)CONCAT11(uVar8,uVar9);
          uVar16 = uVar24 - uVar26;
                    /* catch() { ... } // from try @ 00ae0d64 with catch @ 00ae0e78 */
          if (uVar26 <= uVar24) {
            puVar1 = puVar25 + 2 + uVar26;
            *param_2 = (long)puVar1;
            param_2[1] = uVar16;
            if (1 < uVar16) {
              uVar10 = *puVar1;
              uVar11 = puVar1[1];
              uVar24 = (ulong)CONCAT11(uVar10,uVar11);
              lVar27 = (uVar16 - 2) - uVar24;
                    /* catch() { ... } // from try @ 00ae10ac with catch @ 00ae0ea0 */
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
                                  goto LAB_00ae0e44;
                                }
                                if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18)
                                    & 3) == 0) goto LAB_00ae0d2c;
                                goto LAB_00ae130c;
                              }
                            }
                          }
                        }
                        iVar17 = 0x50;
                        iVar18 = 0x1a6;
                        iVar23 = 3;
                        line = 0x569;
                        goto LAB_00ae0c4c;
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
        goto LAB_00ae0c4c;
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
                    /* try { // try from 00ae0db8 to 00be0dc7 has its CatchHandler @ 00ae0e3c */
            *param_2 = (long)puVar1;
            param_2[1] = uVar16;
            if (1 < uVar16) {
              uVar10 = *puVar1;
              uVar11 = puVar1[1];
                    /* try { // try from 00ae0dc8 to 00be0e9f has its CatchHandler @ 00ae0c00 */
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
                    /* catch() { ... } // from try @ 00ae0fec with catch @ 00ae1140 */
                    /* catch() { ... } // from try @ 00ae0f94 with catch @ 00ae1148
                       catch() { ... } // from try @ 00ae10a0 with catch @ 00ae1148 */
                    *param_2 = (long)(puVar2 + 2 + uVar24);
                    param_2[1] = (uVar26 - 2) - uVar24;
                    pEVar21 = EVP_PKEY_new();
                    /* catch() { ... } // from try @ 00ae1038 with catch @ 00ae1150 */
                    dh = DH_new();
                    if ((pEVar21 == (EVP_PKEY *)0x0) || (dh == (DH *)0x0)) {
                      iVar17 = 0x41;
                    /* try { // try from 00ae12a0 to 00be12e7 has its CatchHandler @ 00ae12a0
                       catch() { ... } // from try @ 00ae12a0 with catch @ 00ae12a0
                       catch() { ... } // from try @ 00ae134c with catch @ 00ae12a0 */
                      iVar18 = 0x595;
                      local_64 = 0x50;
                      goto LAB_00ae12a8;
                    }
                    pBVar22 = BN_bin2bn(puVar25 + 2,(uint)CONCAT11(uVar8,uVar9),(BIGNUM *)0x0);
                    a = BN_bin2bn(puVar1 + 2,(uint)CONCAT11(uVar10,uVar11),(BIGNUM *)0x0);
                    a_00 = BN_bin2bn(puVar2 + 2,(uint)CONCAT11(uVar12,uVar13),(BIGNUM *)0x0);
                    if (((pBVar22 == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) ||
                       (a_00 == (BIGNUM *)0x0)) {
                      local_64 = 0x50;
                    /* try { // try from 00ae133c to 00be134b has its CatchHandler @ 00ae13ac */
                      iVar17 = 3;
                      iVar18 = 0x59f;
LAB_00ae1344:
                      ERR_put_error(0x14,0x1a3,iVar17,"ssl/statem/statem_clnt.c",iVar18);
                    }
                    else {
                      iVar17 = BN_is_zero(pBVar22);
                      if (((iVar17 != 0) || (iVar17 = BN_is_zero(a), iVar17 != 0)) ||
                         (iVar17 = BN_is_zero(a_00), iVar17 != 0)) {
                        iVar17 = 0x66;
                        iVar18 = 0x5a5;
                        local_64 = 0x32;
                        goto LAB_00ae1344;
                      }
                      iVar17 = DH_set0_pqg(dh,pBVar22,0,a);
                      if (iVar17 == 0) {
                        local_64 = 0x50;
                        iVar17 = 3;
                        iVar18 = 0x5ab;
                        goto LAB_00ae1344;
                      }
                    /* try { // try from 00ae1504 to 00be1547 has its CatchHandler @ 00ae1504
                       catch() { ... } // from try @ 00ae1504 with catch @ 00ae1504
                       catch() { ... } // from try @ 00ae154c with catch @ 00ae1504 */
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
                    /* try { // try from 00ae1548 to 00be154b has its CatchHandler @ 00ae155c */
                    /* try { // try from 00ae154c to 00be156f has its CatchHandler @ 00ae1504 */
                          iVar17 = EVP_PKEY_assign(pEVar21,0x1c,dh);
                          if (iVar17 != 0) {
                            lVar27 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 00ae1548 with catch @ 00ae155c */
                            *(EVP_PKEY **)(lVar27 + 0x3f8) = pEVar21;
                            bVar7 = *(byte *)(*(long *)(lVar27 + 0x228) + 0x18) & 3;
                            goto joined_r0x00ae156c;
                          }
                          local_64 = 0x50;
                          iVar17 = 6;
                          iVar18 = 0x5bf;
                        }
LAB_00ae12a8:
                        ERR_put_error(0x14,0x1a3,iVar17,"ssl/statem/statem_clnt.c",iVar18);
                        pBVar22 = (BIGNUM *)0x0;
                        a = (BIGNUM *)0x0;
                        a_00 = (BIGNUM *)0x0;
                      }
                    }
                    /* try { // try from 00ae134c to 00be140f has its CatchHandler @ 00ae12a0 */
                    BN_free(pBVar22);
                    BN_free(a);
                    BN_free(a_00);
                    DH_free(dh);
                    EVP_PKEY_free(pEVar21);
                    goto LAB_00ae0e48;
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
        goto LAB_00ae0c4c;
      }
                    /* try { // try from 00ae0f14 to 00be0f1f has its CatchHandler @ 00ae1138 */
      if ((uVar6 & 0x84) == 0) {
        if (uVar6 != 0) {
          iVar17 = 10;
          iVar18 = 0x16d;
          iVar23 = 0xf4;
          line = 0x661;
          goto LAB_00ae0c4c;
        }
        goto LAB_00ae0d2c;
      }
      if ((ulong)param_2[1] < 3) {
        local_64 = 0x32;
        iVar17 = 0x1a4;
        iVar18 = 0xa0;
        iVar23 = 0x5ee;
LAB_00ae0e44:
        ERR_put_error(0x14,iVar17,iVar18,"ssl/statem/statem_clnt.c",iVar23);
      }
      else {
        lVar27 = *param_2;
        *param_2 = lVar27 + 3;
        param_2[1] = param_2[1] - 3;
        iVar17 = tls1_check_curve(param_1,lVar27,3);
                    /* try { // try from 00ae0f94 to 00be0fd3 has its CatchHandler @ 00ae1148 */
        if (iVar17 == 0) {
                    /* try { // try from 00ae0fec to 00be101b has its CatchHandler @ 00ae1140 */
          local_64 = 0x32;
          iVar17 = 0x1a4;
          iVar18 = 0x17a;
          iVar23 = 0x5f7;
          goto LAB_00ae0e44;
        }
        iVar17 = tls1_ec_curve_id2nid(*(undefined1 *)(lVar27 + 2),&local_70);
        if (iVar17 == 0) {
          local_64 = 0x50;
          iVar17 = 0x1a4;
          iVar18 = 0x13a;
          iVar23 = 0x600;
          goto LAB_00ae0e44;
        }
        if (((uint)local_70 & 3) == 2) {
          pEVar21 = EVP_PKEY_new();
          if ((pEVar21 != (EVP_PKEY *)0x0) &&
             (iVar17 = EVP_PKEY_set_type(pEVar21,iVar17), iVar17 != 0)) {
            *(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8) = pEVar21;
            lVar27 = param_2[1];
joined_r0x00ae10a0:
                    /* try { // try from 00ae10a0 to 00be10ab has its CatchHandler @ 00ae1148 */
            if (lVar27 != 0) {
                    /* try { // try from 00ae10ac to 00be11c3 has its CatchHandler @ 00ae0ea0 */
              uVar24 = (ulong)*(byte *)*param_2;
              if (uVar24 <= lVar27 - 1U) {
                *param_2 = (long)((byte *)*param_2 + uVar24 + 1);
                param_2[1] = (lVar27 - 1U) - uVar24;
                    /* try { // try from 00ae12e8 to 00be12ef has its CatchHandler @ 00ae13e8 */
                iVar17 = EVP_PKEY_set1_tls_encodedpoint
                                   (*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x3f8));
                if (iVar17 == 0) {
                  local_64 = 0x32;
                  iVar17 = 0x1a4;
                  iVar18 = 0x132;
                  iVar23 = 0x628;
                }
                else {
                  bVar7 = *(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18) & 9;
joined_r0x00ae156c:
                  if (bVar7 != 0) {
LAB_00ae130c:
                    pEVar21 = (EVP_PKEY *)
                              X509_get0_pubkey(*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x98));
                    if (pEVar21 != (EVP_PKEY *)0x0) {
                      local_70 = (EVP_MD *)0x0;
                      uVar24 = param_2[1];
                      uVar26 = uVar5 - uVar24;
                    /* catch() { ... } // from try @ 00ae133c with catch @ 00ae13ac */
                      if (((long)uVar26 < 0) || (uVar5 < uVar26)) {
                    /* catch() { ... } // from try @ 00ae12e8 with catch @ 00ae13e8 */
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
                    /* try { // try from 00ae1454 to 00be1457 has its CatchHandler @ 00ae1484 */
                          local_70 = EVP_sha1();
                        }
LAB_00ae145c:
                        uVar5 = param_2[1] - 2;
                        if (1 < (ulong)param_2[1]) {
                          puVar25 = (undefined1 *)*param_2;
                          uVar8 = *puVar25;
                          uVar9 = puVar25[1];
                          uVar24 = (ulong)CONCAT11(uVar8,uVar9);
                          lVar27 = uVar5 - uVar24;
                          if (uVar24 <= uVar5) {
                    /* catch() { ... } // from try @ 00ae1454 with catch @ 00ae1484 */
                            *param_2 = (long)(puVar25 + 2 + uVar24);
                            param_2[1] = lVar27;
                            if (lVar27 == 0) {
                              iVar17 = EVP_PKEY_size(pEVar21);
                              if (iVar17 < 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae1758 with catch @ 00ae1630
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae17dc with catch @ 00ae1630
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae17ec with catch @ 00ae1630
                        */
                                local_64 = 0x50;
                                iVar17 = 0x16d;
                                iVar18 = 0x44;
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
                    /* try { // try from 00ae1754 to 00be1757 has its CatchHandler @ 00ae1794 */
                    /* try { // try from 00ae1758 to 00be17d7 has its CatchHandler @ 00ae1630 */
                                  iVar17 = 0x16d;
                                  iVar18 = 0x41;
                                  iVar23 = 0x6ac;
                                }
                                else {
                                  iVar17 = EVP_DigestInit_ex(ctx_00,local_70,(ENGINE *)0x0);
                    /* try { // try from 00ae1684 to 00be1687 has its CatchHandler @ 00ae1798 */
                    /* try { // try from 00ae169c to 00be16a3 has its CatchHandler @ 00ae17b4 */
                    /* try { // try from 00ae16a4 to 00be16b3 has its CatchHandler @ 00ae17a4 */
                                  if ((((iVar17 < 1) ||
                                       (iVar17 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 
                                                  + 0x90) + 0xb0),0x20), iVar17 < 1)) ||
                                      (iVar17 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 +
                                                                                          0x90) +
                                                                                0x90),0x20),
                                      iVar17 < 1)) ||
                                     (iVar17 = EVP_DigestUpdate(ctx_00,d,uVar26), iVar17 < 1)) {
                                    EVP_MD_CTX_free(ctx_00);
                    /* try { // try from 00ae1724 to 00be1737 has its CatchHandler @ 00ae17b8 */
                                    local_64 = 0x50;
                                    iVar17 = 0x16d;
                                    iVar18 = 6;
                                    iVar23 = 0x6b9;
                                  }
                                  else {
                                    iVar17 = EVP_VerifyFinal(ctx_00,puVar25 + 2,
                                                             (uint)CONCAT11(uVar8,uVar9),pEVar21);
                    /* try { // try from 00ae16dc to 00be16e7 has its CatchHandler @ 00ae17b8 */
                                    EVP_MD_CTX_free(ctx_00);
                    /* try { // try from 00ae16e8 to 00be1707 has its CatchHandler @ 00ae17a0 */
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
                              goto LAB_00ae0e44;
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
                          }
                          else {
                            if (iVar17 != -1) goto LAB_00ae145c;
                            local_64 = 0x50;
                          }
                          goto LAB_00ae0e48;
                        }
                    /* catch() { ... } // from try @ 00ae1458 with catch @ 00ae1410 */
                        local_64 = 0x32;
                        iVar17 = 0x16d;
                        iVar18 = 0xa0;
                        iVar23 = 0x67d;
                      }
                      goto LAB_00ae0e44;
                    }
                  }
LAB_00ae0d2c:
                  if (((uVar6 & 0x1c8) == 0) &&
                     ((*(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18) & 0x44) == 0))
                  {
                    iVar17 = ssl3_check_cert_and_algorithm(param_1);
                    if (iVar17 == 0) {
                      iVar17 = 0x32;
                      local_64 = iVar17;
                      goto LAB_00ae0c54;
                    }
                    local_64 = 0x50;
                    /* try { // try from 00ae0d64 to 00be0d6b has its CatchHandler @ 00ae0e78 */
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
                    /* catch() { ... } // from try @ 00ae0db8 with catch @ 00ae0e3c */
                    iVar23 = 0x6d6;
                    local_64 = 0x32;
                  }
                }
                goto LAB_00ae0e44;
              }
            }
            local_64 = 0x32;
            iVar17 = 0x1a4;
            iVar18 = 0x9f;
            iVar23 = 0x620;
            goto LAB_00ae0e44;
          }
          local_64 = 0x50;
          ERR_put_error(0x14,0x1a4,6,"ssl/statem/statem_clnt.c",0x609);
          EVP_PKEY_free(pEVar21);
                    /* catch() { ... } // from try @ 00ae0f14 with catch @ 00ae1138 */
        }
        else {
                    /* try { // try from 00ae1038 to 00be108f has its CatchHandler @ 00ae1150 */
          ctx = EVP_PKEY_CTX_new_id(0x198,(ENGINE *)0x0);
          if (((ctx != (EVP_PKEY_CTX *)0x0) && (iVar18 = EVP_PKEY_paramgen_init(ctx), 0 < iVar18))
             && ((iVar17 = EVP_PKEY_CTX_ctrl(ctx,0x198,6,0x1001,iVar17,(void *)0x0), 0 < iVar17 &&
                 (iVar17 = EVP_PKEY_paramgen(ctx,(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8)),
                 0 < iVar17)))) {
            EVP_PKEY_CTX_free(ctx);
            lVar27 = param_2[1];
            goto joined_r0x00ae10a0;
          }
          local_64 = 0x50;
          ERR_put_error(0x14,0x1a4,6,"ssl/statem/statem_clnt.c",0x616);
          EVP_PKEY_CTX_free(ctx);
        }
      }
LAB_00ae0e48:
      iVar17 = local_64;
      if (local_64 == -1) goto LAB_00ae0c64;
    }
    else {
      CRYPTO_free(ptr);
      lVar20 = CRYPTO_strndup(puVar25 + 2,uVar26,"ssl/statem/../packet_locl.h",0x198);
      *(long *)(lVar27 + 0x80) = lVar20;
      if (lVar20 != 0) goto LAB_00ae0d20;
      iVar17 = 0x50;
      local_64 = iVar17;
    }
  }
LAB_00ae0c54:
  ssl3_send_alert(param_1,2,iVar17);
LAB_00ae0c64:
  ossl_statem_set_error(param_1);
  return 0;
}

