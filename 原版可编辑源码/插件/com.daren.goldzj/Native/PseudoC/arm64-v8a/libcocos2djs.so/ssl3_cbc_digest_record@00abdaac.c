
undefined8
ssl3_cbc_digest_record
          (EVP_MD_CTX *param_1,uchar *param_2,ulong *param_3,undefined8 *param_4,void *param_5,
          int param_6,ulong param_7,void *param_8,uint param_9,char param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  EVP_MD *pEVar12;
  EVP_MD_CTX *ctx;
  int iVar13;
  ulong uVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  byte bVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  ulong cnt;
  uint uVar26;
  size_t __n;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  size_t sVar31;
  size_t sVar32;
  size_t __n_00;
  code *pcVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  code *local_350;
  uint local_308 [4];
  undefined8 auStack_2f8 [14];
  byte local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined5 uStack_248;
  undefined3 local_243;
  undefined5 uStack_240;
  undefined1 auStack_23b [115];
  ulong local_1c8 [16];
  byte local_148 [16];
  SHA512_CTX SStack_138;
  
  if (0xfffff < param_7) {
                    /* try { // try from 00abe2dc to 00bbe2e3 has its CatchHandler @ 00abe358 */
                    /* try { // try from 00abe2e8 to 00bbe2ef has its CatchHandler @ 00abe348 */
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: data_plus_mac_plus_padding_size < 1024 * 1024","ssl/s3_cbc.c",
                0xa9);
  }
  pEVar12 = EVP_MD_CTX_md(param_1);
  iVar11 = EVP_MD_type(pEVar12);
  switch(iVar11) {
  case 0x2a0:
    iVar11 = SHA256_Init((SHA256_CTX *)&SStack_138);
    if (iVar11 < 1) {
      return 0;
    }
    local_350 = FUN_00abe470;
    pcVar33 = SHA256_Transform;
    cnt = 0x20;
    break;
  case 0x2a1:
    iVar11 = SHA384_Init(&SStack_138);
    if (iVar11 < 1) {
      return 0;
    }
    cnt = 0x30;
    goto LAB_00abdbf4;
  case 0x2a2:
    iVar11 = SHA512_Init(&SStack_138);
    if (iVar11 < 1) {
      return 0;
    }
    cnt = 0x40;
LAB_00abdbf4:
    local_350 = (code *)&DAT_00abe594;
    pcVar33 = SHA512_Transform;
    __n = 0x80;
    __n_00 = 0x28;
    bVar7 = true;
    sVar31 = 0x10;
    goto LAB_00abdc74;
  case 0x2a3:
    iVar11 = SHA224_Init((SHA256_CTX *)&SStack_138);
    if (iVar11 < 1) {
      return 0;
    }
    local_350 = FUN_00abe470;
    pcVar33 = SHA256_Transform;
    cnt = 0x1c;
    break;
  default:
    if (iVar11 == 0x40) {
      iVar11 = SHA1_Init((SHA_CTX *)&SStack_138);
      if (iVar11 < 1) {
        return 0;
      }
      local_350 = (code *)&LAB_00abe3b8;
      pcVar33 = SHA1_Transform;
      cnt = 0x14;
      break;
    }
    if (iVar11 != 4) {
                    /* try { // try from 00abe2f4 to 00bbe2fb has its CatchHandler @ 00abe338 */
                    /* try { // try from 00abe300 to 00bbe303 has its CatchHandler @ 00abe324 */
                    /* try { // try from 00abe304 to 00bbe403 has its CatchHandler @ 00abe1e8 */
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: 0","ssl/s3_cbc.c",0xe7);
    }
    iVar11 = MD5_Init((MD5_CTX *)&SStack_138);
    if (iVar11 < 1) {
      return 0;
    }
    local_350 = (code *)&LAB_00abe324;
    pcVar33 = MD5_Transform;
    bVar7 = false;
    cnt = 0x10;
    __n_00 = 0x30;
    goto LAB_00abdc70;
  }
  __n_00 = 0x28;
  bVar7 = true;
LAB_00abdc70:
  __n = 0x40;
  sVar31 = 8;
LAB_00abdc74:
  uVar26 = (uint)__n;
  iVar11 = (int)sVar31;
  uVar1 = param_9 + (int)__n_00 + 0xb;
  uVar18 = 2;
  if (param_10 == '\0') {
    uVar18 = 6;
    uVar1 = 0xd;
  }
  uVar25 = (uint)cnt;
                    /* try { // try from 00abdcb4 to 00bbdd9f has its CatchHandler @ 00abdcb4
                       catch() { ... } // from try @ 00abdcb4 with catch @ 00abdcb4
                       catch() { ... } // from try @ 00abdda8 with catch @ 00abdcb4
                       catch() { ... } // from try @ 00abdf04 with catch @ 00abdcb4 */
  uVar2 = (param_6 - uVar25) + uVar1;
  uVar4 = 0;
  if (uVar26 != 0) {
    uVar4 = (((iVar11 + uVar26 + -1) - uVar25) + (int)(uVar1 + param_7)) / uVar26;
  }
  uVar22 = uVar4 - uVar18;
  uVar3 = uVar22 * uVar26;
  if (uVar4 <= (uVar18 | param_10 != '\0')) {
    uVar22 = 0;
    uVar3 = 0;
  }
  uVar30 = (ulong)uVar3;
  iVar28 = uVar2 * 8;
  if (param_10 == '\0') {
    memset(local_1c8,0,__n);
    if (0x80 < param_9) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: mac_secret_length <= sizeof(hmac_pad)","ssl/s3_cbc.c",0x14f);
    }
    iVar28 = iVar28 + uVar26 * 8;
    memcpy(local_1c8,param_8,(ulong)param_9);
    puVar15 = local_1c8 + 2;
    sVar32 = __n;
    do {
      sVar32 = sVar32 - 0x20;
      puVar15[-1] = puVar15[-1] ^ 0x3636363636363636;
      puVar15[-2] = puVar15[-2] ^ 0x3636363636363636;
      puVar15[1] = puVar15[1] ^ 0x3636363636363636;
      *puVar15 = *puVar15 ^ 0x3636363636363636;
      puVar15 = puVar15 + 4;
    } while (sVar32 != 0);
    (*pcVar33)(&SStack_138,local_1c8);
                    /* try { // try from 00abdda0 to 00bbdda7 has its CatchHandler @ 00abdf04 */
                    /* try { // try from 00abdda8 to 00bbdefb has its CatchHandler @ 00abdcb4 */
    if (!bVar7) goto LAB_00abddb4;
LAB_00abdd08:
    uVar27 = (ulong)(iVar11 - 4);
    memset(local_148,0,uVar27);
    iVar13 = -1;
    iVar16 = -2;
    iVar19 = -3;
  }
  else {
    if (bVar7) goto LAB_00abdd08;
LAB_00abddb4:
    memset(local_148,0,sVar31);
    uVar27 = (ulong)(iVar11 - 5);
    iVar13 = -8;
    iVar16 = -7;
    iVar19 = -6;
  }
  local_148[uVar27] = (byte)((uint)iVar28 >> 0x18);
  local_148[(uint)(iVar19 + iVar11)] = (byte)((uint)iVar28 >> 0x10);
  local_148[(uint)(iVar16 + iVar11)] = (byte)((uint)iVar28 >> 8);
  local_148[(uint)(iVar13 + iVar11)] = (byte)iVar28;
  if (uVar3 != 0) {
    if (param_10 == '\0') {
      uStack_240 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 5) >> 0x18);
      uStack_248 = (undefined5)*param_4;
      local_243 = (undefined3)((ulong)*param_4 >> 0x28);
      memcpy(auStack_23b,param_5,(ulong)(uVar26 - 0xd));
      (*pcVar33)(&SStack_138,&uStack_248);
      uVar4 = 0;
      if (uVar26 != 0) {
        uVar4 = uVar3 / uVar26;
      }
                    /* try { // try from 00abdefc to 00bbdf03 has its CatchHandler @ 00abdf04 */
      if (1 < uVar4) {
                    /* catch() { ... } // from try @ 00abdda0 with catch @ 00abdf04
                       catch() { ... } // from try @ 00abdefc with catch @ 00abdf04
                       try { // try from 00abdf04 to 00bbdf37 has its CatchHandler @ 00abdcb4 */
        uVar27 = 1;
        sVar31 = __n;
        do {
          (*pcVar33)(&SStack_138,(long)param_5 + (sVar31 - 0xd));
          uVar27 = uVar27 + 1;
          sVar31 = (size_t)((int)sVar31 + uVar26);
        } while (uVar27 < uVar4);
      }
    }
    else {
      uVar4 = uVar1 - uVar26;
      uVar27 = (ulong)uVar4;
      if (uVar1 < uVar26 || uVar4 == 0) {
        return 0;
      }
      (*pcVar33)(&SStack_138,param_4);
      memcpy(&uStack_248,(void *)((long)param_4 + __n),uVar27);
      memcpy((void *)((long)&uStack_248 + uVar27),param_5,(ulong)(uVar26 - uVar4));
      (*pcVar33)(&SStack_138,&uStack_248);
      uVar4 = 0;
      if (uVar26 != 0) {
        uVar4 = uVar3 / uVar26;
      }
      if (1 < uVar4 - 1) {
        uVar29 = 1;
        sVar31 = __n;
        do {
          (*pcVar33)(&SStack_138,(long)param_5 + (sVar31 - uVar27));
          uVar29 = uVar29 + 1;
          sVar31 = (size_t)((int)sVar31 + uVar26);
        } while (uVar29 < uVar4 - 1);
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abdf8c with catch @ 00abdf38
                        */
  uStack_250 = 0;
  local_258 = 0;
  uStack_260 = 0;
  local_268 = 0;
  uVar4 = uVar22 + uVar18;
  uStack_270 = 0;
  local_278 = 0;
  local_288[8] = 0;
  local_288[9] = 0;
  local_288[10] = 0;
  local_288[0xb] = 0;
  local_288[0xc] = 0;
  local_288[0xd] = 0;
  local_288[0xe] = 0;
  local_288[0xf] = 0;
  local_288[0] = 0;
  local_288[1] = 0;
  local_288[2] = 0;
  local_288[3] = 0;
  local_288[4] = 0;
  local_288[5] = 0;
  local_288[6] = 0;
  local_288[7] = 0;
  if (!CARRY4(uVar22,uVar18)) {
                    /* try { // try from 00abdf84 to 00bbdf8b has its CatchHandler @ 00abe0ec */
                    /* try { // try from 00abdf8c to 00bbe0ef has its CatchHandler @ 00abdf38 */
    uVar18 = 0;
    if (uVar26 != 0) {
      uVar18 = (iVar11 + uVar2) / uVar26;
    }
    uVar3 = 0;
    if (uVar26 != 0) {
      uVar3 = uVar2 / uVar26;
    }
    uVar27 = cnt - (uVar25 & 0x1c);
    iVar28 = uVar2 - uVar3 * uVar26;
    do {
      uVar29 = 0;
      bVar6 = (char)((byte)((uVar22 ^ uVar18) - 1 >> 0x18) &
                    ((byte)((uVar22 ^ uVar18) >> 0x18) ^ 0x80)) >> 7;
      bVar5 = (char)((byte)((uVar22 ^ uVar3) - 1 >> 0x18) &
                    ((byte)((uVar22 ^ uVar3) >> 0x18) ^ 0xff)) >> 7;
      do {
        uVar14 = (uVar30 & 0xffffffff) + uVar29;
        uVar23 = uVar14 & 0xffffffff;
        iVar13 = (int)uVar29;
        if ((uint)uVar14 < uVar1) {
          pbVar24 = (byte *)((long)param_4 + uVar23);
LAB_00abe050:
          bVar21 = *pbVar24;
        }
        else {
          if (uVar23 < uVar1 + param_7) {
            pbVar24 = (byte *)((long)param_5 + (ulong)(((int)uVar30 - uVar1) + iVar13));
            goto LAB_00abe050;
          }
          bVar21 = 0;
        }
        bVar8 = (byte)((uint)iVar28 >> 0x18);
        bVar10 = (byte)(uVar29 >> 0x18);
        bVar9 = (byte)((uint)(iVar28 + 1) >> 0x18);
        bVar8 = bVar5 & ((char)(((byte)((uint)(iVar13 - iVar28) >> 0x18) ^ bVar8 | bVar8 ^ bVar10) ^
                               bVar10) >> 7 ^ 0xffU);
        bVar21 = (bVar21 & (bVar8 ^ 0xff) | bVar8 & 0x80) &
                 (bVar5 & ((char)(((byte)((uint)((iVar13 - iVar28) + -1) >> 0x18) ^ bVar9 |
                                  bVar9 ^ bVar10) ^ bVar10) >> 7 ^ 0xffU) ^ 0xff);
        if (uVar29 < uVar26 - iVar11) {
          bVar21 = bVar21 & (bVar5 | bVar6 ^ 0xff);
        }
        else {
          bVar21 = local_148[(iVar11 - uVar26) + iVar13] & bVar6 | bVar21 & (bVar6 ^ 0xff);
        }
        *(byte *)((long)local_308 + uVar29) = bVar21;
        uVar29 = uVar29 + 1;
      } while (uVar29 < __n);
      (*pcVar33)(&SStack_138,local_308);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abdf84 with catch @ 00abe0ec
                        */
      (*local_350)(&SStack_138,local_308);
      uVar14 = 0;
      uVar30 = (uVar30 & 0xffffffff) + uVar29;
      if ((uVar25 < 0x20) ||
         (uVar29 = uVar27, puVar17 = &local_278, puVar20 = auStack_2f8, uVar27 == 0)) {
LAB_00abe184:
        do {
          local_288[uVar14] = local_288[uVar14] | *(byte *)((long)local_308 + uVar14) & bVar6;
          uVar14 = uVar14 + 1;
        } while (uVar14 < cnt);
      }
      else {
        do {
          uVar35 = puVar20[-1];
          uVar34 = puVar20[-2];
          uVar37 = puVar20[1];
          uVar36 = *puVar20;
          uVar39 = puVar17[-1];
          uVar38 = puVar17[-2];
          uVar41 = puVar17[1];
          uVar40 = *puVar17;
          uVar29 = uVar29 - 0x20;
          puVar17[-1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) |
                                 (byte)((ulong)uVar35 >> 0x38) & bVar6,
                                 CONCAT16((byte)((ulong)uVar39 >> 0x30) |
                                          (byte)((ulong)uVar35 >> 0x30) & bVar6,
                                          CONCAT15((byte)((ulong)uVar39 >> 0x28) |
                                                   (byte)((ulong)uVar35 >> 0x28) & bVar6,
                                                   CONCAT14((byte)((ulong)uVar39 >> 0x20) |
                                                            (byte)((ulong)uVar35 >> 0x20) & bVar6,
                                                            CONCAT13((byte)((ulong)uVar39 >> 0x18) |
                                                                     (byte)((ulong)uVar35 >> 0x18) &
                                                                     bVar6,CONCAT12((byte)((ulong)
                                                  uVar39 >> 0x10) |
                                                  (byte)((ulong)uVar35 >> 0x10) & bVar6,
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) |
                                                           (byte)((ulong)uVar35 >> 8) & bVar6,
                                                           (byte)uVar39 | (byte)uVar35 & bVar6))))))
                                );
          puVar17[-2] = CONCAT17((byte)((ulong)uVar38 >> 0x38) |
                                 (byte)((ulong)uVar34 >> 0x38) & bVar6,
                                 CONCAT16((byte)((ulong)uVar38 >> 0x30) |
                                          (byte)((ulong)uVar34 >> 0x30) & bVar6,
                                          CONCAT15((byte)((ulong)uVar38 >> 0x28) |
                                                   (byte)((ulong)uVar34 >> 0x28) & bVar6,
                                                   CONCAT14((byte)((ulong)uVar38 >> 0x20) |
                                                            (byte)((ulong)uVar34 >> 0x20) & bVar6,
                                                            CONCAT13((byte)((ulong)uVar38 >> 0x18) |
                                                                     (byte)((ulong)uVar34 >> 0x18) &
                                                                     bVar6,CONCAT12((byte)((ulong)
                                                  uVar38 >> 0x10) |
                                                  (byte)((ulong)uVar34 >> 0x10) & bVar6,
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) |
                                                           (byte)((ulong)uVar34 >> 8) & bVar6,
                                                           (byte)uVar38 | (byte)uVar34 & bVar6))))))
                                );
          puVar17[1] = CONCAT17((byte)((ulong)uVar41 >> 0x38) |
                                (byte)((ulong)uVar37 >> 0x38) & bVar6,
                                CONCAT16((byte)((ulong)uVar41 >> 0x30) |
                                         (byte)((ulong)uVar37 >> 0x30) & bVar6,
                                         CONCAT15((byte)((ulong)uVar41 >> 0x28) |
                                                  (byte)((ulong)uVar37 >> 0x28) & bVar6,
                                                  CONCAT14((byte)((ulong)uVar41 >> 0x20) |
                                                           (byte)((ulong)uVar37 >> 0x20) & bVar6,
                                                           CONCAT13((byte)((ulong)uVar41 >> 0x18) |
                                                                    (byte)((ulong)uVar37 >> 0x18) &
                                                                    bVar6,CONCAT12((byte)((ulong)
                                                  uVar41 >> 0x10) |
                                                  (byte)((ulong)uVar37 >> 0x10) & bVar6,
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) |
                                                           (byte)((ulong)uVar37 >> 8) & bVar6,
                                                           (byte)uVar41 | (byte)uVar37 & bVar6))))))
                               );
          *puVar17 = CONCAT17((byte)((ulong)uVar40 >> 0x38) | (byte)((ulong)uVar36 >> 0x38) & bVar6,
                              CONCAT16((byte)((ulong)uVar40 >> 0x30) |
                                       (byte)((ulong)uVar36 >> 0x30) & bVar6,
                                       CONCAT15((byte)((ulong)uVar40 >> 0x28) |
                                                (byte)((ulong)uVar36 >> 0x28) & bVar6,
                                                CONCAT14((byte)((ulong)uVar40 >> 0x20) |
                                                         (byte)((ulong)uVar36 >> 0x20) & bVar6,
                                                         CONCAT13((byte)((ulong)uVar40 >> 0x18) |
                                                                  (byte)((ulong)uVar36 >> 0x18) &
                                                                  bVar6,CONCAT12((byte)((ulong)
                                                  uVar40 >> 0x10) |
                                                  (byte)((ulong)uVar36 >> 0x10) & bVar6,
                                                  CONCAT11((byte)((ulong)uVar40 >> 8) |
                                                           (byte)((ulong)uVar36 >> 8) & bVar6,
                                                           (byte)uVar40 | (byte)uVar36 & bVar6))))))
                             );
          puVar17 = puVar17 + 4;
          puVar20 = puVar20 + 4;
        } while (uVar29 != 0);
        uVar14 = uVar27;
        if ((cnt & 0x1c) != 0) goto LAB_00abe184;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 <= uVar4);
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    pEVar12 = EVP_MD_CTX_md(param_1);
    iVar11 = EVP_DigestInit_ex(ctx,pEVar12,(ENGINE *)0x0);
    if (0 < iVar11) {
                    /* try { // try from 00abe1e8 to 00bbe227 has its CatchHandler @ 00abe1e8
                       catch() { ... } // from try @ 00abe1e8 with catch @ 00abe1e8
                       catch() { ... } // from try @ 00abe304 with catch @ 00abe1e8 */
      if (param_10 == '\0') {
                    /* try { // try from 00abe228 to 00bbe247 has its CatchHandler @ 00abe3a0 */
        puVar15 = local_1c8 + 2;
        sVar31 = __n;
        do {
          sVar31 = sVar31 - 0x20;
          puVar15[-1] = puVar15[-1] ^ 0x6a6a6a6a6a6a6a6a;
          puVar15[-2] = puVar15[-2] ^ 0x6a6a6a6a6a6a6a6a;
          puVar15[1] = puVar15[1] ^ 0x6a6a6a6a6a6a6a6a;
          *puVar15 = *puVar15 ^ 0x6a6a6a6a6a6a6a6a;
          puVar15 = puVar15 + 4;
          __n_00 = __n;
        } while (sVar31 != 0);
      }
      else {
        memset(local_1c8,0x5c,__n_00);
        iVar11 = EVP_DigestUpdate(ctx,param_8,(ulong)param_9);
        if (iVar11 < 1) goto LAB_00abe2b0;
      }
      iVar11 = EVP_DigestUpdate(ctx,local_1c8,__n_00);
      if ((0 < iVar11) && (iVar11 = EVP_DigestUpdate(ctx,local_288,cnt), 0 < iVar11)) {
        iVar11 = EVP_DigestFinal(ctx,param_2,local_308);
                    /* try { // try from 00abe28c to 00bbe2b3 has its CatchHandler @ 00abe3a8 */
        if ((param_3 != (ulong *)0x0) && (iVar11 != 0)) {
          *param_3 = (ulong)local_308[0];
        }
        EVP_MD_CTX_free(ctx);
        return 1;
      }
    }
  }
LAB_00abe2b0:
  EVP_MD_CTX_free(ctx);
                    /* try { // try from 00abe2b8 to 00bbe2bf has its CatchHandler @ 00abe398 */
                    /* try { // try from 00abe2c4 to 00bbe2cb has its CatchHandler @ 00abe390 */
                    /* try { // try from 00abe2d0 to 00bbe2d7 has its CatchHandler @ 00abe368 */
  return 0;
}

