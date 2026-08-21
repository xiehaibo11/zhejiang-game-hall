
undefined8
tls_process_client_key_exchange
          (undefined1 param_1 [16],undefined1 param_2 [16],uint *param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [15];
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  RSA *rsa;
  EVP_PKEY *to;
  BIGNUM *pBVar17;
  byte *pbVar18;
  EVP_PKEY_CTX *ctx;
  char *pcVar19;
  int iVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  EVP_PKEY *pEVar29;
  uchar *puVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined8 uVar44;
  byte bVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  byte local_170 [48];
  byte abStack_140 [208];
  uchar *local_70;
  size_t sStack_68;
  int local_60;
  int local_5c;
  size_t local_58;
  
  lVar21 = *(long *)(param_3 + 0x24);
  uVar2 = *(uint *)(*(long *)(lVar21 + 0x228) + 0x14);
  if ((uVar2 & 0x1c8) == 0) {
LAB_00ae8560:
    if ((uVar2 >> 3 & 1) == 0) {
      if ((uVar2 & 0x41) == 0) {
        if ((uVar2 & 0x102) == 0) {
                    /* catch() { ... } // from try @ 00ae86ec with catch @ 00ae8738 */
          if ((uVar2 & 0x84) != 0) {
            if (param_4[1] == 0) {
              iVar14 = 0x19c;
              iVar15 = 0x137;
              iVar20 = 0x93c;
              goto LAB_00ae8714;
            }
            pEVar29 = *(EVP_PKEY **)(lVar21 + 0x230);
            uVar28 = param_4[1] - 1;
            pbVar18 = (byte *)*param_4 + 1;
            uVar26 = (ulong)*(byte *)*param_4;
            *param_4 = (long)pbVar18;
            param_4[1] = uVar28;
            if (uVar26 <= uVar28) {
              *param_4 = (long)(pbVar18 + uVar26);
              param_4[1] = uVar28 - uVar26;
              if (uVar28 - uVar26 != 0) goto LAB_00ae8770;
              to = EVP_PKEY_new();
                    /* try { // try from 00ae8b90 to 00be8c43 has its CatchHandler @ 00ae8b90
                       catch() { ... } // from try @ 00ae8b90 with catch @ 00ae8b90
                       catch() { ... } // from try @ 00ae8c54 with catch @ 00ae8b90 */
              if ((to == (EVP_PKEY *)0x0) ||
                 (iVar14 = EVP_PKEY_copy_parameters(to,pEVar29), iVar14 < 1)) {
                iVar14 = 0x19c;
                iVar15 = 6;
                iVar20 = 0x950;
                goto LAB_00ae8e20;
              }
              iVar14 = EVP_PKEY_set1_tls_encodedpoint(to,pbVar18,uVar26);
              if (iVar14 != 0) {
                iVar14 = ssl_derive(param_3,pEVar29,to);
                if (iVar14 != 0) {
LAB_00ae8bd4:
                  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_3 + 0x24) + 0x230));
                  *(undefined8 *)(*(long *)(param_3 + 0x24) + 0x230) = 0;
                  EVP_PKEY_free(to);
                  return 2;
                }
                iVar14 = 0x19c;
                iVar15 = 0x95c;
LAB_00ae9048:
                ERR_put_error(0x14,iVar14,0x44,"ssl/statem/statem_srvr.c",iVar15);
                iVar14 = 0x50;
                goto LAB_00ae8720;
              }
              ERR_put_error(0x14,0x19c,0x10,"ssl/statem/statem_srvr.c",0x955);
              goto LAB_00ae871c;
            }
LAB_00ae8770:
                    /* try { // try from 00ae877c to 00be884f has its CatchHandler @ 00ae877c
                       catch() { ... } // from try @ 00ae877c with catch @ 00ae877c
                       catch() { ... } // from try @ 00ae886c with catch @ 00ae877c */
            ERR_put_error(0x14,0x19c,0x9f,"ssl/statem/statem_srvr.c",0x94b);
            to = (EVP_PKEY *)0x0;
            iVar14 = 0x32;
            goto LAB_00ae8720;
          }
          if ((uVar2 >> 5 & 1) != 0) {
            uVar28 = param_4[1] - 2;
            if (1 < (ulong)param_4[1]) {
              puVar22 = (undefined1 *)*param_4;
              uVar3 = *puVar22;
              uVar4 = puVar22[1];
              puVar30 = puVar22 + 2;
              *param_4 = (long)puVar30;
              param_4[1] = uVar28;
              uVar26 = (ulong)(uint)CONCAT11(uVar3,uVar4);
              if (uVar26 <= uVar28) {
                *param_4 = (long)(puVar30 + uVar26);
                param_4[1] = uVar28 - uVar26;
                pBVar17 = BN_bin2bn(puVar30,(uint)CONCAT11(uVar3,uVar4),(BIGNUM *)0x0);
                *(BIGNUM **)(param_3 + 0xd8) = pBVar17;
                if (pBVar17 == (BIGNUM *)0x0) {
                  iVar14 = 3;
                  iVar15 = 0x97c;
                }
                else {
                  iVar14 = BN_ucmp(pBVar17,*(BIGNUM **)(param_3 + 0xd0));
                  if ((-1 < iVar14) ||
                     (iVar14 = BN_is_zero(*(undefined8 *)(param_3 + 0xd8)), iVar14 != 0)) {
                    ERR_put_error(0x14,0x1a0,0x173,"ssl/statem/statem_srvr.c",0x981);
                    iVar14 = 0x2f;
                    /* try { // try from 00ae8c44 to 00be8c53 has its CatchHandler @ 00ae8c58 */
                    goto LAB_00ae89a4;
                  }
                  CRYPTO_free(*(void **)(*(long *)(param_3 + 0x5e) + 0x148));
                  pcVar19 = CRYPTO_strdup(*(char **)(param_3 + 0xce),"ssl/statem/statem_srvr.c",
                                          0x985);
                  *(char **)(*(long *)(param_3 + 0x5e) + 0x148) = pcVar19;
                  if (pcVar19 == (char *)0x0) {
                    iVar14 = 0x41;
                    iVar15 = 0x987;
                  }
                  else {
                    iVar14 = srp_generate_server_master_secret(param_3);
                    if (iVar14 != 0) {
                      return 2;
                    }
                    iVar14 = 0x44;
                    iVar15 = 0x98c;
                  }
                }
                ERR_put_error(0x14,0x1a0,iVar14,"ssl/statem/statem_srvr.c",iVar15);
                goto LAB_00ae89b4;
              }
            }
                    /* try { // try from 00ae8950 to 00be8957 has its CatchHandler @ 00ae89cc */
                    /* try { // try from 00ae8958 to 00be8a0b has its CatchHandler @ 00ae88cc */
            iVar14 = 0x1a0;
            iVar15 = 0x15b;
            iVar20 = 0x978;
            goto LAB_00ae8410;
          }
          if ((uVar2 >> 4 & 1) == 0) {
            iVar14 = 0x17e;
            iVar15 = 0xf9;
            iVar20 = 0xa28;
            goto LAB_00ae86f0;
          }
          local_58 = 0x20;
          uVar2 = *(uint *)(*(long *)(lVar21 + 0x228) + 0x18);
          if ((uVar2 >> 7 & 1) == 0) {
            if ((uVar2 >> 5 & 1) == 0) {
              pEVar29 = (EVP_PKEY *)0x0;
            }
            else {
              lVar21 = *(long *)(param_3 + 0x52);
LAB_00ae8e30:
              pEVar29 = *(EVP_PKEY **)(lVar21 + 200);
            }
          }
          else {
            lVar21 = *(long *)(param_3 + 0x52);
            pEVar29 = *(EVP_PKEY **)(lVar21 + 0x118);
                    /* try { // try from 00ae8c54 to 00be8c73 has its CatchHandler @ 00ae8b90 */
                    /* catch() { ... } // from try @ 00ae8c44 with catch @ 00ae8c58 */
            if ((pEVar29 == (EVP_PKEY *)0x0) &&
               (pEVar29 = *(EVP_PKEY **)(lVar21 + 0xf0), pEVar29 == (EVP_PKEY *)0x0))
            goto LAB_00ae8e30;
          }
          ctx = EVP_PKEY_CTX_new(pEVar29,(ENGINE *)0x0);
          if (ctx == (EVP_PKEY_CTX *)0x0) {
            iVar14 = 0x41;
            iVar15 = 0x9bc;
LAB_00ae8f60:
            ERR_put_error(0x14,0x19d,iVar14,"ssl/statem/statem_srvr.c",iVar15);
            iVar14 = 0x50;
          }
          else {
            iVar14 = EVP_PKEY_decrypt_init(ctx);
            if (iVar14 < 1) {
              iVar14 = 0x44;
              iVar15 = 0x9c1;
              goto LAB_00ae8f60;
            }
            pEVar29 = (EVP_PKEY *)
                      X509_get0_pubkey(*(undefined8 *)(*(long *)(param_3 + 0x5e) + 0x98));
            if ((pEVar29 != (EVP_PKEY *)0x0) &&
               (iVar14 = EVP_PKEY_derive_set_peer(ctx,pEVar29), iVar14 < 1)) {
              ERR_clear_error();
            }
            local_70 = (uchar *)*param_4;
            lVar21 = param_4[1];
            *param_4 = (long)(local_70 + lVar21);
            param_4[1] = 0;
            iVar14 = ASN1_get_object(&local_70,(long *)&sStack_68,&local_5c,&local_60,lVar21);
            if (((iVar14 == 0x20) && (local_5c == 0x10)) && (local_60 == 0)) {
              iVar14 = EVP_PKEY_decrypt(ctx,local_170,&local_58,local_70,sStack_68);
              if (iVar14 < 1) {
                iVar14 = 0x9e2;
                goto LAB_00ae9014;
              }
              iVar14 = ssl_generate_master_secret(param_3,local_170,0x20,0);
              if (iVar14 == 0) {
                ERR_put_error(0x14,0x19d,0x44,"ssl/statem/statem_srvr.c",0x9e9);
                bVar12 = false;
                iVar14 = 0x50;
              }
              else {
                iVar14 = -1;
                iVar15 = EVP_PKEY_CTX_ctrl(ctx,-1,-1,2,2,(void *)0x0);
                bVar12 = true;
                if (0 < iVar15) {
                  iVar14 = -1;
                  param_3[0x1b] = 1;
                }
              }
            }
            else {
              iVar14 = 0x9da;
LAB_00ae9014:
              ERR_put_error(0x14,0x19d,0x93,"ssl/statem/statem_srvr.c",iVar14);
              bVar12 = false;
              iVar14 = 0x32;
            }
            EVP_PKEY_CTX_free(ctx);
            if (bVar12) {
              return 2;
            }
          }
        }
        else {
          uVar26 = param_4[1];
          uVar28 = uVar26 - 2;
          if (uVar26 < 2) {
LAB_00ae86fc:
            iVar14 = 0x19b;
            iVar15 = 0x94;
            iVar20 = 0x8fa;
          }
          else {
            puVar22 = (undefined1 *)*param_4;
            uVar3 = *puVar22;
            uVar4 = puVar22[1];
            *param_4 = (long)(puVar22 + 2);
            param_4[1] = uVar28;
            if (uVar28 != (uint)CONCAT11(uVar3,uVar4)) goto LAB_00ae86fc;
            pEVar29 = *(EVP_PKEY **)(lVar21 + 0x230);
            if (pEVar29 != (EVP_PKEY *)0x0) {
              if (uVar28 == 0) {
                iVar14 = 0x19b;
                iVar15 = 0xab;
                iVar20 = 0x906;
                goto LAB_00ae8714;
              }
              *param_4 = (long)(puVar22 + uVar26);
              param_4[1] = 0;
              to = EVP_PKEY_new();
              if ((to == (EVP_PKEY *)0x0) ||
                 (iVar14 = EVP_PKEY_copy_parameters(to,pEVar29), iVar14 == 0)) {
                    /* catch() { ... } // from try @ 00ae8ad8 with catch @ 00ae8b40 */
                iVar14 = 0x19b;
                    /* catch() { ... } // from try @ 00ae8a5c with catch @ 00ae8b44 */
                iVar15 = 0x82;
                iVar20 = 0x911;
              }
              else {
                uVar16 = EVP_PKEY_get0_DH(to);
                pBVar17 = BN_bin2bn(puVar22 + 2,(uint)CONCAT11(uVar3,uVar4),(BIGNUM *)0x0);
                if (pBVar17 != (BIGNUM *)0x0) {
                  iVar14 = DH_set0_key(uVar16,pBVar17,0);
                  if (iVar14 != 0) {
                    iVar14 = ssl_derive(param_3,pEVar29,to);
                    if (iVar14 != 0) goto LAB_00ae8bd4;
                    iVar14 = 0x19b;
                    iVar15 = 0x920;
                    goto LAB_00ae9048;
                  }
                  ERR_put_error(0x14,0x19b,0x44,"ssl/statem/statem_srvr.c",0x918);
                  BN_free(pBVar17);
                  iVar14 = -1;
                  goto LAB_00ae8720;
                }
                iVar14 = 0x19b;
                iVar15 = 0x44;
                iVar20 = 0x918;
              }
LAB_00ae8e20:
              ERR_put_error(0x14,iVar14,iVar15,"ssl/statem/statem_srvr.c",iVar20);
              iVar14 = -1;
              goto LAB_00ae8720;
            }
            iVar14 = 0x19b;
            iVar15 = 0xab;
            iVar20 = 0x900;
          }
LAB_00ae8714:
          ERR_put_error(0x14,iVar14,iVar15,"ssl/statem/statem_srvr.c",iVar20);
          to = (EVP_PKEY *)0x0;
LAB_00ae871c:
          iVar14 = 0x28;
LAB_00ae8720:
                    /* try { // try from 00ae8720 to 00be8753 has its CatchHandler @ 00ae84ec */
          EVP_PKEY_free(to);
        }
LAB_00ae8728:
        if (iVar14 == -1) goto LAB_00ae89b4;
      }
      else {
        rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(*(long *)(param_3 + 0x52) + 0x28));
        if (rsa == (RSA *)0x0) {
          iVar14 = 0x19f;
          iVar15 = 0xa8;
                    /* try { // try from 00ae86ec to 00be871f has its CatchHandler @ 00ae8738 */
          iVar20 = 0x857;
          goto LAB_00ae86f0;
        }
        if ((*param_3 | 0x200) != 0x300) {
          uVar28 = param_4[1] - 2;
          if (1 < (ulong)param_4[1]) {
            puVar22 = (undefined1 *)*param_4;
            uVar26 = (ulong)CONCAT11(*puVar22,puVar22[1]);
                    /* try { // try from 00ae8850 to 00be885b has its CatchHandler @ 00ae88ac */
            lVar21 = uVar28 - uVar26;
            if (uVar26 <= uVar28) {
              puVar30 = puVar22 + 2;
                    /* try { // try from 00ae885c to 00be886b has its CatchHandler @ 00ae88b0 */
              *param_4 = (long)(puVar30 + uVar26);
              param_4[1] = lVar21;
              if (lVar21 == 0) goto LAB_00ae8598;
            }
          }
                    /* try { // try from 00ae886c to 00be88cb has its CatchHandler @ 00ae877c */
          iVar14 = 0x19f;
          iVar15 = 0x9f;
          iVar20 = 0x862;
          goto LAB_00ae8410;
        }
        puVar30 = (uchar *)*param_4;
        uVar26 = param_4[1];
LAB_00ae8598:
        iVar14 = RSA_size(rsa);
        if (iVar14 < 0x30) {
          iVar14 = 0x19f;
          iVar15 = 0x78;
          iVar20 = 0x86f;
        }
        else {
          iVar14 = RSA_size(rsa);
          pbVar18 = CRYPTO_malloc(iVar14,"ssl/statem/statem_srvr.c",0x873);
          if (pbVar18 != (byte *)0x0) {
            iVar14 = RAND_bytes(local_170,0x30);
            if ((iVar14 < 1) ||
               (iVar14 = RSA_private_decrypt((int)uVar26,puVar30,pbVar18,rsa,3), iVar14 < 0)) {
              iVar14 = -1;
            }
            else if (iVar14 < 0x3b) {
              ERR_put_error(0x14,0x19f,0x93,"ssl/statem/statem_srvr.c",0x898);
              iVar14 = 0x33;
            }
            else {
              lVar31 = (long)iVar14;
                    /* try { // try from 00ae8a0c to 00be8a5b has its CatchHandler @ 00ae8a0c
                       catch() { ... } // from try @ 00ae8a0c with catch @ 00ae8a0c
                       catch() { ... } // from try @ 00ae8ae0 with catch @ 00ae8a0c */
              lVar21 = lVar31 + -0x30;
              uVar2 = (pbVar18[1] ^ 2) - 1 & *pbVar18 - 1;
              uVar13 = (int)uVar2 >> 0x1f;
              bVar35 = (byte)((int)uVar2 >> 0x1f);
              if (2 < lVar31 - 0x31U) {
                uVar28 = lVar31 - 0x33;
                if ((uVar28 < 0x20) || (uVar26 = uVar28 & 0xffffffffffffffe0, uVar26 == 0)) {
                  uVar23 = 2;
                }
                else {
                  auVar11._1_14_ = param_2._2_14_;
                  auVar11[0] = 0xff;
                  auVar32._0_2_ = auVar11._0_2_ << 8;
                  auVar32[2] = 0xff;
                  auVar32[3] = 0xff;
                  auVar32[4] = 0xff;
                  auVar32[5] = 0xff;
                  auVar32[6] = 0xff;
                  auVar32[7] = 0xff;
                  auVar32[8] = 0xff;
                  auVar32[9] = 0xff;
                  auVar32[10] = 0xff;
                  auVar32[0xb] = 0xff;
                  auVar32[0xc] = 0xff;
                  auVar32[0xd] = 0xff;
                  auVar32[0xe] = 0xff;
                  auVar32[0xf] = 0xff;
                  uVar23 = uVar26 | 2;
                  pbVar24 = pbVar18 + 0x12;
                    /* try { // try from 00ae8a5c to 00be8a63 has its CatchHandler @ 00ae8b44 */
                  auVar34._1_15_ = auVar32._1_15_;
                  auVar34[0] = bVar35;
                  uVar16 = 0xffffffffffffffff;
                  uVar44 = 0xffffffffffffffff;
                  uVar27 = uVar26;
                  do {
                    uVar53 = *(undefined8 *)(pbVar24 + -8);
                    uVar52 = *(undefined8 *)(pbVar24 + -0x10);
                    uVar55 = *(undefined8 *)(pbVar24 + 8);
                    uVar54 = *(undefined8 *)pbVar24;
                    uVar27 = uVar27 - 0x20;
                    pbVar24 = pbVar24 + 0x20;
                    bVar35 = (byte)((ulong)uVar52 >> 8);
                    bVar38 = (byte)((ulong)uVar52 >> 0x18);
                    bVar40 = (byte)((ulong)uVar52 >> 0x28);
                    bVar36 = (byte)((ulong)uVar53 >> 8);
                    bVar41 = (byte)((ulong)uVar53 >> 0x28);
                    bVar37 = (byte)((ulong)uVar54 >> 8);
                    bVar39 = (byte)((ulong)uVar54 >> 0x18);
                    bVar42 = (byte)((ulong)uVar54 >> 0x28);
                    bVar45 = (byte)((ulong)uVar55 >> 8);
                    bVar49 = (byte)((ulong)uVar55 >> 0x28);
                    /* try { // try from 00ae8ad8 to 00be8adf has its CatchHandler @ 00ae8b40 */
                    /* try { // try from 00ae8ae0 to 00be8b57 has its CatchHandler @ 00ae8a0c */
                    auVar33[0] = auVar34[0] &
                                 ~(byte)((int)((CONCAT12(bVar35,(ushort)(byte)uVar52) & 0xffff) - 1)
                                        >> 0x1f);
                    auVar33[1] = auVar34[1] & ~(byte)((int)(bVar35 - 1) >> 0x1f);
                    auVar33[2] = auVar34[2] &
                                 ~(byte)((int)((CONCAT12(bVar38,(ushort)(byte)((ulong)uVar52 >> 0x10
                                                                              )) & 0xffff) - 1) >>
                                        0x1f);
                    auVar33[3] = auVar34[3] & ~(byte)((int)(bVar38 - 1) >> 0x1f);
                    auVar33[4] = auVar34[4] &
                                 ~(byte)((int)((CONCAT12(bVar40,(ushort)(byte)((ulong)uVar52 >> 0x20
                                                                              )) & 0xffff) - 1) >>
                                        0x1f);
                    auVar33[5] = auVar34[5] & ~(byte)((int)(bVar40 - 1) >> 0x1f);
                    auVar33[6] = auVar34[6] &
                                 ~(byte)((int)((byte)((ulong)uVar52 >> 0x30) - 1) >> 0x1f);
                    auVar33[7] = auVar34[7] &
                                 ~(byte)((int)((byte)((ulong)uVar52 >> 0x38) - 1) >> 0x1f);
                    auVar33[8] = auVar34[8] &
                                 ~(byte)((int)(((CONCAT12(bVar36,(short)uVar53) & 0xff00ff) & 0xffff
                                               ) - 1) >> 0x1f);
                    auVar33[9] = auVar34[9] & ~(byte)((int)(bVar36 - 1) >> 0x1f);
                    auVar33[10] = auVar34[10] &
                                  ~(byte)((int)((byte)((ulong)uVar53 >> 0x10) - 1) >> 0x1f);
                    auVar33[0xb] = auVar34[0xb] &
                                   ~(byte)((int)((byte)((ulong)uVar53 >> 0x18) - 1) >> 0x1f);
                    auVar33[0xc] = auVar34[0xc] &
                                   ~(byte)((int)((CONCAT12(bVar41,(ushort)(byte)((ulong)uVar53 >>
                                                                                0x20)) & 0xffff) - 1
                                                ) >> 0x1f);
                    auVar33[0xd] = auVar34[0xd] & ~(byte)((int)(bVar41 - 1) >> 0x1f);
                    auVar33[0xe] = auVar34[0xe] &
                                   ~(byte)((int)((byte)((ulong)uVar53 >> 0x30) - 1) >> 0x1f);
                    auVar33[0xf] = auVar34[0xf] &
                                   ~(byte)((int)((byte)((ulong)uVar53 >> 0x38) - 1) >> 0x1f);
                    bVar35 = (byte)uVar16 &
                             ~(byte)((int)((CONCAT12(bVar37,(ushort)(byte)uVar54) & 0xffff) - 1) >>
                                    0x1f);
                    bVar36 = (byte)((ulong)uVar16 >> 8) & ~(byte)((int)(bVar37 - 1) >> 0x1f);
                    bVar37 = (byte)((ulong)uVar16 >> 0x10) &
                             ~(byte)((int)((CONCAT12(bVar39,(ushort)(byte)((ulong)uVar54 >> 0x10)) &
                                           0xffff) - 1) >> 0x1f);
                    bVar38 = (byte)((ulong)uVar16 >> 0x18) & ~(byte)((int)(bVar39 - 1) >> 0x1f);
                    bVar39 = (byte)((ulong)uVar16 >> 0x20) &
                             ~(byte)((int)((CONCAT12(bVar42,(ushort)(byte)((ulong)uVar54 >> 0x20)) &
                                           0xffff) - 1) >> 0x1f);
                    bVar40 = (byte)((ulong)uVar16 >> 0x28) & ~(byte)((int)(bVar42 - 1) >> 0x1f);
                    bVar41 = (byte)((ulong)uVar16 >> 0x30) &
                             ~(byte)((int)((byte)((ulong)uVar54 >> 0x30) - 1) >> 0x1f);
                    bVar42 = (byte)((ulong)uVar16 >> 0x38) &
                             ~(byte)((int)((byte)((ulong)uVar54 >> 0x38) - 1) >> 0x1f);
                    uVar16 = CONCAT17(bVar42,CONCAT16(bVar41,CONCAT15(bVar40,CONCAT14(bVar39,
                                                  CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,
                                                  bVar35)))))));
                    bVar43 = (byte)uVar44 &
                             ~(byte)((int)(((CONCAT12(bVar45,(short)uVar55) & 0xff00ff) & 0xffff) -
                                          1) >> 0x1f);
                    bVar45 = (byte)((ulong)uVar44 >> 8) & ~(byte)((int)(bVar45 - 1) >> 0x1f);
                    bVar46 = (byte)((ulong)uVar44 >> 0x10) &
                             ~(byte)((int)((byte)((ulong)uVar55 >> 0x10) - 1) >> 0x1f);
                    bVar47 = (byte)((ulong)uVar44 >> 0x18) &
                             ~(byte)((int)((byte)((ulong)uVar55 >> 0x18) - 1) >> 0x1f);
                    bVar48 = (byte)((ulong)uVar44 >> 0x20) &
                             ~(byte)((int)((CONCAT12(bVar49,(ushort)(byte)((ulong)uVar55 >> 0x20)) &
                                           0xffff) - 1) >> 0x1f);
                    bVar49 = (byte)((ulong)uVar44 >> 0x28) & ~(byte)((int)(bVar49 - 1) >> 0x1f);
                    bVar50 = (byte)((ulong)uVar44 >> 0x30) &
                             ~(byte)((int)((byte)((ulong)uVar55 >> 0x30) - 1) >> 0x1f);
                    bVar51 = (byte)((ulong)uVar44 >> 0x38) &
                             ~(byte)((int)((byte)((ulong)uVar55 >> 0x38) - 1) >> 0x1f);
                    uVar44 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar48,
                                                  CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,
                                                  bVar43)))))));
                    auVar34 = auVar33;
                  } while (uVar27 != 0);
                  bVar35 = bVar35 & auVar33[0];
                  bVar36 = bVar36 & auVar33[1];
                  bVar37 = bVar37 & auVar33[2];
                  bVar38 = bVar38 & auVar33[3];
                  bVar39 = bVar39 & auVar33[4];
                  bVar40 = bVar40 & auVar33[5];
                  bVar41 = bVar41 & auVar33[6];
                  bVar42 = bVar42 & auVar33[7];
                  bVar43 = bVar43 & auVar33[8];
                  bVar45 = bVar45 & auVar33[9];
                  bVar46 = bVar46 & auVar33[10];
                  bVar47 = bVar47 & auVar33[0xb];
                  bVar48 = bVar48 & auVar33[0xc];
                  bVar49 = bVar49 & auVar33[0xd];
                  bVar50 = bVar50 & auVar33[0xe];
                  bVar51 = bVar51 & auVar33[0xf];
                  auVar5[1] = bVar36;
                  auVar5[0] = bVar35;
                  auVar5[2] = bVar37;
                  auVar5[3] = bVar38;
                  auVar5[4] = bVar39;
                  auVar5[5] = bVar40;
                  auVar5[6] = bVar41;
                  auVar5[7] = bVar42;
                  auVar5[8] = bVar43;
                  auVar5[9] = bVar45;
                  auVar5[10] = bVar46;
                  auVar5[0xb] = bVar47;
                  auVar5[0xc] = bVar48;
                  auVar5[0xd] = bVar49;
                  auVar5[0xe] = bVar50;
                  auVar5[0xf] = bVar51;
                  auVar6[1] = bVar36;
                  auVar6[0] = bVar35;
                  auVar6[2] = bVar37;
                  auVar6[3] = bVar38;
                  auVar6[4] = bVar39;
                  auVar6[5] = bVar40;
                  auVar6[6] = bVar41;
                  auVar6[7] = bVar42;
                  auVar6[8] = bVar43;
                  auVar6[9] = bVar45;
                  auVar6[10] = bVar46;
                  auVar6[0xb] = bVar47;
                  auVar6[0xc] = bVar48;
                  auVar6[0xd] = bVar49;
                  auVar6[0xe] = bVar50;
                  auVar6[0xf] = bVar51;
                  auVar34 = NEON_ext(auVar5,auVar6,8,1);
                  bVar35 = bVar35 & auVar34[0];
                  bVar36 = bVar36 & auVar34[1];
                  bVar37 = bVar37 & auVar34[2];
                  bVar38 = bVar38 & auVar34[3];
                  bVar39 = bVar39 & auVar34[4];
                  bVar40 = bVar40 & auVar34[5];
                  bVar41 = bVar41 & auVar34[6];
                  bVar42 = bVar42 & auVar34[7];
                  bVar43 = bVar43 & auVar34[8];
                  bVar45 = bVar45 & auVar34[9];
                  bVar46 = bVar46 & auVar34[10];
                  bVar47 = bVar47 & auVar34[0xb];
                  bVar48 = bVar48 & auVar34[0xc];
                  bVar49 = bVar49 & auVar34[0xd];
                  bVar50 = bVar50 & auVar34[0xe];
                  bVar51 = bVar51 & auVar34[0xf];
                  auVar7[1] = bVar36;
                  auVar7[0] = bVar35;
                  auVar7[2] = bVar37;
                  auVar7[3] = bVar38;
                  auVar7[4] = bVar39;
                  auVar7[5] = bVar40;
                  auVar7[6] = bVar41;
                  auVar7[7] = bVar42;
                  auVar7[8] = bVar43;
                  auVar7[9] = bVar45;
                  auVar7[10] = bVar46;
                  auVar7[0xb] = bVar47;
                  auVar7[0xc] = bVar48;
                  auVar7[0xd] = bVar49;
                  auVar7[0xe] = bVar50;
                  auVar7[0xf] = bVar51;
                  auVar8[1] = bVar36;
                  auVar8[0] = bVar35;
                  auVar8[2] = bVar37;
                  auVar8[3] = bVar38;
                  auVar8[4] = bVar39;
                  auVar8[5] = bVar40;
                  auVar8[6] = bVar41;
                  auVar8[7] = bVar42;
                  auVar8[8] = bVar43;
                  auVar8[9] = bVar45;
                  auVar8[10] = bVar46;
                  auVar8[0xb] = bVar47;
                  auVar8[0xc] = bVar48;
                  auVar8[0xd] = bVar49;
                  auVar8[0xe] = bVar50;
                  auVar8[0xf] = bVar51;
                  auVar34 = NEON_ext(auVar7,auVar8,4,1);
                  bVar35 = bVar35 & auVar34[0];
                  bVar36 = bVar36 & auVar34[1];
                  bVar37 = bVar37 & auVar34[2];
                  bVar38 = bVar38 & auVar34[3];
                  bVar39 = bVar39 & auVar34[4];
                  bVar40 = bVar40 & auVar34[5];
                  bVar41 = bVar41 & auVar34[6];
                  bVar42 = bVar42 & auVar34[7];
                  bVar43 = bVar43 & auVar34[8];
                  bVar45 = bVar45 & auVar34[9];
                  bVar46 = bVar46 & auVar34[10];
                  bVar47 = bVar47 & auVar34[0xb];
                  bVar48 = bVar48 & auVar34[0xc];
                  bVar49 = bVar49 & auVar34[0xd];
                  bVar50 = bVar50 & auVar34[0xe];
                  bVar51 = bVar51 & auVar34[0xf];
                  auVar9[1] = bVar36;
                  auVar9[0] = bVar35;
                  auVar9[2] = bVar37;
                  auVar9[3] = bVar38;
                  auVar9[4] = bVar39;
                  auVar9[5] = bVar40;
                  auVar9[6] = bVar41;
                  auVar9[7] = bVar42;
                  auVar9[8] = bVar43;
                  auVar9[9] = bVar45;
                  auVar9[10] = bVar46;
                  auVar9[0xb] = bVar47;
                  auVar9[0xc] = bVar48;
                  auVar9[0xd] = bVar49;
                  auVar9[0xe] = bVar50;
                  auVar9[0xf] = bVar51;
                  auVar10[1] = bVar36;
                  auVar10[0] = bVar35;
                  auVar10[2] = bVar37;
                  auVar10[3] = bVar38;
                  auVar10[4] = bVar39;
                  auVar10[5] = bVar40;
                  auVar10[6] = bVar41;
                  auVar10[7] = bVar42;
                  auVar10[8] = bVar43;
                  auVar10[9] = bVar45;
                  auVar10[10] = bVar46;
                  auVar10[0xb] = bVar47;
                  auVar10[0xc] = bVar48;
                  auVar10[0xd] = bVar49;
                  auVar10[0xe] = bVar50;
                  auVar10[0xf] = bVar51;
                  auVar34 = NEON_ext(auVar9,auVar10,2,1);
                  bVar35 = bVar35 & auVar34[0] & bVar36 & auVar34[1];
                  uVar13 = (uint)bVar35;
                  if (uVar28 == uVar26) goto LAB_00ae8ca0;
                }
                lVar25 = (lVar31 + -0x31) - uVar23;
                pbVar24 = pbVar18 + uVar23;
                do {
                  lVar25 = lVar25 + -1;
                  uVar13 = uVar13 & ((int)(*pbVar24 - 1) >> 0x1f ^ 0xffffffffU);
                  bVar35 = (byte)uVar13;
                  pbVar24 = pbVar24 + 1;
                } while (lVar25 != 0);
              }
LAB_00ae8ca0:
              pbVar24 = pbVar18 + lVar21;
              uVar2 = param_3[0x81];
              bVar36 = (byte)(((int)uVar2 >> 8 ^ (uint)*pbVar24) - 1 >> 0x18) &
                       ((byte)((int)uVar2 >> 0x1f) ^ 0xff) &
                       (byte)((uVar2 & 0xff ^ (uint)pbVar24[1]) - 1 >> 0x18);
              if (*(char *)((long)param_3 + 0x1e6) < '\0') {
                uVar2 = *param_3;
                bVar36 = bVar36 | (byte)(((int)uVar2 >> 8 ^ (uint)*pbVar24) - 1 >> 0x18) &
                                  ((byte)((int)uVar2 >> 0x1f) ^ 0xff) &
                                  (byte)((uVar2 & 0xff ^ (uint)pbVar24[1]) - 1 >> 0x18);
              }
              bVar35 = bVar35 & (byte)((int)(pbVar18[lVar31 - 0x31U] - 1) >> 0x1f) &
                       (char)bVar36 >> 7;
              bVar36 = ~bVar35;
              if ((pbVar24 < abStack_140) && (local_170 < pbVar24 + 0x30)) {
                lVar31 = 0;
                do {
                  pbVar18[lVar31 + lVar21] =
                       local_170[lVar31] & bVar36 | pbVar18[lVar31 + lVar21] & bVar35;
                  lVar31 = lVar31 + 1;
                } while (lVar31 != 0x30);
              }
              else {
                pbVar1 = pbVar18 + lVar21;
                uVar44 = *(undefined8 *)(pbVar1 + 8);
                uVar16 = *(undefined8 *)pbVar1;
                uVar53 = *(undefined8 *)(pbVar1 + 0x18);
                uVar52 = *(undefined8 *)(pbVar1 + 0x10);
                pbVar1[8] = local_170[8] & bVar36 | (byte)uVar44 & bVar35;
                pbVar1[9] = local_170[9] & bVar36 | (byte)((ulong)uVar44 >> 8) & bVar35;
                pbVar1[10] = local_170[10] & bVar36 | (byte)((ulong)uVar44 >> 0x10) & bVar35;
                pbVar1[0xb] = local_170[0xb] & bVar36 | (byte)((ulong)uVar44 >> 0x18) & bVar35;
                pbVar1[0xc] = local_170[0xc] & bVar36 | (byte)((ulong)uVar44 >> 0x20) & bVar35;
                pbVar1[0xd] = local_170[0xd] & bVar36 | (byte)((ulong)uVar44 >> 0x28) & bVar35;
                pbVar1[0xe] = local_170[0xe] & bVar36 | (byte)((ulong)uVar44 >> 0x30) & bVar35;
                pbVar1[0xf] = local_170[0xf] & bVar36 | (byte)((ulong)uVar44 >> 0x38) & bVar35;
                *pbVar1 = local_170[0] & bVar36 | (byte)uVar16 & bVar35;
                pbVar1[1] = local_170[1] & bVar36 | (byte)((ulong)uVar16 >> 8) & bVar35;
                pbVar1[2] = local_170[2] & bVar36 | (byte)((ulong)uVar16 >> 0x10) & bVar35;
                pbVar1[3] = local_170[3] & bVar36 | (byte)((ulong)uVar16 >> 0x18) & bVar35;
                pbVar1[4] = local_170[4] & bVar36 | (byte)((ulong)uVar16 >> 0x20) & bVar35;
                pbVar1[5] = local_170[5] & bVar36 | (byte)((ulong)uVar16 >> 0x28) & bVar35;
                pbVar1[6] = local_170[6] & bVar36 | (byte)((ulong)uVar16 >> 0x30) & bVar35;
                pbVar1[7] = local_170[7] & bVar36 | (byte)((ulong)uVar16 >> 0x38) & bVar35;
                pbVar1[0x18] = local_170[0x18] & bVar36 | (byte)uVar53 & bVar35;
                pbVar1[0x19] = local_170[0x19] & bVar36 | (byte)((ulong)uVar53 >> 8) & bVar35;
                pbVar1[0x1a] = local_170[0x1a] & bVar36 | (byte)((ulong)uVar53 >> 0x10) & bVar35;
                pbVar1[0x1b] = local_170[0x1b] & bVar36 | (byte)((ulong)uVar53 >> 0x18) & bVar35;
                pbVar1[0x1c] = local_170[0x1c] & bVar36 | (byte)((ulong)uVar53 >> 0x20) & bVar35;
                pbVar1[0x1d] = local_170[0x1d] & bVar36 | (byte)((ulong)uVar53 >> 0x28) & bVar35;
                pbVar1[0x1e] = local_170[0x1e] & bVar36 | (byte)((ulong)uVar53 >> 0x30) & bVar35;
                pbVar1[0x1f] = local_170[0x1f] & bVar36 | (byte)((ulong)uVar53 >> 0x38) & bVar35;
                pbVar1[0x10] = local_170[0x10] & bVar36 | (byte)uVar52 & bVar35;
                pbVar1[0x11] = local_170[0x11] & bVar36 | (byte)((ulong)uVar52 >> 8) & bVar35;
                pbVar1[0x12] = local_170[0x12] & bVar36 | (byte)((ulong)uVar52 >> 0x10) & bVar35;
                pbVar1[0x13] = local_170[0x13] & bVar36 | (byte)((ulong)uVar52 >> 0x18) & bVar35;
                pbVar1[0x14] = local_170[0x14] & bVar36 | (byte)((ulong)uVar52 >> 0x20) & bVar35;
                pbVar1[0x15] = local_170[0x15] & bVar36 | (byte)((ulong)uVar52 >> 0x28) & bVar35;
                pbVar1[0x16] = local_170[0x16] & bVar36 | (byte)((ulong)uVar52 >> 0x30) & bVar35;
                pbVar1[0x17] = local_170[0x17] & bVar36 | (byte)((ulong)uVar52 >> 0x38) & bVar35;
                *(ulong *)(pbVar1 + 0x28) =
                     CONCAT17(SUB81(local_170._40_8_,7) & bVar36 | pbVar1[0x2f] & bVar35,
                              CONCAT16(SUB81(local_170._40_8_,6) & bVar36 | pbVar1[0x2e] & bVar35,
                                       CONCAT15(SUB81(local_170._40_8_,5) & bVar36 |
                                                pbVar1[0x2d] & bVar35,
                                                CONCAT14(SUB81(local_170._40_8_,4) & bVar36 |
                                                         pbVar1[0x2c] & bVar35,
                                                         CONCAT13(SUB81(local_170._40_8_,3) & bVar36
                                                                  | pbVar1[0x2b] & bVar35,
                                                                  CONCAT12(SUB81(local_170._40_8_,2)
                                                                           & bVar36 |
                                                                           pbVar1[0x2a] & bVar35,
                                                                           CONCAT11(SUB81(local_170.
                                                                                          _40_8_,1)
                                                                                    & bVar36 |
                                                                                    pbVar1[0x29] &
                                                                                    bVar35,(byte)
                                                  local_170._40_8_ & bVar36 | pbVar1[0x28] & bVar35)
                                                  ))))));
                *(ulong *)(pbVar1 + 0x20) =
                     CONCAT17(SUB81(local_170._32_8_,7) & bVar36 | pbVar1[0x27] & bVar35,
                              CONCAT16(SUB81(local_170._32_8_,6) & bVar36 | pbVar1[0x26] & bVar35,
                                       CONCAT15(SUB81(local_170._32_8_,5) & bVar36 |
                                                pbVar1[0x25] & bVar35,
                                                CONCAT14(SUB81(local_170._32_8_,4) & bVar36 |
                                                         pbVar1[0x24] & bVar35,
                                                         CONCAT13(SUB81(local_170._32_8_,3) & bVar36
                                                                  | pbVar1[0x23] & bVar35,
                                                                  CONCAT12(SUB81(local_170._32_8_,2)
                                                                           & bVar36 |
                                                                           pbVar1[0x22] & bVar35,
                                                                           CONCAT11(SUB81(local_170.
                                                                                          _32_8_,1)
                                                                                    & bVar36 |
                                                                                    pbVar1[0x21] &
                                                                                    bVar35,(byte)
                                                  local_170._32_8_ & bVar36 | pbVar1[0x20] & bVar35)
                                                  ))))));
              }
              iVar14 = ssl_generate_master_secret(param_3,pbVar24,0x30,0);
              if (iVar14 != 0) {
                CRYPTO_free(pbVar18);
                return 2;
              }
              ERR_put_error(0x14,0x19f,0x44,"ssl/statem/statem_srvr.c",0x8dc);
              iVar14 = 0x50;
            }
                    /* catch() { ... } // from try @ 00ae8850 with catch @ 00ae88ac */
                    /* catch() { ... } // from try @ 00ae885c with catch @ 00ae88b0 */
            CRYPTO_free(pbVar18);
            goto LAB_00ae8728;
          }
                    /* catch() { ... } // from try @ 00ae8918 with catch @ 00ae88cc
                       catch() { ... } // from try @ 00ae8958 with catch @ 00ae88cc */
          iVar14 = 0x19f;
          iVar15 = 0x41;
          iVar20 = 0x876;
        }
LAB_00ae899c:
        ERR_put_error(0x14,iVar14,iVar15,"ssl/statem/statem_srvr.c",iVar20);
        iVar14 = 0x50;
      }
    }
    else {
      if (param_4[1] == 0) {
        iVar14 = ssl_generate_master_secret(param_3,0,0,0);
        if (iVar14 != 0) {
          return 2;
        }
        iVar14 = 0x17e;
        iVar15 = 0x44;
        iVar20 = 0xa13;
        goto LAB_00ae899c;
      }
      iVar14 = 0x17e;
      iVar15 = 0x9f;
      iVar20 = 0xa0d;
LAB_00ae86f0:
      ERR_put_error(0x14,iVar14,iVar15,"ssl/statem/statem_srvr.c",iVar20);
      iVar14 = 0x28;
    }
  }
  else {
    uVar28 = param_4[1] - 2;
                    /* try { // try from 00ae83dc to 00be841f has its CatchHandler @ 00ae83dc
                       catch() { ... } // from try @ 00ae83dc with catch @ 00ae83dc
                       catch() { ... } // from try @ 00ae8444 with catch @ 00ae83dc */
    if ((ulong)param_4[1] < 2) {
LAB_00ae83f8:
      iVar14 = 0x19e;
      iVar15 = 0x9f;
      iVar20 = 0x80e;
    }
    else {
      puVar22 = (undefined1 *)*param_4;
      uVar26 = (ulong)CONCAT11(*puVar22,puVar22[1]);
      if (uVar28 < uVar26) goto LAB_00ae83f8;
                    /* try { // try from 00ae8420 to 00be8443 has its CatchHandler @ 00ae84d0 */
      *param_4 = (long)(puVar22 + 2 + uVar26);
      param_4[1] = uVar28 - uVar26;
      if (uVar26 < 0x81) {
        if (*(long *)(param_3 + 0x6c) == 0) {
                    /* catch() { ... } // from try @ 00ae8420 with catch @ 00ae84d0 */
          iVar14 = 0x19e;
          iVar15 = 0xe1;
          iVar20 = 0x818;
        }
        else {
          lVar31 = *(long *)(param_3 + 0x5e);
          CRYPTO_free(*(void **)(lVar31 + 0x88));
          lVar21 = CRYPTO_strndup(puVar22 + 2,uVar26,"ssl/statem/../packet_locl.h",0x198);
          *(long *)(lVar31 + 0x88) = lVar21;
          if (lVar21 == 0) {
                    /* try { // try from 00ae84ec to 00be86eb has its CatchHandler @ 00ae84ec
                       catch() { ... } // from try @ 00ae84ec with catch @ 00ae84ec
                       catch() { ... } // from try @ 00ae8720 with catch @ 00ae84ec */
            iVar14 = 0x19e;
            iVar15 = 0x44;
            iVar20 = 0x81e;
          }
          else {
            uVar13 = (**(code **)(param_3 + 0x6c))
                               (param_3,*(undefined8 *)(*(long *)(param_3 + 0x5e) + 0x88),local_170,
                                0x100);
            if (uVar13 < 0x101) {
              uVar28 = (ulong)uVar13;
              if (uVar13 == 0) {
                    /* try { // try from 00ae8910 to 00be8917 has its CatchHandler @ 00ae89ac */
                ERR_put_error(0x14,0x19e,0xdf,"ssl/statem/statem_srvr.c",0x82f);
                    /* try { // try from 00ae8918 to 00be894f has its CatchHandler @ 00ae88cc */
                iVar14 = 0x73;
                goto LAB_00ae89a4;
              }
              CRYPTO_free(*(void **)(*(long *)(param_3 + 0x24) + 0x2b0));
              uVar16 = CRYPTO_memdup(local_170,uVar28,"ssl/statem/statem_srvr.c",0x834);
              *(undefined8 *)(*(long *)(param_3 + 0x24) + 0x2b0) = uVar16;
              OPENSSL_cleanse(local_170,uVar28);
              lVar21 = *(long *)(param_3 + 0x24);
              if (*(long *)(lVar21 + 0x2b0) != 0) {
                *(ulong *)(lVar21 + 0x2b8) = uVar28;
                goto LAB_00ae8560;
              }
              iVar14 = 0x19e;
              iVar15 = 0x41;
              iVar20 = 0x839;
            }
            else {
              iVar14 = 0x19e;
              iVar15 = 0x44;
              iVar20 = 0x827;
            }
          }
        }
        goto LAB_00ae899c;
      }
      iVar14 = 0x19e;
      iVar15 = 0x92;
                    /* try { // try from 00ae8444 to 00be84eb has its CatchHandler @ 00ae83dc */
      iVar20 = 0x813;
    }
LAB_00ae8410:
    ERR_put_error(0x14,iVar14,iVar15,"ssl/statem/statem_srvr.c",iVar20);
    iVar14 = 0x32;
  }
LAB_00ae89a4:
                    /* catch() { ... } // from try @ 00ae8910 with catch @ 00ae89ac */
  ssl3_send_alert(param_3,2,iVar14);
LAB_00ae89b4:
                    /* catch() { ... } // from try @ 00ae8950 with catch @ 00ae89cc */
  CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_3 + 0x24) + 0x2b0),
                    *(undefined8 *)(*(long *)(param_3 + 0x24) + 0x2b8),"ssl/statem/statem_srvr.c",
                    0xa31);
  *(undefined8 *)(*(long *)(param_3 + 0x24) + 0x2b0) = 0;
  ossl_statem_set_error(param_3);
  return 0;
}

