
undefined4
dsa_builtin_paramgen
          (long param_1,ulong param_2,ulong param_3,EVP_MD *param_4,void *param_5,ulong param_6,
          void *param_7,int *param_8,ulong *param_9,BN_GENCB *param_10)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BN_MONT_CTX *mont;
  BN_CTX *ctx;
  BIGNUM *pBVar7;
  BIGNUM *r;
  BIGNUM *pBVar8;
  BIGNUM *ret;
  BIGNUM *a;
  BIGNUM *rem;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *pBVar9;
  size_t sVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  byte *pbVar14;
  size_t sVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int local_e4;
  byte local_e0 [16];
  undefined8 uStack_d0;
  char acStack_c1 [33];
  byte local_a0 [16];
  undefined8 auStack_90 [2];
  uchar auStack_80 [32];
  
  uVar26 = (uint)(param_3 >> 3);
  if (0x20 < uVar26) {
    return 0;
  }
  uVar25 = param_3 >> 3 & 0xffffffff;
  if ((1L << (param_3 >> 3 & 0x3f) & 0x110100000U) == 0) {
    return 0;
  }
  if (param_4 == (EVP_MD *)0x0) {
    param_4 = EVP_sha1();
  }
  if (param_2 < 0x201) {
    param_2 = 0x200;
  }
  if (param_5 != (void *)0x0) {
    sVar10 = (size_t)(int)uVar26;
    if (param_6 < sVar10) {
      return 0;
    }
    if (param_6 <= sVar10) {
      sVar10 = param_6;
    }
    memcpy(auStack_80,param_5,sVar10);
  }
  mont = BN_MONT_CTX_new();
  if (mont == (BN_MONT_CTX *)0x0) {
    uVar23 = 0;
    ctx = (BN_CTX *)0x0;
    goto LAB_00ba8178;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    uVar23 = 0;
    goto LAB_00ba8178;
  }
  BN_CTX_start(ctx);
  pBVar7 = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  pBVar8 = BN_CTX_get(ctx);
  ret = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  rem = BN_CTX_get(ctx);
  r_00 = BN_CTX_get(ctx);
  r_01 = BN_CTX_get(ctx);
  if (r_01 != (BIGNUM *)0x0) {
    pBVar9 = BN_value_one();
    uVar22 = (param_2 + 0x3f & 0xffffffffffffffc0) - 1;
    iVar6 = (int)uVar22;
    iVar3 = BN_lshift(r_01,pBVar9,iVar6);
    if (iVar3 != 0) {
      uVar20 = param_3 >> 3 & 0x1f;
      sVar10 = (size_t)(int)uVar26;
      lVar21 = uVar25 - uVar20;
      lVar11 = (long)(((param_3 >> 3) << 0x20) + -0x100000000) >> 0x20;
      local_e4 = 0;
LAB_00ba7c24:
      do {
        iVar3 = BN_GENCB_call(param_10,0,local_e4);
        if ((iVar3 == 0) ||
           ((param_5 == (void *)0x0 && (iVar3 = RAND_bytes(auStack_80,uVar26), iVar3 < 1)))) break;
        local_e4 = local_e4 + 1;
        memcpy(acStack_c1 + 1,auStack_80,sVar10);
        memcpy(local_e0,auStack_80,sVar10);
        sVar15 = sVar10;
        do {
          sVar12 = sVar15 - 1;
          cVar2 = acStack_c1[sVar15];
          acStack_c1[sVar15] = cVar2 + '\x01';
          if ((char)(cVar2 + '\x01') != '\0') break;
          sVar15 = sVar12;
        } while (0 < (long)sVar12);
        iVar3 = EVP_Digest(auStack_80,sVar10,local_a0,(uint *)0x0,param_4,(ENGINE *)0x0);
        if ((iVar3 == 0) ||
           (iVar3 = EVP_Digest(acStack_c1 + 1,sVar10,local_e0,(uint *)0x0,param_4,(ENGINE *)0x0),
           iVar3 == 0)) break;
        lVar19 = 0;
        if ((uVar25 < 0x20) ||
           (lVar13 = lVar21, puVar16 = auStack_90, puVar18 = &uStack_d0, lVar21 == 0)) {
LAB_00ba7d3c:
          lVar13 = uVar25 - lVar19;
          pbVar14 = local_e0 + lVar19;
          pbVar17 = local_a0 + lVar19;
          do {
            lVar13 = lVar13 + -1;
            *pbVar17 = *pbVar17 ^ *pbVar14;
            pbVar14 = pbVar14 + 1;
            pbVar17 = pbVar17 + 1;
          } while (lVar13 != 0);
        }
        else {
          do {
            uVar28 = puVar18[-1];
            uVar27 = puVar18[-2];
            uVar30 = puVar18[1];
            uVar29 = *puVar18;
            uVar32 = puVar16[-1];
            uVar31 = puVar16[-2];
            uVar34 = puVar16[1];
            uVar33 = *puVar16;
            lVar13 = lVar13 + -0x20;
            puVar16[-1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                            (byte)((ulong)uVar28 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                     (byte)((ulong)uVar28 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                              (byte)((ulong)uVar28 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar32 >> 0x18)
                                                                       ^ (byte)((ulong)uVar28 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar32
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar28
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar32 >> 8) ^ (byte)((ulong)uVar28 >> 8),
                                                  (byte)uVar32 ^ (byte)uVar28)))))));
            puVar16[-2] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                            (byte)((ulong)uVar27 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                     (byte)((ulong)uVar27 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                              (byte)((ulong)uVar27 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar31 >> 0x18)
                                                                       ^ (byte)((ulong)uVar27 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar31
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar27
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar31 >> 8) ^ (byte)((ulong)uVar27 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar27)))))));
            puVar16[1] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                           (byte)((ulong)uVar30 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                    (byte)((ulong)uVar30 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                             (byte)((ulong)uVar30 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar34 >> 0x18)
                                                                      ^ (byte)((ulong)uVar30 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar34
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar30
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar34 >> 8) ^ (byte)((ulong)uVar30 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar30)))))));
            *puVar16 = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                                CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                         (byte)((ulong)uVar29 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                  (byte)((ulong)uVar29 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                           (byte)((ulong)uVar29 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                                    (byte)((ulong)uVar29 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar33 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar29 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uVar29 >> 8),
                                                  (byte)uVar33 ^ (byte)uVar29)))))));
            puVar16 = puVar16 + 4;
            puVar18 = puVar18 + 4;
          } while (lVar13 != 0);
          lVar19 = lVar21;
          if (uVar20 != 0) goto LAB_00ba7d3c;
        }
        local_a0[0] = local_a0[0] | 0x80;
        local_a0[lVar11] = local_a0[lVar11] | 1;
        pBVar9 = BN_bin2bn(local_a0,uVar26,ret);
        if (pBVar9 == (BIGNUM *)0x0) break;
        iVar3 = BN_is_prime_fasttest_ex(ret,0x32,ctx,(uint)(param_5 == (void *)0x0),param_10);
        if (0 < iVar3) {
          iVar3 = BN_GENCB_call(param_10,2,0);
          if ((iVar3 == 0) || (iVar3 = BN_GENCB_call(param_10,3,0), iVar3 == 0)) break;
          iVar3 = 0;
          do {
            if ((iVar3 != 0) && (iVar4 = BN_GENCB_call(param_10,0,iVar3), iVar4 == 0))
            goto LAB_00ba8168;
            BN_set_word(pBVar8,0);
            iVar4 = (int)(uVar22 / 0xa0);
            if (-1 < iVar4) {
              sVar15 = sVar10;
              iVar24 = 0;
LAB_00ba7e40:
              do {
                if (0 < (long)sVar15) {
                  cVar2 = acStack_c1[sVar15];
                  acStack_c1[sVar15] = cVar2 + '\x01';
                  sVar15 = sVar15 - 1;
                  if ((char)(cVar2 + '\x01') == '\0') goto LAB_00ba7e40;
                }
                iVar5 = EVP_Digest(acStack_c1 + 1,sVar10,local_a0,(uint *)0x0,param_4,(ENGINE *)0x0)
                ;
                if ((((iVar5 == 0) ||
                     (pBVar9 = BN_bin2bn(local_a0,uVar26,pBVar7), pBVar9 == (BIGNUM *)0x0)) ||
                    (iVar5 = BN_lshift(pBVar7,pBVar7,iVar24 * ((uint)param_3 & 0xfffffff8)),
                    iVar5 == 0)) || (iVar5 = BN_add(pBVar8,pBVar8,pBVar7), iVar5 == 0))
                goto LAB_00ba8168;
                bVar1 = iVar24 < iVar4;
                sVar15 = sVar10;
                iVar24 = iVar24 + 1;
              } while (bVar1);
            }
            iVar4 = BN_mask_bits(pBVar8,iVar6);
            if (((iVar4 == 0) || (pBVar9 = BN_copy(a,pBVar8), pBVar9 == (BIGNUM *)0x0)) ||
               ((iVar4 = BN_add(a,a,r_01), iVar4 == 0 ||
                ((iVar4 = BN_lshift1(pBVar7,ret), iVar4 == 0 ||
                 (iVar4 = BN_div((BIGNUM *)0x0,rem,a,pBVar7,ctx), iVar4 == 0))))))
            goto LAB_00ba8168;
            pBVar9 = BN_value_one();
            iVar4 = BN_sub(pBVar7,rem,pBVar9);
            if ((iVar4 == 0) || (iVar4 = BN_sub(r_00,a,pBVar7), iVar4 == 0)) goto LAB_00ba8168;
            iVar4 = BN_cmp(r_00,r_01);
            if (-1 < iVar4) {
              iVar4 = BN_is_prime_fasttest_ex(r_00,0x32,ctx,1,param_10);
              if (0 < iVar4) {
                iVar6 = BN_GENCB_call(param_10,2,1);
                if (iVar6 == 0) goto LAB_00ba8168;
                pBVar8 = BN_value_one();
                iVar6 = BN_sub(r_01,r_00,pBVar8);
                    /* try { // try from 00ba800c to 00ca8047 has its CatchHandler @ 00ba800c
                       catch() { ... } // from try @ 00ba800c with catch @ 00ba800c
                       catch() { ... } // from try @ 00ba804c with catch @ 00ba800c */
                    /* try { // try from 00ba8048 to 00ca804b has its CatchHandler @ 00ba805c */
                if ((((iVar6 == 0) ||
                     (iVar6 = BN_div(pBVar7,(BIGNUM *)0x0,r_01,ret,ctx), iVar6 == 0)) ||
                    (iVar6 = BN_set_word(r_01,2), iVar6 == 0)) ||
                   ((iVar6 = BN_MONT_CTX_set(mont,r_00,ctx), iVar6 == 0 ||
                    (iVar6 = BN_mod_exp_mont(r,r_01,pBVar7,r_00,ctx,mont), iVar6 == 0))))
                goto LAB_00ba8168;
                    /* try { // try from 00ba804c to 00ca806f has its CatchHandler @ 00ba800c */
                uVar26 = 2;
                goto LAB_00ba8058;
              }
              if (iVar4 != 0) goto LAB_00ba8168;
            }
            bVar1 = iVar3 < 0xfff;
            iVar3 = iVar3 + 1;
          } while (bVar1);
          param_5 = (void *)0x0;
          goto LAB_00ba7c24;
        }
        param_5 = (void *)0x0;
      } while (iVar3 == 0);
LAB_00ba8168:
      uVar23 = 0;
      goto LAB_00ba8170;
    }
  }
  uVar23 = 0;
  goto LAB_00ba8170;
  while( true ) {
    pBVar8 = BN_value_one();
                    /* try { // try from 00ba8070 to 00ca80bb has its CatchHandler @ 00ba8070
                       catch() { ... } // from try @ 00ba8070 with catch @ 00ba8070
                       catch() { ... } // from try @ 00ba80f0 with catch @ 00ba8070 */
    iVar6 = BN_add(r_01,r_01,pBVar8);
    if (iVar6 == 0) goto LAB_00ba8168;
    uVar26 = uVar26 + 1;
    iVar6 = BN_mod_exp_mont(r,r_01,pBVar7,r_00,ctx,mont);
    uVar23 = 0;
    if (iVar6 == 0) break;
LAB_00ba8058:
                    /* catch() { ... } // from try @ 00ba8048 with catch @ 00ba805c */
    iVar6 = BN_is_one(r);
    if (iVar6 == 0) {
      iVar6 = BN_GENCB_call(param_10,3,1);
                    /* try { // try from 00ba80bc to 00ca80d7 has its CatchHandler @ 00ba816c */
      if (iVar6 == 0) goto LAB_00ba8168;
      BN_free(*(BIGNUM **)(param_1 + 0x10));
      BN_free(*(BIGNUM **)(param_1 + 0x18));
      BN_free(*(BIGNUM **)(param_1 + 0x20));
      pBVar7 = BN_dup(r_00);
      *(BIGNUM **)(param_1 + 0x10) = pBVar7;
                    /* try { // try from 00ba80ec to 00ca80ef has its CatchHandler @ 00ba8128 */
      pBVar7 = BN_dup(ret);
                    /* try { // try from 00ba80f0 to 00ca81f3 has its CatchHandler @ 00ba8070 */
      *(BIGNUM **)(param_1 + 0x18) = pBVar7;
      pBVar7 = BN_dup(r);
      *(BIGNUM **)(param_1 + 0x20) = pBVar7;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_00ba8168;
      uVar23 = 0;
      if ((pBVar7 != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x18) != 0)) {
        if (param_8 != (int *)0x0) {
                    /* catch() { ... } // from try @ 00ba80ec with catch @ 00ba8128 */
          *param_8 = iVar3;
        }
        if (param_9 != (ulong *)0x0) {
          *param_9 = (ulong)uVar26;
        }
        if (param_7 != (void *)0x0) {
          memcpy(param_7,auStack_80,sVar10);
        }
        uVar23 = 1;
      }
      break;
    }
  }
LAB_00ba8170:
  BN_CTX_end(ctx);
LAB_00ba8178:
  BN_CTX_free(ctx);
  BN_MONT_CTX_free(mont);
  return uVar23;
}

