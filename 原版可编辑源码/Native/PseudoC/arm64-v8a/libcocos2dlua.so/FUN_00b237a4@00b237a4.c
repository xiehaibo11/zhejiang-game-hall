
int FUN_00b237a4(EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,ulong param_4,void *param_5,
                void *param_6,BN_CTX *param_7)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  EC_POINT *a;
  EC_POINT *p;
  BIGNUM *pBVar15;
  BIGNUM *y;
  long lVar16;
  void *pvVar17;
  byte *ptr;
  void *ptr_00;
  long lVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  void *__src;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  long lVar27;
  size_t __n;
  BN_CTX *c;
  void *__dest;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 *puVar31;
  byte bVar32;
  uint local_1b8;
  void *local_198;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  local_68 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  if (0xffffffe < param_4) {
    iVar14 = 0x41;
    iVar19 = 0x48f;
LAB_00b23844:
    ERR_put_error(0x10,0xf1,iVar14,"crypto/ec/ecp_nistz256.c",iVar19);
    return 0;
  }
  if (*(long *)param_1 != *(long *)param_2) {
    iVar14 = 0x65;
    iVar19 = 0x494;
    goto LAB_00b23844;
  }
  if ((param_3 == (BIGNUM *)0x0) && (param_4 == 0)) {
    iVar14 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar14;
  }
  if (param_4 != 0) {
    uVar22 = 0;
    do {
      if (*(long *)param_1 != **(long **)((long)param_5 + uVar22 * 8)) {
        iVar14 = 0x65;
        iVar19 = 0x49d;
        goto LAB_00b23844;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < param_4);
  }
  if (param_7 == (BN_CTX *)0x0) {
    param_7 = BN_CTX_new();
    c = param_7;
    if (param_7 == (BN_CTX *)0x0) {
      local_198 = (void *)0x0;
      __dest = (void *)0x0;
      iVar14 = 0;
      goto LAB_00b24454;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_7);
  if (param_3 == (BIGNUM *)0x0) {
    __dest = (void *)0x0;
    local_198 = (void *)0x0;
    bVar13 = true;
    if (param_4 == 0) {
LAB_00b243a4:
      iVar14 = bn_set_words(*(undefined8 *)(param_2 + 8),&local_160,4);
      if (((iVar14 == 0) ||
          (iVar14 = bn_set_words(*(undefined8 *)(param_2 + 0x10),&local_140,4), iVar14 == 0)) ||
         (iVar14 = bn_set_words(*(undefined8 *)(param_2 + 0x18),&local_120,4), iVar14 == 0))
      goto LAB_00b24444;
      uVar21 = *(undefined8 *)(param_2 + 0x18);
      puVar24 = (ulong *)bn_get_words(uVar21);
      iVar14 = bn_get_top(uVar21);
      if (iVar14 == 4) {
        uVar22 = puVar24[1] ^ 0xffffffff00000000 | *puVar24 ^ 1 | puVar24[2] ^ 0xffffffffffffffff |
                 puVar24[3] ^ 0xfffffffe;
        uVar20 = ((uint)(uVar22 >> 0x20) | (uint)(-uVar22 >> 0x20)) >> 0x1f ^ 1;
      }
      else {
        uVar20 = 0;
      }
      iVar14 = 1;
      *(uint *)(param_2 + 0x20) = uVar20;
    }
    else {
LAB_00b23af0:
      puVar24 = &local_160;
      if (!bVar13) {
        puVar24 = &local_100;
      }
      if (((param_4 << 4 | 6) < 0x1555556) &&
         (pvVar17 = CRYPTO_malloc(((uint)(param_4 << 4) | 5) * 0x60 + 0x40,
                                  "crypto/ec/ecp_nistz256.c",0x25d), pvVar17 != (void *)0x0)) {
        ptr = CRYPTO_malloc((int)param_4 * 0x21,"crypto/ec/ecp_nistz256.c",0x25f);
        if ((ptr == (byte *)0x0) ||
           (ptr_00 = CRYPTO_malloc((int)(param_4 << 3),"crypto/ec/ecp_nistz256.c",0x260),
           ptr_00 == (void *)0x0)) goto LAB_00b24088;
        uVar22 = 0;
        lVar29 = (long)pvVar17 + (0x40 - ((ulong)pvVar17 & 0x3f));
        __src = (void *)(lVar29 + param_4 * 0x600);
        puVar1 = (ulong *)((long)__src + 0x20);
        lVar30 = (long)__src + 0x60;
        lVar16 = (long)__src + 0xc0;
        lVar28 = (long)__src + 0x120;
        lVar2 = (long)__src + 0x180;
        pbVar26 = ptr;
        do {
          iVar14 = BN_num_bits(*(BIGNUM **)((long)param_6 + uVar22 * 8));
          if ((0x100 < iVar14) ||
             (iVar14 = BN_is_negative(*(undefined8 *)((long)param_6 + uVar22 * 8)), iVar14 != 0)) {
            pBVar15 = BN_CTX_get(param_7);
            if (pBVar15 != (BIGNUM *)0x0) {
              iVar14 = BN_nnmod(pBVar15,*(BIGNUM **)((long)param_6 + uVar22 * 8),
                                *(BIGNUM **)(param_1 + 0x10),param_7);
              if (iVar14 != 0) goto LAB_00b23ea0;
              iVar14 = 3;
              iVar19 = 0x272;
LAB_00b24854:
              ERR_put_error(0x10,0xf2,iVar14,"crypto/ec/ecp_nistz256.c",iVar19);
            }
            goto LAB_00b240a8;
          }
          pBVar15 = *(BIGNUM **)((long)param_6 + uVar22 * 8);
LAB_00b23ea0:
          puVar25 = (undefined8 *)((long)ptr_00 + uVar22 * 8);
          *puVar25 = pBVar15;
          iVar14 = bn_get_top(pBVar15);
          if (iVar14 < 1) {
            lVar27 = 0;
LAB_00b23f4c:
            memset(ptr + (long)(int)lVar27 + uVar22 * 0x21,0,(ulong)(0x20 - (int)lVar27) + 1);
          }
          else {
            uVar23 = 0;
            lVar27 = 0;
            do {
              lVar18 = bn_get_words(*puVar25);
              uVar21 = *(undefined8 *)(lVar18 + (uVar23 & 0x1fffffff) * 8);
              pbVar8 = pbVar26 + lVar27;
              lVar27 = lVar27 + 8;
              pbVar8[1] = (byte)((ulong)uVar21 >> 8);
              pbVar8[2] = (byte)((ulong)uVar21 >> 0x10);
              pbVar8[3] = (byte)((ulong)uVar21 >> 0x18);
              pbVar8[4] = (byte)((ulong)uVar21 >> 0x20);
              *pbVar8 = (byte)uVar21;
              pbVar8[5] = (byte)((ulong)uVar21 >> 0x28);
              pbVar8[6] = (byte)((ulong)uVar21 >> 0x30);
              pbVar8[7] = (byte)((ulong)uVar21 >> 0x38);
              iVar14 = bn_get_top(*puVar25);
              uVar23 = uVar23 + 1;
            } while (lVar27 < iVar14 << 3);
            if ((int)lVar27 < 0x21) goto LAB_00b23f4c;
          }
          iVar14 = bn_copy_words(__src,*(undefined8 *)(*(long *)((long)param_5 + uVar22 * 8) + 8),4)
          ;
          if (((iVar14 == 0) ||
              (iVar14 = bn_copy_words(puVar1,*(undefined8 *)
                                              (*(long *)((long)param_5 + uVar22 * 8) + 0x10),4),
              iVar14 == 0)) ||
             (iVar14 = bn_copy_words((long)__src + 0x40,
                                     *(undefined8 *)(*(long *)((long)param_5 + uVar22 * 8) + 0x18),4
                                    ), iVar14 == 0)) {
            iVar14 = 0x92;
            iVar19 = 0x28f;
            goto LAB_00b24854;
          }
          lVar27 = lVar29 + uVar22 * 0x600;
          ecp_nistz256_scatter_w5(lVar27,__src,1);
          ecp_nistz256_point_double(lVar30,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar30,2);
          ecp_nistz256_point_add(lVar16,lVar30,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar16,3);
          ecp_nistz256_point_double(lVar30,lVar30);
          ecp_nistz256_scatter_w5(lVar27,lVar30,4);
          ecp_nistz256_point_double(lVar16,lVar16);
          ecp_nistz256_scatter_w5(lVar27,lVar16,6);
          ecp_nistz256_point_add(lVar28,lVar30,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar28,5);
          ecp_nistz256_point_add(lVar2,lVar16,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar2,7);
          ecp_nistz256_point_double(lVar30,lVar30);
          ecp_nistz256_scatter_w5(lVar27,lVar30,8);
          ecp_nistz256_point_double(lVar16,lVar16);
          ecp_nistz256_scatter_w5(lVar27,lVar16,0xc);
          ecp_nistz256_point_double(lVar28,lVar28);
          ecp_nistz256_scatter_w5(lVar27,lVar28,10);
          ecp_nistz256_point_double(lVar2,lVar2);
          ecp_nistz256_scatter_w5(lVar27,lVar2,0xe);
          ecp_nistz256_point_add(lVar16,lVar16,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar16,0xd);
          ecp_nistz256_point_add(lVar28,lVar28,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar28,0xb);
          ecp_nistz256_point_add(lVar2,lVar2,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar2,0xf);
          ecp_nistz256_point_add(lVar16,lVar30,__src);
          ecp_nistz256_scatter_w5(lVar27,lVar16,9);
          ecp_nistz256_point_double(lVar30,lVar30);
          ecp_nistz256_scatter_w5(lVar27,lVar30,0x10);
          uVar22 = uVar22 + 1;
          pbVar26 = pbVar26 + 0x21;
        } while (uVar22 < param_4);
        ecp_nistz256_gather_w5(__src,lVar29,(ptr[0x1f] >> 5 & 2) + (uint)(ptr[0x1f] >> 6) >> 1);
        memcpy(puVar24,__src,0x60);
        lVar30 = lVar29 + param_4 * 0x600;
        puVar3 = (ulong *)(lVar30 + 0x80);
        puVar4 = (ulong *)(lVar30 + 0x28);
        puVar5 = (ulong *)(lVar30 + 0x30);
        puVar6 = (ulong *)(lVar30 + 0x38);
        uVar20 = 0xff;
        local_1b8 = 0xfe;
        do {
          uVar22 = (ulong)(uVar20 == 0xff);
          lVar16 = param_4 - uVar22;
          if (uVar22 <= param_4 && lVar16 != 0) {
            lVar28 = (long)pvVar17 + uVar22 * 0x600 + (0x40 - ((ulong)pvVar17 & 0x3f));
            pbVar26 = ptr + (uVar22 | uVar22 << 5) + (ulong)(local_1b8 >> 3) + 1;
            do {
              uVar11 = CONCAT11(*pbVar26,pbVar26[-1]) >> (ulong)(uVar20 - 1 & 7);
              uVar9 = uVar11 & 0x3f;
              uVar10 = uVar11 >> 5 & 1;
              uVar9 = uVar10 + 0x3f & uVar9 | (uVar9 ^ 0x3f) & -uVar10;
              ecp_nistz256_gather_w5(__src,lVar28,(uVar9 & 1) * 2 + uVar9 >> 1);
              ecp_nistz256_neg(puVar3,puVar1);
              uVar22 = -(ulong)uVar10;
              uVar23 = (ulong)uVar10 - 1;
              *puVar1 = uVar23 & *puVar1 ^ *puVar3 & uVar22;
              *puVar4 = uVar23 & *puVar4 ^ *(ulong *)(lVar30 + 0x88) & uVar22;
              *puVar5 = *puVar5 & uVar23 ^ *(ulong *)(lVar30 + 0x90) & uVar22;
              *puVar6 = *puVar6 & uVar23 ^ *(ulong *)(lVar30 + 0x98) & uVar22;
              ecp_nistz256_point_add(puVar24,puVar24,__src);
              lVar16 = lVar16 + -1;
              lVar28 = lVar28 + 0x600;
              pbVar26 = pbVar26 + 0x21;
            } while (lVar16 != 0);
          }
          uVar20 = uVar20 - 5;
          ecp_nistz256_point_double(puVar24,puVar24);
          ecp_nistz256_point_double(puVar24,puVar24);
          ecp_nistz256_point_double(puVar24,puVar24);
          ecp_nistz256_point_double(puVar24,puVar24);
          ecp_nistz256_point_double(puVar24,puVar24);
          local_1b8 = local_1b8 - 5;
          pbVar26 = ptr;
        } while (4 < uVar20);
        do {
          uVar20 = (*pbVar26 & 0x1f) << 1;
          uVar10 = *pbVar26 >> 4 & 1;
          uVar9 = (uVar20 ^ 0x3f) & -uVar10;
          ecp_nistz256_gather_w5
                    (__src,lVar29,(uVar9 & 1) * 2 + (uVar10 + 0x3f & uVar20 | uVar9) >> 1);
          ecp_nistz256_neg(puVar3,puVar1);
          uVar22 = -(ulong)uVar10;
          uVar23 = (ulong)uVar10 - 1;
          *puVar1 = uVar23 & *puVar1 ^ *puVar3 & uVar22;
          *puVar4 = *puVar4 & uVar23 ^ *(ulong *)(lVar30 + 0x88) & uVar22;
          *puVar5 = *puVar5 & uVar23 ^ *(ulong *)(lVar30 + 0x90) & uVar22;
          *puVar6 = *puVar6 & uVar23 ^ *(ulong *)(lVar30 + 0x98) & uVar22;
          ecp_nistz256_point_add(puVar24,puVar24,__src);
          param_4 = param_4 - 1;
          lVar29 = lVar29 + 0x600;
          pbVar26 = pbVar26 + 0x21;
        } while (param_4 != 0);
        bVar12 = false;
      }
      else {
        ptr = (byte *)0x0;
        pvVar17 = (void *)0x0;
LAB_00b24088:
        ERR_put_error(0x10,0xf2,0x41,"crypto/ec/ecp_nistz256.c",0x261);
        ptr_00 = (void *)0x0;
LAB_00b240a8:
        bVar12 = true;
      }
      CRYPTO_free(pvVar17);
      CRYPTO_free(ptr);
      CRYPTO_free(ptr_00);
      if ((!bVar13) && (!bVar12)) {
        ecp_nistz256_point_add(&local_160,&local_160,puVar24);
        goto LAB_00b243a4;
      }
      if (!bVar12) goto LAB_00b243a4;
LAB_00b24444:
      iVar14 = 0;
    }
    if (param_7 == (BN_CTX *)0x0) goto LAB_00b24454;
  }
  else {
    a = EC_GROUP_get0_generator(param_1);
    if (a == (EC_POINT *)0x0) {
      ERR_put_error(0x10,0xf1,0x71,"crypto/ec/ecp_nistz256.c",0x4ad);
      __dest = (void *)0x0;
    }
    else {
      lVar30 = *(long *)(param_1 + 0xa0);
      if (lVar30 == 0) goto LAB_00b239e0;
      p = EC_POINT_new(param_1);
      if (p != (EC_POINT *)0x0) {
        puVar24 = *(ulong **)(lVar30 + 0x10);
        pBVar15 = BN_new();
        if (pBVar15 != (BIGNUM *)0x0) {
          y = BN_new();
          if (y == (BIGNUM *)0x0) {
            BN_free(pBVar15);
          }
          else {
            uStack_e8 = puVar24[3];
            local_f0 = puVar24[2];
            uStack_f8 = puVar24[1];
            local_100 = *puVar24;
            bn_set_static_words(pBVar15,&local_100,4);
            uStack_148 = puVar24[7];
            local_150 = puVar24[6];
            uStack_158 = puVar24[5];
            local_160 = puVar24[4];
            bn_set_static_words(y,&local_160,4);
            iVar14 = EC_POINT_set_affine_coordinates_GFp(param_1,p,pBVar15,y,param_7);
            BN_free(pBVar15);
            BN_free(y);
            if (iVar14 != 0) {
              iVar14 = EC_POINT_cmp(param_1,a,p,param_7);
              if (iVar14 == 0) {
                puVar31 = *(undefined1 **)(lVar30 + 0x10);
                EC_POINT_free(p);
                if (puVar31 == (undefined1 *)0x0) goto LAB_00b239e0;
LAB_00b239f4:
                iVar14 = BN_num_bits(param_3);
                if ((0x100 < iVar14) ||
                   (iVar14 = BN_is_negative(param_3), pBVar15 = param_3, iVar14 != 0)) {
                  pBVar15 = BN_CTX_get(param_7);
                  __dest = (void *)0x0;
                  if (pBVar15 == (BIGNUM *)0x0) goto LAB_00b2412c;
                  iVar14 = BN_nnmod(pBVar15,param_3,*(BIGNUM **)(param_1 + 0x10),param_7);
                  if (iVar14 == 0) {
                    ERR_put_error(0x10,0xf1,3,"crypto/ec/ecp_nistz256.c",0x4db);
                    goto LAB_00b24124;
                  }
                }
                iVar14 = bn_get_top(pBVar15);
                if (iVar14 < 1) {
                  lVar30 = 0;
LAB_00b2417c:
                  memset((void *)((long)&local_88 + (long)(int)lVar30),0,
                         (ulong)(0x20 - (int)lVar30) + 1);
                }
                else {
                  uVar22 = 0;
                  lVar30 = 0;
                  do {
                    lVar16 = bn_get_words(pBVar15);
                    uVar21 = *(undefined8 *)(lVar16 + (uVar22 & 0x1fffffff) * 8);
                    puVar7 = (undefined1 *)(((ulong)&local_88 | 3) + lVar30);
                    *(char *)((long)&local_88 + lVar30) = (char)uVar21;
                    puVar7[-2] = (char)((ulong)uVar21 >> 8);
                    puVar7[-1] = (char)((ulong)uVar21 >> 0x10);
                    *puVar7 = (char)((ulong)uVar21 >> 0x18);
                    puVar7[1] = (char)((ulong)uVar21 >> 0x20);
                    puVar7[2] = (char)((ulong)uVar21 >> 0x28);
                    puVar7[3] = (char)((ulong)uVar21 >> 0x30);
                    puVar7[4] = (char)((ulong)uVar21 >> 0x38);
                    lVar30 = lVar30 + 8;
                    iVar14 = bn_get_top(pBVar15);
                    uVar22 = uVar22 + 1;
                  } while (lVar30 < iVar14 << 3);
                  if ((int)lVar30 < 0x21) goto LAB_00b2417c;
                }
                uVar20 = ((byte)local_88 & 0x7f) << 1;
                uVar10 = (byte)local_88 >> 6 & 1;
                uVar9 = (uVar20 ^ 0xff) & -uVar10;
                ecp_nistz256_gather_w7
                          (&local_160,puVar31,
                           (uVar9 & 1) * 2 + (uVar10 + 0xff & uVar20 | uVar9) >> 1);
                ecp_nistz256_neg(&local_120,&local_140);
                uVar22 = -(ulong)uVar10;
                uVar23 = (ulong)uVar10 - 1;
                local_140 = uVar23 & local_140 ^ local_120 & uVar22;
                uStack_138 = uStack_138 & uVar23 ^ uStack_118 & uVar22;
                local_130 = local_130 & uVar23 ^ local_110 & uVar22;
                uStack_128 = uStack_128 & uVar23 ^ local_108 & uVar22;
                lVar30 = -0xfc;
                uVar22 = uStack_158 | local_160 | local_150 | uStack_148 | local_140 | uStack_138 |
                         local_130 | uStack_128;
                uVar22 = uVar22 | -uVar22;
                local_110 = (long)uVar22 >> 0x3f;
                local_108 = local_110 & 0xfffffffe;
                bVar32 = (byte)((long)uVar22 >> 0x3f);
                local_120 = (ulong)(bVar32 & 1);
                uStack_118 = (ulong)CONCAT13(bVar32,CONCAT12(bVar32,CONCAT11(bVar32,bVar32))) <<
                             0x20;
                do {
                  puVar31 = puVar31 + 0x1000;
                  uVar20 = (int)lVar30 + 0x102;
                  uVar22 = (ulong)(uVar20 >> 3);
                  uVar11 = CONCAT11(*(undefined1 *)((long)&local_88 + uVar22 + 1),
                                    *(undefined1 *)((long)&local_88 + uVar22)) >>
                           (ulong)(uVar20 & 7);
                  uVar20 = uVar11 & 0xff;
                  uVar9 = uVar11 >> 7 & 1;
                  uVar20 = uVar9 + 0xff & uVar20 | (uVar20 ^ 0xff) & -uVar9;
                  ecp_nistz256_gather_w7(&local_100,puVar31,(uVar20 & 1) * 2 + uVar20 >> 1);
                  ecp_nistz256_neg(&local_c0,&local_e0);
                  uVar22 = -(ulong)uVar9;
                  uVar23 = (ulong)uVar9 - 1;
                  local_e0 = uVar23 & local_e0 ^ local_c0 & uVar22;
                  local_d8 = uVar23 & local_d8 ^ local_b8 & uVar22;
                  local_d0 = local_d0 & uVar23 ^ local_b0 & uVar22;
                  local_c8 = local_c8 & uVar23 ^ local_a8 & uVar22;
                  ecp_nistz256_point_add_affine(&local_160,&local_160,&local_100);
                  lVar30 = lVar30 + 7;
                } while (lVar30 != 0);
                bVar13 = false;
                __dest = (void *)0x0;
                local_198 = (void *)0x0;
                uVar22 = param_4;
                pvVar17 = param_5;
              }
              else {
                EC_POINT_free(p);
LAB_00b239e0:
                iVar14 = FUN_00b24d18(a);
                if (iVar14 != 0) {
                  puVar31 = ecp_nistz256_precomputed;
                  goto LAB_00b239f4;
                }
                uVar22 = param_4 + 1;
                iVar14 = (int)uVar22 * 8;
                __dest = CRYPTO_malloc(iVar14,"crypto/ec/ecp_nistz256.c",0x53e);
                if (__dest == (void *)0x0) {
                  ERR_put_error(0x10,0xf1,0x41,"crypto/ec/ecp_nistz256.c",0x540);
                  goto LAB_00b24124;
                }
                pvVar17 = CRYPTO_malloc(iVar14,"crypto/ec/ecp_nistz256.c",0x544);
                if (pvVar17 == (void *)0x0) {
                  ERR_put_error(0x10,0xf1,0x41,"crypto/ec/ecp_nistz256.c",0x546);
                  goto LAB_00b2412c;
                }
                __n = param_4 * 8;
                memcpy(__dest,param_6,__n);
                *(BIGNUM **)((long)__dest + __n) = param_3;
                memcpy(pvVar17,param_5,__n);
                *(EC_POINT **)((long)pvVar17 + __n) = a;
                bVar13 = true;
                param_6 = __dest;
                local_198 = pvVar17;
              }
              param_4 = uVar22;
              param_5 = pvVar17;
              if (uVar22 != 0) goto LAB_00b23af0;
              goto LAB_00b243a4;
            }
          }
        }
        EC_POINT_free(p);
      }
LAB_00b24124:
      __dest = (void *)0x0;
    }
LAB_00b2412c:
    local_198 = (void *)0x0;
    iVar14 = 0;
  }
  BN_CTX_end(param_7);
LAB_00b24454:
  BN_CTX_free(c);
  CRYPTO_free(local_198);
  CRYPTO_free(__dest);
  return iVar14;
}

