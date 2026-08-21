
/* cocos2d::FontFreeType::getSDFGlyphBitmap(unsigned long) */

void cocos2d::FontFreeType::getSDFGlyphBitmap(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  vector<short,std::__ndk1::allocator<short>> *pvVar10;
  vector<double,std::__ndk1::allocator<double>> *pvVar11;
  undefined8 *puVar12;
  GlyphBitmap *pGVar13;
  undefined8 in_x1;
  uint uVar14;
  undefined8 *in_x8;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  double *pdVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  double *pdVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined1 auVar37 [16];
  double dVar38;
  Rect aRStack_98 [16];
  void *local_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if ((*(long *)(param_1 + 0x58) == 0) ||
     (iVar8 = FT_Load_Char(*(long *)(param_1 + 0x58),in_x1,0x8004), iVar8 != 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    goto LAB_009f41e8;
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x58) + 0x98);
  uVar1 = *(ulong *)(lVar15 + 0x40);
  uVar3 = *(ulong *)(lVar15 + 0x48);
  uVar2 = *(ulong *)(lVar15 + 0x30);
  uVar4 = *(ulong *)(lVar15 + 0x38);
  uVar26 = *(ulong *)(lVar15 + 0x50);
  iVar8 = *(int *)(lVar15 + 0x98);
  iVar5 = *(int *)(lVar15 + 0x9c);
  lVar25 = (long)iVar5;
  uVar14 = *(byte *)(lVar15 + 0xb2) - 2;
  if (uVar14 < 6) {
    uVar23 = *(undefined4 *)(&DAT_0188d9a4 + (long)(char)uVar14 * 4);
  }
  else {
    uVar23 = 4;
  }
  lVar15 = *(long *)(lVar15 + 0xa8);
  dVar38 = (double)iVar8 * 0.2;
  if ((double)iVar8 * 0.2 <= (double)iVar5 * 0.2) {
    dVar38 = (double)iVar5 * 0.2;
  }
  uVar14 = (uint)dVar38;
  if ((int)uVar14 < 4) {
    uVar14 = 3;
  }
  uVar6 = uVar14 * 2;
  uVar16 = (ulong)uVar6;
  uVar22 = uVar16 + lVar25;
  uVar20 = uVar16 + (long)iVar8;
  uVar31 = uVar22 * uVar20;
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b550);
  lVar34 = *plVar9;
  uVar24 = plVar9[1] - lVar34 >> 1;
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b550);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 2;
    }
  }
  else {
    pvVar10 = (vector<short,std::__ndk1::allocator<short>> *)__emutls_get_address(&DAT_01d1b550);
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(pvVar10,uVar31 - uVar24);
  }
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b570);
  lVar34 = *plVar9;
  uVar24 = plVar9[1] - lVar34 >> 1;
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b570);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 2;
    }
  }
  else {
    pvVar10 = (vector<short,std::__ndk1::allocator<short>> *)__emutls_get_address(&DAT_01d1b570);
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(pvVar10,uVar31 - uVar24);
  }
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b590);
  lVar34 = *plVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f43e8 with catch @ 009f4378
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4418 with catch @ 009f4378
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4448 with catch @ 009f4378
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4470 with catch @ 009f4378
                       catch(type#1 @ 00000000) { ... } // from try @ 009f449c with catch @ 009f4378
                        */
  uVar24 = plVar9[1] - lVar34 >> 3;
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b590);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 8;
    }
  }
  else {
    pvVar11 = (vector<double,std::__ndk1::allocator<double>> *)__emutls_get_address(&DAT_01d1b590);
    std::__ndk1::vector<double,std::__ndk1::allocator<double>>::__append(pvVar11,uVar31 - uVar24);
  }
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b5b0);
  lVar34 = *plVar9;
  uVar24 = plVar9[1] - lVar34 >> 3;
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b5b0);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 8;
    }
  }
  else {
                    /* try { // try from 009f43e0 to 00af43e7 has its CatchHandler @ 009f44dc */
    pvVar11 = (vector<double,std::__ndk1::allocator<double>> *)__emutls_get_address(&DAT_01d1b5b0);
                    /* try { // try from 009f43e8 to 00af440b has its CatchHandler @ 009f4378 */
    std::__ndk1::vector<double,std::__ndk1::allocator<double>>::__append(pvVar11,uVar31 - uVar24);
  }
                    /* try { // try from 009f440c to 00af4417 has its CatchHandler @ 009f44dc */
  FUN_009f5180();
                    /* try { // try from 009f4418 to 00af443f has its CatchHandler @ 009f4378 */
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b5d0);
  lVar34 = *plVar9;
  uVar24 = plVar9[1] - lVar34 >> 3;
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
                    /* try { // try from 009f4448 to 00af4467 has its CatchHandler @ 009f4378 */
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b5d0);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 8;
    }
  }
  else {
    pvVar11 = (vector<double,std::__ndk1::allocator<double>> *)__emutls_get_address(&DAT_01d1b5d0);
                    /* try { // try from 009f4440 to 00af4447 has its CatchHandler @ 009f44d8 */
    std::__ndk1::vector<double,std::__ndk1::allocator<double>>::__append(pvVar11,uVar31 - uVar24);
  }
  FUN_009f5180();
                    /* try { // try from 009f4468 to 00af446f has its CatchHandler @ 009f44d8 */
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b5f0);
                    /* try { // try from 009f4470 to 00af448f has its CatchHandler @ 009f4378 */
  lVar34 = *plVar9;
  uVar24 = plVar9[1] - lVar34 >> 3;
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
                    /* try { // try from 009f449c to 00af44df has its CatchHandler @ 009f4378 */
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b5f0);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 8;
    }
  }
  else {
    pvVar11 = (vector<double,std::__ndk1::allocator<double>> *)__emutls_get_address(&DAT_01d1b5f0);
                    /* try { // try from 009f4490 to 00af449b has its CatchHandler @ 009f44d8 */
    std::__ndk1::vector<double,std::__ndk1::allocator<double>>::__append(pvVar11,uVar31 - uVar24);
  }
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b610);
  lVar34 = *plVar9;
  uVar24 = plVar9[1] - lVar34 >> 3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f4440 with catch @ 009f44d8
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4468 with catch @ 009f44d8
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4490 with catch @ 009f44d8
                        */
  if (uVar31 < uVar24 || uVar31 - uVar24 == 0) {
    if (uVar31 < uVar24) {
      lVar35 = __emutls_get_address(&DAT_01d1b610);
      *(ulong *)(lVar35 + 8) = lVar34 + uVar31 * 8;
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f43e0 with catch @ 009f44dc
                       catch(type#1 @ 00000000) { ... } // from try @ 009f440c with catch @ 009f44dc
                        */
    pvVar11 = (vector<double,std::__ndk1::allocator<double>> *)__emutls_get_address(&DAT_01d1b610);
    std::__ndk1::vector<double,std::__ndk1::allocator<double>>::__append(pvVar11,uVar31 - uVar24);
  }
  FUN_009f5180();
  puVar12 = (undefined8 *)__emutls_get_address(&DAT_01d1b590);
  puVar32 = (undefined8 *)*puVar12;
                    /* try { // try from 009f4524 to 00af45bf has its CatchHandler @ 009f4524
                       catch() { ... } // from try @ 009f4524 with catch @ 009f4524
                       catch() { ... } // from try @ 009f45d4 with catch @ 009f4524
                       catch() { ... } // from try @ 009f4668 with catch @ 009f4524 */
  FUN_009f5180();
  uVar24 = puVar12[1] - (long)puVar32;
  if (0 < (long)uVar24) {
    uVar24 = uVar24 >> 3;
    do {
      uVar24 = uVar24 - 1;
      *puVar32 = 0;
      puVar32 = puVar32 + 1;
    } while (0 < (long)uVar24);
  }
  FUN_009f5180();
  puVar12 = (undefined8 *)__emutls_get_address(&DAT_01d1b5b0);
  puVar32 = (undefined8 *)*puVar12;
  FUN_009f5180();
  uVar24 = puVar12[1] - (long)puVar32;
  if (0 < (long)uVar24) {
    uVar24 = uVar24 >> 3;
    do {
      uVar24 = uVar24 - 1;
      *puVar32 = 0;
      puVar32 = puVar32 + 1;
    } while (0 < (long)uVar24);
  }
  FUN_009f5180();
  puVar12 = (undefined8 *)__emutls_get_address(&DAT_01d1b5d0);
  puVar32 = (undefined8 *)*puVar12;
  FUN_009f5180();
  uVar24 = puVar12[1] - (long)puVar32;
  if (0 < (long)uVar24) {
    uVar24 = uVar24 >> 3;
    do {
                    /* try { // try from 009f45c0 to 00af45d3 has its CatchHandler @ 009f4668 */
      uVar24 = uVar24 - 1;
      *puVar32 = 0;
      puVar32 = puVar32 + 1;
    } while (0 < (long)uVar24);
  }
  FUN_009f5180();
                    /* try { // try from 009f45d4 to 00af4663 has its CatchHandler @ 009f4524 */
  puVar12 = (undefined8 *)__emutls_get_address(&DAT_01d1b5f0);
  puVar32 = (undefined8 *)*puVar12;
  FUN_009f5180();
  uVar24 = puVar12[1] - (long)puVar32;
  if (0 < (long)uVar24) {
    uVar24 = uVar24 >> 3;
    do {
      uVar24 = uVar24 - 1;
      *puVar32 = 0;
      puVar32 = puVar32 + 1;
    } while (0 < (long)uVar24);
  }
  FUN_009f5180();
  puVar12 = (undefined8 *)__emutls_get_address(&DAT_01d1b610);
  puVar32 = (undefined8 *)*puVar12;
  FUN_009f5180();
  uVar24 = puVar12[1] - (long)puVar32;
  if (0 < (long)uVar24) {
    uVar24 = uVar24 >> 3;
    do {
      uVar24 = uVar24 - 1;
      *puVar32 = 0;
      puVar32 = puVar32 + 1;
    } while (0 < (long)uVar24);
  }
  FUN_009f5180();
  puVar32 = (undefined8 *)__emutls_get_address(&DAT_01d1b550);
  uVar17 = *puVar32;
                    /* try { // try from 009f4664 to 00af4667 has its CatchHandler @ 009f4668 */
                    /* catch() { ... } // from try @ 009f45c0 with catch @ 009f4668
                       catch() { ... } // from try @ 009f4664 with catch @ 009f4668
                       try { // try from 009f4668 to 00af4683 has its CatchHandler @ 009f4524 */
  FUN_009f5180();
  puVar32 = (undefined8 *)__emutls_get_address(&DAT_01d1b570);
  uVar18 = *puVar32;
  FUN_009f5180();
  puVar32 = (undefined8 *)__emutls_get_address(&DAT_01d1b590);
  uVar30 = *puVar32;
  FUN_009f5180();
  puVar32 = (undefined8 *)__emutls_get_address(&DAT_01d1b5b0);
  uVar33 = *puVar32;
  FUN_009f5180();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f471c with catch @ 009f46ac
                       catch(type#1 @ 00000000) { ... } // from try @ 009f474c with catch @ 009f46ac
                       catch(type#1 @ 00000000) { ... } // from try @ 009f477c with catch @ 009f46ac
                       catch(type#1 @ 00000000) { ... } // from try @ 009f47a4 with catch @ 009f46ac
                       catch(type#1 @ 00000000) { ... } // from try @ 009f47d0 with catch @ 009f46ac
                        */
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b5d0);
  lVar34 = *plVar9;
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b5f0);
  lVar35 = *plVar9;
  FUN_009f5180();
  plVar9 = (long *)__emutls_get_address(&DAT_01d1b610);
  lVar36 = *plVar9;
  if (0 < iVar5) {
    lVar19 = 0;
                    /* try { // try from 009f4714 to 00af471b has its CatchHandler @ 009f4810 */
    pdVar21 = (double *)(lVar34 + (uVar16 + lVar25 + 1) * (ulong)uVar14 * 8);
    do {
                    /* try { // try from 009f471c to 00af473f has its CatchHandler @ 009f46ac */
      lVar27 = (long)iVar8;
      lVar28 = lVar15;
      pdVar29 = pdVar21;
      if (0 < iVar8) {
        do {
          lVar27 = lVar27 + -1;
          dVar38 = (double)NEON_ucvtf((ulong)*(byte *)(lVar28 + lVar19));
                    /* try { // try from 009f4740 to 00af474b has its CatchHandler @ 009f4810 */
          *pdVar29 = dVar38 / 255.0;
          lVar28 = lVar28 + lVar25;
          pdVar29 = pdVar29 + (ulong)uVar14 * 2 + lVar25;
                    /* try { // try from 009f474c to 00af4773 has its CatchHandler @ 009f46ac */
        } while (lVar27 != 0);
      }
      lVar19 = lVar19 + 1;
      pdVar21 = pdVar21 + 1;
    } while (lVar19 != lVar25);
  }
                    /* try { // try from 009f4774 to 00af477b has its CatchHandler @ 009f480c */
                    /* try { // try from 009f477c to 00af479b has its CatchHandler @ 009f46ac */
  computegradient(lVar34,uVar22 & 0xffffffff,uVar20 & 0xffffffff,uVar30,uVar33);
                    /* try { // try from 009f479c to 00af47a3 has its CatchHandler @ 009f480c */
                    /* try { // try from 009f47a4 to 00af47c3 has its CatchHandler @ 009f46ac */
  edtaa3(lVar34,uVar30,uVar33,uVar22 & 0xffffffff,uVar20 & 0xffffffff,uVar17,uVar18,lVar35);
  if ((long)uVar31 < 1) {
    computegradient(lVar34,uVar22 & 0xffffffff,uVar20 & 0xffffffff,uVar30,uVar33);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f4774 with catch @ 009f480c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f479c with catch @ 009f480c
                       catch(type#1 @ 00000000) { ... } // from try @ 009f47c4 with catch @ 009f480c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f4714 with catch @ 009f4810
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4740 with catch @ 009f4810
                        */
                    /* try { // try from 009f4814 to 00af48bb has its CatchHandler @ 009f4814
                       catch(type#1 @ 00000000) { ... } // from try @ 009f4814 with catch @ 009f4814
                       catch(type#1 @ 00000000) { ... } // from try @ 009f48c0 with catch @ 009f4814
                        */
    edtaa3(lVar34,uVar30,uVar33,uVar22 & 0xffffffff,uVar20 & 0xffffffff,uVar17,uVar18,lVar36);
  }
  else {
                    /* try { // try from 009f47c4 to 00af47cf has its CatchHandler @ 009f480c */
    if (uVar31 < 4) {
                    /* try { // try from 009f47d0 to 00af4813 has its CatchHandler @ 009f46ac */
      uVar24 = 0;
LAB_009f4898:
      lVar25 = uVar31 - uVar24;
      pdVar21 = (double *)(lVar35 + uVar24 * 8);
      do {
        if (*pdVar21 < 0.0) {
          *pdVar21 = 0.0;
        }
        lVar25 = lVar25 + -1;
        pdVar21 = pdVar21 + 1;
                    /* try { // try from 009f48bc to 00af48bf has its CatchHandler @ 009f4934 */
      } while (lVar25 != 0);
    }
    else {
      uVar24 = uVar31 & 0xfffffffffffffffc;
      pdVar21 = (double *)(lVar35 + 0x10);
      uVar16 = uVar24;
      do {
        if (pdVar21[-2] < 0.0) {
          pdVar21[-2] = 0.0;
        }
        if (pdVar21[-1] < 0.0) {
          pdVar21[-1] = 0.0;
        }
        if (*pdVar21 < 0.0) {
          *pdVar21 = 0.0;
        }
        if (pdVar21[1] < 0.0) {
          pdVar21[1] = 0.0;
        }
        uVar16 = uVar16 - 4;
        pdVar21 = pdVar21 + 4;
      } while (uVar16 != 0);
      if (uVar31 != uVar24) goto LAB_009f4898;
    }
                    /* try { // try from 009f48c0 to 00af4937 has its CatchHandler @ 009f4814 */
    if (uVar31 < 4) {
      uVar24 = 0;
LAB_009f490c:
      lVar25 = uVar31 - uVar24;
      pdVar21 = (double *)(lVar34 + uVar24 * 8);
      do {
        lVar25 = lVar25 + -1;
        *pdVar21 = 1.0 - *pdVar21;
        pdVar21 = pdVar21 + 1;
      } while (lVar25 != 0);
    }
    else {
      uVar24 = uVar31 & 0xfffffffffffffffc;
      pdVar21 = (double *)(lVar34 + 0x10);
      auVar37 = NEON_fmov(0x3ff0000000000000,8);
      uVar16 = uVar24;
      do {
        uVar16 = uVar16 - 4;
        pdVar21[-1] = auVar37._8_8_ - pdVar21[-1];
        pdVar21[-2] = auVar37._0_8_ - pdVar21[-2];
        pdVar21[1] = auVar37._8_8_ - pdVar21[1];
        *pdVar21 = auVar37._0_8_ - *pdVar21;
        pdVar21 = pdVar21 + 4;
      } while (uVar16 != 0);
      if (uVar31 != uVar24) goto LAB_009f490c;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f48bc with catch @ 009f4934
                        */
    computegradient(lVar34,uVar22 & 0xffffffff,uVar20 & 0xffffffff,uVar30,uVar33);
    edtaa3(lVar34,uVar30,uVar33,uVar22 & 0xffffffff,uVar20 & 0xffffffff,uVar17,uVar18,lVar36);
    if (uVar31 < 4) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar31 & 0xfffffffffffffffc;
      pdVar21 = (double *)(lVar36 + 0x10);
      uVar22 = uVar20;
      do {
        if (pdVar21[-2] < 0.0) {
          pdVar21[-2] = 0.0;
        }
        if (pdVar21[-1] < 0.0) {
          pdVar21[-1] = 0.0;
        }
        if (*pdVar21 < 0.0) {
          *pdVar21 = 0.0;
        }
        if (pdVar21[1] < 0.0) {
          pdVar21[1] = 0.0;
        }
        uVar22 = uVar22 - 4;
        pdVar21 = pdVar21 + 4;
      } while (uVar22 != 0);
      if (uVar31 == uVar20) goto LAB_009f4a0c;
    }
    lVar25 = uVar31 - uVar20;
    pdVar21 = (double *)(lVar36 + uVar20 * 8);
    do {
      if (*pdVar21 < 0.0) {
        *pdVar21 = 0.0;
      }
      lVar25 = lVar25 + -1;
      pdVar21 = pdVar21 + 1;
    } while (lVar25 != 0);
  }
LAB_009f4a0c:
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  if (uVar31 != 0) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)&local_88,uVar31);
  }
  if (0 < (long)uVar31) {
    uVar22 = 0;
    do {
      dVar38 = (*(double *)(lVar35 + uVar22 * 8) - *(double *)(lVar36 + uVar22 * 8)) * -16.0 + 128.0
      ;
                    /* catch() { ... } // from try @ 009f4abc with catch @ 009f4a64
                       catch() { ... } // from try @ 009f4b4c with catch @ 009f4a64 */
      if (dVar38 <= 0.0) {
        dVar38 = 0.0;
      }
      if (255.0 < dVar38) {
        dVar38 = 255.0;
      }
      *(char *)((long)local_88 + uVar22) = (char)(int)dVar38;
      uVar22 = uVar22 + 1;
    } while (uVar31 != uVar22);
  }
  pGVar13 = operator_new(0x40);
                    /* try { // try from 009f4ab8 to 00af4abb has its CatchHandler @ 009f4b68 */
                    /* try { // try from 009f4abc to 00af4b47 has its CatchHandler @ 009f4a64 */
  Rect::Rect(aRStack_98,(float)(int)(uVar1 >> 6),(float)-(int)(uVar3 >> 6),
             (float)(int)(uVar6 + (int)(uVar2 >> 6)),(float)(int)(uVar6 + (int)(uVar4 >> 6)));
  GlyphBitmap::GlyphBitmap
            (pGVar13,&local_88,uVar6 + iVar5,uVar6 + iVar8,aRStack_98,uVar26 >> 6,uVar23,uVar14);
  *in_x8 = pGVar13;
  puVar32 = operator_new(0x20);
  puVar32[2] = 0;
  puVar32[3] = pGVar13;
  in_x8[1] = puVar32;
  *puVar32 = &PTR____shared_weak_count_01c6c428;
  puVar32[1] = 0;
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
LAB_009f41e8:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

