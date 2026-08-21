
void FUN_01150f5c(long param_1)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  lVar6 = *(long *)(param_1 + 0x48);
  lVar11 = *(long *)(param_1 + 0x58);
  lVar9 = (long)*(int *)(param_1 + 8) * (long)*(int *)(param_1 + 0x34);
  uVar3 = -(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x18));
  uVar5 = uVar2 >> 1;
  uVar8 = (uint)lVar9;
  uVar14 = uVar8 & 0xfffffff8;
  if (uVar3 == 0) {
    if ((int)uVar14 < 1) {
      uVar14 = 0;
      if ((int)uVar8 < 1) {
        return;
      }
    }
    else {
      lVar9 = 0;
      pauVar19 = (undefined1 (*) [16])(lVar11 + 0x10);
      do {
        auVar22._4_4_ = uVar5;
        auVar22._0_4_ = uVar5;
        auVar22._8_4_ = uVar5;
        auVar22._12_4_ = uVar5;
        auVar22 = NEON_sqrdmulh(pauVar19[-1],auVar22,4);
        auVar21._4_4_ = uVar5;
        auVar21._0_4_ = uVar5;
        auVar21._8_4_ = uVar5;
        auVar21._12_4_ = uVar5;
        auVar21 = NEON_sqrdmulh(*pauVar19,auVar21,4);
        *(ulong *)(lVar6 + lVar9) =
             CONCAT17(auVar21[0xc],
                      CONCAT16(auVar21[8],
                               CONCAT15(auVar21[4],
                                        CONCAT14(auVar21[0],
                                                 CONCAT13(auVar22[0xc],
                                                          CONCAT12(auVar22[8],
                                                                   CONCAT11(auVar22[4],auVar22[0])))
                                                ))));
        lVar9 = lVar9 + 8;
        *(undefined8 *)(pauVar19[-1] + 8) = 0;
        *(undefined8 *)pauVar19[-1] = 0;
        *(undefined8 *)(*pauVar19 + 8) = 0;
        *(undefined8 *)*pauVar19 = 0;
        pauVar19 = pauVar19 + 2;
      } while (lVar9 < (int)uVar14);
      uVar14 = uVar8 & 0xfffffff8;
      if ((int)uVar8 <= (int)uVar14) {
        return;
      }
    }
    lVar9 = (long)(int)uVar8 - (long)(int)uVar14;
    puVar7 = (undefined1 *)(lVar6 + (int)uVar14);
    puVar10 = (uint *)(lVar11 + (long)(int)uVar14 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar7 = (char)((ulong)*puVar10 * (ulong)uVar2 + 0x80000000 >> 0x20);
      *puVar10 = 0;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x60);
    if ((int)uVar14 < 1) {
      uVar16 = 0;
      if ((int)uVar8 < 1) {
        return;
      }
    }
    else {
      uVar2 = uVar3 >> 1;
      lVar15 = 0;
      pauVar19 = (undefined1 (*) [16])(lVar13 + 0x10);
      pauVar20 = (undefined1 (*) [16])(lVar11 + 0x10);
      do {
        pauVar1 = pauVar19 + -1;
        auVar22 = *pauVar19;
        pauVar19 = pauVar19 + 2;
        auVar25._4_4_ = uVar2;
        auVar25._0_4_ = uVar2;
        auVar25._8_4_ = uVar2;
        auVar25._12_4_ = uVar2;
        auVar21 = NEON_sqrdmulh(*pauVar1,auVar25,4);
        auVar4._4_4_ = uVar2;
        auVar4._0_4_ = uVar2;
        auVar4._8_4_ = uVar2;
        auVar4._12_4_ = uVar2;
        auVar22 = NEON_sqrdmulh(auVar22,auVar4,4);
        auVar23 = NEON_uqsub(pauVar20[-1],auVar21,4);
        auVar25 = NEON_uqsub(*pauVar20,auVar22,4);
        auVar24._4_4_ = uVar5;
        auVar24._0_4_ = uVar5;
        auVar24._8_4_ = uVar5;
        auVar24._12_4_ = uVar5;
        auVar24 = NEON_sqrdmulh(auVar23,auVar24,4);
        auVar23._4_4_ = uVar5;
        auVar23._0_4_ = uVar5;
        auVar23._8_4_ = uVar5;
        auVar23._12_4_ = uVar5;
        auVar23 = NEON_sqrdmulh(auVar25,auVar23,4);
        *(ulong *)(lVar6 + lVar15) =
             CONCAT17(auVar23[0xc],
                      CONCAT16(auVar23[8],
                               CONCAT15(auVar23[4],
                                        CONCAT14(auVar23[0],
                                                 CONCAT13(auVar24[0xc],
                                                          CONCAT12(auVar24[8],
                                                                   CONCAT11(auVar24[4],auVar24[0])))
                                                ))));
        lVar15 = lVar15 + 8;
        *(long *)(pauVar20[-1] + 8) = auVar21._8_8_;
        *(long *)pauVar20[-1] = auVar21._0_8_;
        *(long *)(*pauVar20 + 8) = auVar22._8_8_;
        *(long *)*pauVar20 = auVar22._0_8_;
        pauVar20 = pauVar20 + 2;
      } while (lVar15 < (int)uVar14);
      uVar16 = (ulong)(uVar8 & 0xfffffff8);
      if ((int)uVar8 <= (int)(uVar8 & 0xfffffff8)) {
        return;
      }
    }
    uVar17 = -(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
    lVar9 = lVar9 - (int)uVar16;
    puVar7 = (undefined1 *)(lVar6 + (int)uVar16);
    piVar12 = (int *)(lVar11 + uVar17);
    puVar10 = (uint *)(lVar13 + uVar17);
    do {
      lVar9 = lVar9 + -1;
      iVar18 = (int)((ulong)*puVar10 * (ulong)uVar3 + 0x80000000 >> 0x20);
      *puVar7 = (char)((ulong)(uint)(*piVar12 - iVar18) * (ulong)*(uint *)(param_1 + 0x14) +
                       0x80000000 >> 0x20);
      *piVar12 = iVar18;
      puVar7 = puVar7 + 1;
      piVar12 = piVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
  return;
}

