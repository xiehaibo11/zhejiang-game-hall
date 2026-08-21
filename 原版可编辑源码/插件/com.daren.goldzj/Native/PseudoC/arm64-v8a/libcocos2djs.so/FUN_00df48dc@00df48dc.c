
void FUN_00df48dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x48);
  lVar7 = *(long *)(param_1 + 0x60);
  lVar10 = (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0x34);
  uVar4 = uVar1 >> 1;
  uVar9 = (uint)lVar10;
  uVar13 = uVar9 & 0xfffffff8;
  if (*(int *)(param_1 + 0x18) == 0) {
    if ((int)uVar13 < 1) {
      uVar13 = 0;
      if ((int)uVar9 < 1) {
        return;
      }
    }
    else {
      lVar16 = 0;
      pauVar15 = (undefined1 (*) [16])(lVar7 + 0x10);
      do {
        pauVar18 = pauVar15 + -1;
        auVar21 = *pauVar15;
        pauVar15 = pauVar15 + 2;
        auVar20._4_4_ = uVar4;
        auVar20._0_4_ = uVar4;
        auVar20._8_4_ = uVar4;
        auVar20._12_4_ = uVar4;
        auVar20 = NEON_sqrdmulh(*pauVar18,auVar20,4);
        auVar24._4_4_ = uVar4;
        auVar24._0_4_ = uVar4;
        auVar24._8_4_ = uVar4;
        auVar24._12_4_ = uVar4;
        auVar24 = NEON_sqrdmulh(auVar21,auVar24,4);
        *(ulong *)(lVar5 + lVar16) =
             CONCAT17(auVar24[0xc],
                      CONCAT16(auVar24[8],
                               CONCAT15(auVar24[4],
                                        CONCAT14(auVar24[0],
                                                 CONCAT13(auVar20[0xc],
                                                          CONCAT12(auVar20[8],
                                                                   CONCAT11(auVar20[4],auVar20[0])))
                                                ))));
        lVar16 = lVar16 + 8;
      } while (lVar16 < (int)uVar13);
      uVar13 = uVar9 & 0xfffffff8;
      if ((int)uVar9 <= (int)uVar13) {
        return;
      }
    }
    lVar10 = lVar10 - (int)uVar13;
    puVar6 = (undefined1 *)(lVar5 + (int)uVar13);
    puVar8 = (uint *)(lVar7 + (long)(int)uVar13 * 4);
    do {
      lVar10 = lVar10 + -1;
      *puVar6 = (char)((ulong)*puVar8 * (ulong)uVar1 + 0x80000000 >> 0x20);
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x58);
    uVar2 = 0;
    if ((long)*(int *)(param_1 + 0x20) != 0) {
      uVar2 = ((ulong)(uint)-*(int *)(param_1 + 0x18) << 0x20) /
              (ulong)(long)*(int *)(param_1 + 0x20);
    }
    uVar14 = -uVar2;
    if ((int)uVar13 < 1) {
      uVar17 = 0;
      if ((int)uVar9 < 1) {
        return;
      }
    }
    else {
      lVar16 = 0;
      uVar19 = CONCAT44((int)uVar2,(int)uVar2);
      pauVar15 = (undefined1 (*) [16])(lVar7 + 0x10);
      pauVar18 = (undefined1 (*) [16])(lVar10 + 0x10);
      do {
        auVar20 = pauVar18[-1];
        auVar24 = *pauVar18;
        auVar21 = pauVar15[-1];
        auVar3 = *pauVar15;
        pauVar15 = pauVar15 + 2;
        pauVar18 = pauVar18 + 2;
        auVar26 = NEON_umull(auVar20._0_8_,uVar19,4);
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        auVar27._0_8_ = auVar26._0_8_ + (ulong)auVar21._0_4_ * (uVar14 & 0xffffffff);
        auVar27._8_8_ = auVar26._8_8_ + (ulong)auVar21._4_4_ * (uVar14 & 0xffffffff);
        auVar21 = NEON_ext(auVar21,auVar21,8,1);
        auVar20 = NEON_umull(auVar20._0_8_,uVar19,4);
        auVar26._0_8_ = auVar20._0_8_ + (ulong)auVar21._0_4_ * (uVar14 & 0xffffffff);
        auVar26._8_8_ = auVar20._8_8_ + (ulong)auVar21._4_4_ * (uVar14 & 0xffffffff);
        auVar20 = NEON_umull(auVar24._0_8_,uVar19,4);
        auVar24 = NEON_ext(auVar24,auVar24,8,1);
        auVar22._0_8_ = auVar20._0_8_ + (ulong)auVar3._0_4_ * (uVar14 & 0xffffffff);
        auVar22._8_8_ = auVar20._8_8_ + (ulong)auVar3._4_4_ * (uVar14 & 0xffffffff);
        auVar20 = NEON_ext(auVar3,auVar3,8,1);
        auVar24 = NEON_umull(auVar24._0_8_,uVar19,4);
        auVar28._0_8_ = NEON_rshrn(auVar27._0_8_,auVar27,0x20,8);
        auVar28._8_8_ = auVar27._8_8_;
        auVar25._0_8_ = auVar24._0_8_ + (ulong)auVar20._0_4_ * (uVar14 & 0xffffffff);
        auVar25._8_8_ = auVar24._8_8_ + (ulong)auVar20._4_4_ * (uVar14 & 0xffffffff);
        auVar23._0_8_ = NEON_rshrn(auVar22._0_8_,auVar22,0x20,8);
        auVar23._8_8_ = auVar22._8_8_;
        auVar20 = NEON_rshrn2(auVar28,auVar26,0x20,8);
        auVar24 = NEON_rshrn2(auVar23,auVar25,0x20,8);
        auVar21._4_4_ = uVar4;
        auVar21._0_4_ = uVar4;
        auVar21._8_4_ = uVar4;
        auVar21._12_4_ = uVar4;
        auVar20 = NEON_sqrdmulh(auVar20,auVar21,4);
        auVar3._4_4_ = uVar4;
        auVar3._0_4_ = uVar4;
        auVar3._8_4_ = uVar4;
        auVar3._12_4_ = uVar4;
        auVar24 = NEON_sqrdmulh(auVar24,auVar3,4);
        *(ulong *)(lVar5 + lVar16) =
             CONCAT17(auVar24[0xc],
                      CONCAT16(auVar24[8],
                               CONCAT15(auVar24[4],
                                        CONCAT14(auVar24[0],
                                                 CONCAT13(auVar20[0xc],
                                                          CONCAT12(auVar20[8],
                                                                   CONCAT11(auVar20[4],auVar20[0])))
                                                ))));
        lVar16 = lVar16 + 8;
      } while (lVar16 < (int)uVar13);
      uVar17 = (ulong)(uVar9 & 0xfffffff8);
      if ((int)uVar9 <= (int)(uVar9 & 0xfffffff8)) {
        return;
      }
    }
    uVar11 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
    lVar16 = (long)(int)uVar9 - (long)(int)uVar17;
    puVar6 = (undefined1 *)(lVar5 + (int)uVar17);
    puVar8 = (uint *)(lVar7 + uVar11);
    puVar12 = (uint *)(lVar10 + uVar11);
    do {
      lVar16 = lVar16 + -1;
      *puVar6 = (char)(((uVar2 & 0xffffffff) * (ulong)*puVar12 +
                        (uVar14 & 0xffffffff) * (ulong)*puVar8 + 0x80000000 >> 0x20) * (ulong)uVar1
                       + 0x80000000 >> 0x20);
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar16 != 0);
  }
  return;
}

