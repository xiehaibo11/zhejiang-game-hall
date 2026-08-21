
int BN_mod_exp_mont_consttime
              (BIGNUM *rr,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *in_mont)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BN_MONT_CTX *mont;
  undefined1 *puVar6;
  BIGNUM *pBVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  uint uVar15;
  int iVar16;
  undefined1 *ptr;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_e0 [8];
  ulong *local_d8;
  BIGNUM *local_d0;
  ulong local_c8;
  undefined1 *local_c0;
  BN_MONT_CTX *local_b8;
  ulong local_b0;
  uint local_a4;
  ulong local_a0;
  BN_MONT_CTX *local_98;
  BIGNUM local_90;
  BIGNUM local_78;
  
  iVar3 = BN_is_odd(m);
  if (iVar3 == 0) {
    ERR_put_error(3,0x7c,0x66,"crypto/bn/bn_exp.c",0x26e);
    return 0;
  }
  uVar15 = m->top;
  uVar17 = (ulong)uVar15;
  iVar3 = BN_num_bits(p);
  if (iVar3 == 0) {
    iVar3 = BN_is_one(m);
    if (iVar3 != 0) {
      BN_set_word(rr,0);
      return 1;
    }
    iVar3 = BN_set_word(rr,1);
    return iVar3;
  }
  BN_CTX_start(ctx);
  mont = in_mont;
  if ((in_mont == (BN_MONT_CTX *)0x0) &&
     ((mont = BN_MONT_CTX_new(), mont == (BN_MONT_CTX *)0x0 ||
      (iVar4 = BN_MONT_CTX_set(mont,m,ctx), iVar4 == 0)))) {
    puVar14 = (ulong *)0x0;
    local_a0 = 0;
    ptr = (undefined1 *)0x0;
    uVar15 = 0;
  }
  else {
    if (iVar3 < 0x3aa) {
      if (iVar3 < 0x133) {
        if (iVar3 < 0x5a) {
          uVar18 = 3;
          if (iVar3 < 0x17) {
            uVar18 = 1;
          }
        }
        else {
          uVar18 = 4;
        }
      }
      else {
        uVar18 = 5;
      }
    }
    else {
      uVar18 = 6;
    }
    local_a4 = 1 << (ulong)uVar18;
    uVar2 = uVar15 * 2;
    if ((int)(uVar15 * 2) <= (int)local_a4) {
      uVar2 = local_a4;
    }
    uVar2 = uVar2 + (uVar15 << (ulong)uVar18);
    lVar10 = (ulong)uVar2 << 0x23;
    uVar19 = (ulong)uVar2 << 3;
    local_a0 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | uVar19;
    lVar8 = lVar10 + 0x4000000000;
    local_d0 = rr;
    local_98 = mont;
    if ((int)uVar19 < 0xc00) {
      puVar6 = auStack_e0 + -((lVar8 >> 0x20) + 0xfU & 0xfffffffffffffff0);
LAB_00b87bdc:
      local_c8 = (ulong)puVar6 & 0x3f;
      puVar14 = (ulong *)(puVar6 + (0x40 - local_c8));
      local_b8 = in_mont;
      memset(puVar14,0,lVar10 >> 0x20);
      local_78.top = 0;
      local_b0 = (ulong)local_a4;
      lVar8 = (long)(int)uVar15 * 8 * local_b0;
      local_78.d = (ulong *)((long)puVar14 + lVar8);
      local_90.d = local_78.d + (int)uVar15;
      local_90.neg = 0;
      local_90.flags = 2;
      local_90.top = 0;
      local_78.neg = 0;
      local_78.flags = 2;
      puVar11 = m->d;
      local_c0 = (undefined1 *)0x0;
      if (0xbff < (int)local_a0) {
        local_c0 = puVar6;
      }
      local_90.dmax = uVar15;
      local_78.dmax = uVar15;
      if ((long)puVar11[(int)(uVar15 - 1)] < 0) {
        *local_78.d = -*puVar11;
        if (1 < (int)uVar15) {
          if (uVar17 - 1 < 4) {
LAB_00b87cf4:
            lVar12 = 1;
          }
          else {
            uVar2 = uVar15 + 3 & 3;
            lVar10 = (uVar17 - 1) - (ulong)uVar2;
            if ((lVar10 == 0) ||
               ((puVar6 + ((lVar8 + 0x48) - local_c8) < puVar11 + uVar17 &&
                (puVar11 + 1 < puVar6 + ((lVar8 + uVar17 * 8 + 0x40) - local_c8)))))
            goto LAB_00b87cf4;
            lVar12 = lVar10 + 1;
            puVar9 = puVar11 + 3;
            puVar13 = (undefined8 *)(puVar6 + ((lVar8 + 0x58) - local_c8));
            do {
              uVar20 = puVar9[-1];
              uVar19 = puVar9[-2];
              uVar22 = puVar9[1];
              uVar21 = *puVar9;
              lVar10 = lVar10 + -4;
              puVar9 = puVar9 + 4;
              puVar13[-1] = CONCAT17(~(byte)(uVar20 >> 0x38),
                                     CONCAT16(~(byte)(uVar20 >> 0x30),
                                              CONCAT15(~(byte)(uVar20 >> 0x28),
                                                       CONCAT14(~(byte)(uVar20 >> 0x20),
                                                                CONCAT13(~(byte)(uVar20 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar20 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar20 >> 8),~(byte)uVar20)))))));
              puVar13[-2] = CONCAT17(~(byte)(uVar19 >> 0x38),
                                     CONCAT16(~(byte)(uVar19 >> 0x30),
                                              CONCAT15(~(byte)(uVar19 >> 0x28),
                                                       CONCAT14(~(byte)(uVar19 >> 0x20),
                                                                CONCAT13(~(byte)(uVar19 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar19 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar19 >> 8),~(byte)uVar19)))))));
              puVar13[1] = CONCAT17(~(byte)(uVar22 >> 0x38),
                                    CONCAT16(~(byte)(uVar22 >> 0x30),
                                             CONCAT15(~(byte)(uVar22 >> 0x28),
                                                      CONCAT14(~(byte)(uVar22 >> 0x20),
                                                               CONCAT13(~(byte)(uVar22 >> 0x18),
                                                                        CONCAT12(~(byte)(uVar22 >>
                                                                                        0x10),
                                                                                 CONCAT11(~(byte)(
                                                  uVar22 >> 8),~(byte)uVar22)))))));
              *puVar13 = CONCAT17(~(byte)(uVar21 >> 0x38),
                                  CONCAT16(~(byte)(uVar21 >> 0x30),
                                           CONCAT15(~(byte)(uVar21 >> 0x28),
                                                    CONCAT14(~(byte)(uVar21 >> 0x20),
                                                             CONCAT13(~(byte)(uVar21 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar21 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar21 >> 8),~(byte)uVar21)))))));
              puVar13 = puVar13 + 4;
            } while (lVar10 != 0);
            if (uVar2 == 0) goto LAB_00b87d2c;
          }
          lVar10 = uVar17 - lVar12;
          puVar9 = (ulong *)(puVar6 + ((lVar8 + lVar12 * 8 + 0x40) - local_c8));
          puVar11 = puVar11 + lVar12;
          do {
            lVar10 = lVar10 + -1;
            *puVar9 = ~*puVar11;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar10 != 0);
        }
LAB_00b87d2c:
        local_78.top = uVar15;
        if (a->neg != 0) goto LAB_00b87d48;
LAB_00b87d38:
        iVar4 = BN_ucmp(a,m);
        if (-1 < iVar4) goto LAB_00b87d48;
      }
      else {
        pBVar7 = BN_value_one();
        iVar4 = BN_to_montgomery(&local_78,pBVar7,local_98,ctx);
        ptr = local_c0;
        mont = local_98;
        in_mont = local_b8;
        if (iVar4 == 0) goto joined_r0x00b87d80;
        if (a->neg == 0) goto LAB_00b87d38;
LAB_00b87d48:
        iVar4 = BN_div((BIGNUM *)0x0,&local_90,a,m,ctx);
        ptr = local_c0;
        mont = local_98;
        in_mont = local_b8;
        if (iVar4 == 0) goto joined_r0x00b87d80;
        a = &local_90;
      }
      iVar4 = BN_to_montgomery(&local_90,a,local_98,ctx);
      puVar11 = local_78.d;
      uVar17 = local_b0;
      in_mont = local_b8;
      ptr = local_c0;
      mont = local_98;
      if (iVar4 != 0) {
        uVar2 = local_78.top;
        if ((int)uVar15 <= local_78.top) {
          uVar2 = uVar15;
        }
        if (0 < (int)uVar2) {
          lVar8 = 0;
          puVar9 = puVar14;
          do {
            puVar1 = puVar11 + lVar8;
            lVar8 = lVar8 + 1;
            *puVar9 = *puVar1;
            puVar9 = puVar9 + uVar17;
          } while (lVar8 < (int)uVar2);
        }
        puVar11 = local_90.d;
        uVar19 = local_b0;
        uVar17 = local_c8;
        uVar2 = local_90.top;
        if ((int)uVar15 <= local_90.top) {
          uVar2 = uVar15;
        }
        local_d8 = puVar14;
        if (0 < (int)uVar2) {
          lVar8 = 0;
          puVar14 = (ulong *)(puVar6 + (0x48 - local_c8));
          do {
            puVar9 = puVar11 + lVar8;
            lVar8 = lVar8 + 1;
            *puVar14 = *puVar9;
            puVar14 = puVar14 + uVar19;
          } while (lVar8 < (int)uVar2);
        }
        if (1 < uVar18) {
          iVar4 = BN_mod_mul_montgomery(&local_78,&local_90,&local_90,local_98,ctx);
          puVar11 = local_78.d;
          uVar19 = local_b0;
          ptr = local_c0;
          puVar14 = local_d8;
          mont = local_98;
          if (iVar4 == 0) goto joined_r0x00b87d80;
          uVar2 = local_78.top;
          if ((int)uVar15 <= local_78.top) {
            uVar2 = uVar15;
          }
          if (0 < (int)uVar2) {
            lVar8 = 0;
            puVar14 = (ulong *)(puVar6 + (0x50 - uVar17));
            do {
              puVar9 = puVar11 + lVar8;
              lVar8 = lVar8 + 1;
              *puVar14 = *puVar9;
              puVar14 = puVar14 + uVar19;
            } while (lVar8 < (int)uVar2);
          }
          mont = local_98;
          uVar19 = local_b0;
          if (3 < (int)local_a4) {
            puVar11 = (ulong *)(puVar6 + (0x58 - uVar17));
            lVar8 = 3;
            do {
              iVar4 = BN_mod_mul_montgomery(&local_78,&local_90,&local_78,mont,ctx);
              puVar9 = local_78.d;
              ptr = local_c0;
              puVar14 = local_d8;
              if (iVar4 == 0) goto joined_r0x00b87d80;
              uVar2 = local_78.top;
              if ((int)uVar15 <= local_78.top) {
                uVar2 = uVar15;
              }
              if (0 < (int)uVar2) {
                lVar10 = 0;
                puVar14 = puVar11;
                do {
                  puVar1 = puVar9 + lVar10;
                  lVar10 = lVar10 + 1;
                  *puVar14 = *puVar1;
                  puVar14 = puVar14 + uVar19;
                } while (lVar10 < (int)uVar2);
              }
              lVar8 = lVar8 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar8 < (long)local_b0);
          }
        }
        mont = local_98;
        iVar3 = iVar3 + -1;
        iVar4 = 0;
        if (uVar18 != 0) {
          iVar4 = iVar3 / (int)uVar18;
        }
        iVar16 = 0;
        iVar4 = iVar3 - iVar4 * uVar18;
        if (-1 < iVar4) {
          iVar4 = iVar4 + 1;
          do {
            iVar5 = BN_is_bit_set(p,iVar3);
            iVar4 = iVar4 + -1;
            iVar16 = iVar5 + iVar16 * 2;
            iVar3 = iVar3 + -1;
          } while (0 < iVar4);
        }
        puVar14 = local_d8;
        iVar4 = FUN_00b8810c(&local_78,uVar15,local_d8,iVar16,uVar18);
        while (ptr = local_c0, iVar4 != 0) {
          if (iVar3 < 0) {
            iVar3 = BN_from_montgomery(local_d0,&local_78,mont,ctx);
            uVar15 = (uint)(iVar3 != 0);
            ptr = local_c0;
            goto joined_r0x00b88104;
          }
          iVar4 = 0;
          iVar16 = 0;
          do {
            iVar5 = BN_mod_mul_montgomery(&local_78,&local_78,&local_78,mont,ctx);
            ptr = local_c0;
            puVar14 = local_d8;
            if (iVar5 == 0) goto joined_r0x00b87d80;
            iVar5 = BN_is_bit_set(p,iVar3);
            puVar14 = local_d8;
            iVar4 = iVar4 + 1;
            iVar16 = iVar5 + iVar16 * 2;
            iVar3 = iVar3 + -1;
          } while (iVar4 < (int)uVar18);
          iVar4 = FUN_00b8810c(&local_90,uVar15,local_d8,iVar16,uVar18);
          ptr = local_c0;
          if (iVar4 == 0) break;
          iVar4 = BN_mod_mul_montgomery(&local_78,&local_78,&local_90,mont,ctx);
        }
      }
    }
    else {
      puVar6 = CRYPTO_malloc((int)((ulong)lVar8 >> 0x20),"crypto/bn/bn_exp.c",0x2ce);
      if (puVar6 != (undefined1 *)0x0) goto LAB_00b87bdc;
      ptr = (undefined1 *)0x0;
      puVar14 = (ulong *)0x0;
      mont = local_98;
    }
joined_r0x00b87d80:
    uVar15 = 0;
joined_r0x00b88104:
    if (in_mont != (BN_MONT_CTX *)0x0) goto LAB_00b88054;
  }
  BN_MONT_CTX_free(mont);
LAB_00b88054:
  if (puVar14 != (ulong *)0x0) {
    OPENSSL_cleanse(puVar14,(long)(int)local_a0);
    CRYPTO_free(ptr);
  }
  BN_CTX_end(ctx);
  return uVar15;
}

