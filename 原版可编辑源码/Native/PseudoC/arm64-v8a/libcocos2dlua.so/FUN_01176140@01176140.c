
void FUN_01176140(long *param_1)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  short sVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  size_t __n;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  int iVar25;
  int iVar29;
  int iVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar31;
  undefined1 auVar28 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  
  uVar6 = *(uint *)((long)param_1 + 0x44);
  uVar20 = (ulong)uVar6;
  uVar14 = *(uint *)((long)param_1 + 0xa4);
  uVar1 = (ulong)(uVar6 - 1) + 1;
  lVar23 = uVar1 - (uVar20 & 7);
  uVar15 = uVar6;
  while( true ) {
    uVar13 = *(uint *)((long)param_1 + 0x9c);
    uVar21 = ((int)param_1[0xb] - uVar14) - uVar13;
    if ((uVar6 - 0x106) + uVar15 <= uVar13) {
      memcpy((void *)param_1[10],(void *)(param_1[10] + uVar20),uVar20);
      uVar14 = *(uint *)((long)param_1 + 0x74);
      uVar13 = *(int *)((long)param_1 + 0x9c) - uVar6;
      uVar22 = (ulong)(uVar14 - 1) + 1;
      *(uint *)((long)param_1 + 0x9c) = uVar13;
      *(uint *)(param_1 + 0x14) = (int)param_1[0x14] - uVar6;
      puVar16 = (ushort *)(param_1[0xd] + (ulong)uVar14 * 2);
      param_1[0x11] = param_1[0x11] - uVar20;
      sVar11 = (short)uVar6;
      if (7 < uVar22) {
        auVar12._8_8_ = 0x100030205040706;
        auVar12._0_8_ = 0x9080b0a0d0c0f0e;
        auVar27._8_8_ = 0x100030205040706;
        auVar27._0_8_ = 0x9080b0a0d0c0f0e;
        uVar15 = uVar14 & 7;
        lVar17 = uVar22 - uVar15;
        if (lVar17 != 0) {
          uVar22 = (ulong)uVar14;
          puVar16 = puVar16 + (((ulong)uVar15 - 1) - (ulong)(uVar14 - 1));
          uVar14 = uVar14 - (int)lVar17;
          pauVar18 = (undefined1 (*) [16])(param_1[0xd] + uVar22 * 2);
          do {
            pauVar19 = pauVar18 + -1;
            lVar17 = lVar17 + -8;
            auVar26 = a64_TBL(ZEXT816(0),*pauVar19,auVar27);
            sVar40 = -(ushort)(auVar26._0_2_ < uVar6);
            sVar41 = -(ushort)(auVar26._2_2_ < uVar6);
            sVar42 = -(ushort)(auVar26._4_2_ < uVar6);
            sVar43 = -(ushort)(auVar26._6_2_ < uVar6);
            sVar32 = auVar26._0_2_ - sVar11;
            sVar33 = auVar26._2_2_ - sVar11;
            sVar34 = auVar26._4_2_ - sVar11;
            sVar35 = auVar26._6_2_ - sVar11;
            sVar36 = -(ushort)(auVar26._8_2_ < uVar6);
            sVar37 = -(ushort)(auVar26._10_2_ < uVar6);
            sVar38 = -(ushort)(auVar26._12_2_ < uVar6);
            sVar39 = -(ushort)(auVar26._14_2_ < uVar6);
            iVar25 = auVar26._8_2_ - uVar6;
            iVar29 = auVar26._10_2_ - uVar6;
            iVar30 = auVar26._12_2_ - uVar6;
            iVar31 = auVar26._14_2_ - uVar6;
            auVar26[0] = (byte)sVar32 & ~(byte)sVar40;
            auVar26[1] = (byte)((ushort)sVar32 >> 8) & ~(byte)((ushort)sVar40 >> 8);
            auVar26[2] = (byte)sVar33 & ~(byte)sVar41;
            auVar26[3] = (byte)((ushort)sVar33 >> 8) & ~(byte)((ushort)sVar41 >> 8);
            auVar26[4] = (byte)sVar34 & ~(byte)sVar42;
            auVar26[5] = (byte)((ushort)sVar34 >> 8) & ~(byte)((ushort)sVar42 >> 8);
            auVar26[6] = (byte)sVar35 & ~(byte)sVar43;
            auVar26[7] = (byte)((ushort)sVar35 >> 8) & ~(byte)((ushort)sVar43 >> 8);
            auVar26[8] = (byte)iVar25 & ~(byte)sVar36;
            auVar26[9] = (byte)((uint)iVar25 >> 8) & ~(byte)((ushort)sVar36 >> 8);
            auVar26[10] = (byte)iVar29 & ~(byte)sVar37;
            auVar26[0xb] = (byte)((uint)iVar29 >> 8) & ~(byte)((ushort)sVar37 >> 8);
            auVar26[0xc] = (byte)iVar30 & ~(byte)sVar38;
            auVar26[0xd] = (byte)((uint)iVar30 >> 8) & ~(byte)((ushort)sVar38 >> 8);
            auVar26[0xe] = (byte)iVar31 & ~(byte)sVar39;
            auVar26[0xf] = (byte)((uint)iVar31 >> 8) & ~(byte)((ushort)sVar39 >> 8);
            auVar26 = a64_TBL(ZEXT816(0),auVar26,auVar12);
            *(long *)(pauVar18[-1] + 8) = auVar26._8_8_;
            *(long *)*pauVar19 = auVar26._0_8_;
            pauVar18 = pauVar19;
            if (lVar17 == 0) goto joined_r0x011762bc;
          } while( true );
        }
      }
      do {
        puVar16 = puVar16 + -1;
        uVar8 = *puVar16;
        uVar14 = uVar14 - 1;
        uVar3 = 0;
        if (uVar6 < uVar8 || uVar6 == uVar8) {
          uVar3 = uVar8 - sVar11;
        }
        *puVar16 = uVar3;
        uVar15 = uVar14;
joined_r0x011762bc:
      } while (uVar15 != 0);
      puVar16 = (ushort *)(param_1[0xc] + uVar20 * 2);
      uVar14 = uVar6;
      if (uVar1 < 8) goto LAB_01176368;
      if (lVar23 == 0) goto LAB_01176368;
      puVar16 = puVar16 + ~(ulong)(uVar6 - 1) + (uVar20 & 7);
      lVar17 = lVar23;
      pauVar18 = (undefined1 (*) [16])(param_1[0xc] + (uVar20 - 8) * 2);
      do {
        lVar17 = lVar17 + -8;
        auVar9._8_8_ = 0x100030205040706;
        auVar9._0_8_ = 0x9080b0a0d0c0f0e;
        auVar27 = a64_TBL(ZEXT816(0),*pauVar18,auVar9);
        sVar40 = -(ushort)(auVar27._0_2_ < uVar6);
        sVar41 = -(ushort)(auVar27._2_2_ < uVar6);
        sVar42 = -(ushort)(auVar27._4_2_ < uVar6);
        sVar43 = -(ushort)(auVar27._6_2_ < uVar6);
        sVar32 = auVar27._0_2_ - sVar11;
        sVar33 = auVar27._2_2_ - sVar11;
        sVar34 = auVar27._4_2_ - sVar11;
        sVar35 = auVar27._6_2_ - sVar11;
        sVar36 = -(ushort)(auVar27._8_2_ < uVar6);
        sVar37 = -(ushort)(auVar27._10_2_ < uVar6);
        sVar38 = -(ushort)(auVar27._12_2_ < uVar6);
        sVar39 = -(ushort)(auVar27._14_2_ < uVar6);
        iVar25 = auVar27._8_2_ - uVar6;
        iVar29 = auVar27._10_2_ - uVar6;
        iVar30 = auVar27._12_2_ - uVar6;
        iVar31 = auVar27._14_2_ - uVar6;
        auVar28[0] = (byte)sVar32 & ~(byte)sVar40;
        auVar28[1] = (byte)((ushort)sVar32 >> 8) & ~(byte)((ushort)sVar40 >> 8);
        auVar28[2] = (byte)sVar33 & ~(byte)sVar41;
        auVar28[3] = (byte)((ushort)sVar33 >> 8) & ~(byte)((ushort)sVar41 >> 8);
        auVar28[4] = (byte)sVar34 & ~(byte)sVar42;
        auVar28[5] = (byte)((ushort)sVar34 >> 8) & ~(byte)((ushort)sVar42 >> 8);
        auVar28[6] = (byte)sVar35 & ~(byte)sVar43;
        auVar28[7] = (byte)((ushort)sVar35 >> 8) & ~(byte)((ushort)sVar43 >> 8);
        auVar28[8] = (byte)iVar25 & ~(byte)sVar36;
        auVar28[9] = (byte)((uint)iVar25 >> 8) & ~(byte)((ushort)sVar36 >> 8);
        auVar28[10] = (byte)iVar29 & ~(byte)sVar37;
        auVar28[0xb] = (byte)((uint)iVar29 >> 8) & ~(byte)((ushort)sVar37 >> 8);
        auVar28[0xc] = (byte)iVar30 & ~(byte)sVar38;
        auVar28[0xd] = (byte)((uint)iVar30 >> 8) & ~(byte)((ushort)sVar38 >> 8);
        auVar28[0xe] = (byte)iVar31 & ~(byte)sVar39;
        auVar28[0xf] = (byte)((uint)iVar31 >> 8) & ~(byte)((ushort)sVar39 >> 8);
        auVar10._8_8_ = 0x100030205040706;
        auVar10._0_8_ = 0x9080b0a0d0c0f0e;
        auVar27 = a64_TBL(ZEXT816(0),auVar28,auVar10);
        *(long *)(*pauVar18 + 8) = auVar27._8_8_;
        *(long *)*pauVar18 = auVar27._0_8_;
        pauVar18 = pauVar18 + -1;
        uVar15 = uVar6 - (int)lVar23;
        uVar4 = uVar6 & 7;
      } while (lVar17 != 0);
      while (uVar14 = uVar15, uVar4 != 0) {
LAB_01176368:
        puVar16 = puVar16 + -1;
        uVar8 = *puVar16;
        uVar3 = 0;
        if (uVar6 < uVar8 || uVar6 == uVar8) {
          uVar3 = uVar8 - sVar11;
        }
        *puVar16 = uVar3;
        uVar15 = uVar14 - 1;
        uVar4 = uVar14 - 1;
      }
      uVar21 = uVar6 + uVar21;
    }
    plVar24 = (long *)*param_1;
    uVar15 = *(uint *)(plVar24 + 1);
    if (uVar15 == 0) break;
    uVar14 = *(uint *)((long)param_1 + 0xa4);
    if (uVar15 <= uVar21) {
      uVar21 = uVar15;
    }
    if (uVar21 != 0) {
      uVar22 = (ulong)uVar21;
      __dest = (void *)(param_1[10] + (ulong)uVar13 + (ulong)uVar14);
      *(uint *)(plVar24 + 1) = uVar15 - uVar21;
      memcpy(__dest,(void *)*plVar24,uVar22);
      if (*(int *)(plVar24[7] + 0x2c) == 2) {
        lVar17 = crc32(plVar24[0xc],__dest,uVar21);
LAB_01176410:
        plVar24[0xc] = lVar17;
      }
      else if (*(int *)(plVar24[7] + 0x2c) == 1) {
        lVar17 = adler32(plVar24[0xc],__dest,uVar21);
        goto LAB_01176410;
      }
      *plVar24 = *plVar24 + uVar22;
      plVar24[2] = plVar24[2] + uVar22;
      uVar14 = *(uint *)((long)param_1 + 0xa4);
    }
    iVar25 = *(int *)((long)param_1 + 0x171c);
    uVar14 = uVar14 + uVar21;
    *(uint *)((long)param_1 + 0xa4) = uVar14;
    if (2 < iVar25 + uVar14) {
      lVar17 = param_1[10];
      uVar15 = *(int *)((long)param_1 + 0x9c) - iVar25;
      bVar7 = *(byte *)(lVar17 + (ulong)uVar15);
      *(uint *)(param_1 + 0xe) = (uint)bVar7;
      uVar13 = *(uint *)((long)param_1 + 0x7c);
      uVar4 = *(uint *)(param_1 + 0x10);
      uVar21 = ((uint)bVar7 << (ulong)(uVar4 & 0x1f) ^ (uint)*(byte *)(lVar17 + (ulong)(uVar15 + 1))
               ) & uVar13;
      uVar22 = (ulong)uVar21;
      *(uint *)(param_1 + 0xe) = uVar21;
      do {
        if (iVar25 == 0) break;
        lVar5 = param_1[0xd];
        uVar21 = ((int)uVar22 << (ulong)(uVar4 & 0x1f) ^
                 (uint)*(byte *)(lVar17 + (ulong)(uVar15 + 2))) & uVar13;
        uVar22 = (ulong)uVar21;
        *(uint *)(param_1 + 0xe) = uVar21;
        iVar25 = iVar25 + -1;
        *(undefined2 *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar15) * 2) =
             *(undefined2 *)(lVar5 + uVar22 * 2);
        *(short *)(lVar5 + uVar22 * 2) = (short)uVar15;
        uVar15 = uVar15 + 1;
        *(int *)((long)param_1 + 0x171c) = iVar25;
      } while (2 < uVar14 + iVar25);
    }
    if ((0x105 < uVar14) || (*(int *)(*param_1 + 8) == 0)) break;
    uVar15 = *(uint *)((long)param_1 + 0x44);
  }
  uVar20 = param_1[0x2e5];
  uVar22 = param_1[0xb];
  uVar1 = uVar22 - uVar20;
  if (uVar20 <= uVar22 && uVar1 != 0) {
    uVar2 = (ulong)*(uint *)((long)param_1 + 0xa4) + (ulong)*(uint *)((long)param_1 + 0x9c);
    if (uVar20 < uVar2) {
      __n = uVar22 - uVar2;
      if (0x101 < __n) {
        __n = 0x102;
      }
      memset((void *)(param_1[10] + uVar2),0,__n);
      lVar23 = __n + uVar2;
    }
    else {
      uVar22 = (uVar2 + 0x102) - uVar20;
      if (uVar2 + 0x102 < uVar20 || uVar22 == 0) {
        return;
      }
      if (uVar22 <= uVar1) {
        uVar1 = uVar22;
      }
      memset((void *)(param_1[10] + uVar20),0,uVar1 & 0xffffffff);
      lVar23 = param_1[0x2e5] + uVar1;
    }
    param_1[0x2e5] = lVar23;
  }
  return;
}

