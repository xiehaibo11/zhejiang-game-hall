
/* v8::internal::RegisterConfiguration::RestrictGeneralRegisters(unsigned long) */

void v8::internal::RegisterConfiguration::RestrictGeneralRegisters(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  undefined1 (*pauVar6) [16];
  void *pvVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  long lVar16;
  int iVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  byte bVar21;
  char cVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  cVar20 = POPCOUNT((char)(param_1 >> 0x10));
  cVar22 = POPCOUNT((char)(param_1 >> 0x18));
  uVar5 = NEON_uaddlv(CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                               CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                        CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                                 CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                          CONCAT13(cVar22,CONCAT12(cVar20,CONCAT11(
                                                  POPCOUNT((char)(param_1 >> 8)),
                                                  POPCOUNT((char)param_1)))))))),1);
  uVar9 = CONCAT13(cVar22,CONCAT12(cVar20,uVar5));
  uVar15 = (ulong)uVar9;
  pauVar6 = operator_new__(uVar15 << 2);
  pvVar7 = operator_new__(uVar15 << 3);
  Default();
  if (0 < (int)DAT_01d46810) {
    lVar16 = 0;
    iVar17 = 0;
    do {
      Default();
      uVar3 = *(uint *)(DAT_01d46830 + lVar16 * 4);
      uVar10 = 0;
      if (uVar3 != 0xffffffff) {
        uVar10 = 1L << ((ulong)uVar3 & 0x3f);
      }
      if ((uVar10 & param_1) != 0) {
        uVar11 = (&RegisterName(v8::internal::Register)::Names)[lVar16];
        *(uint *)(*pauVar6 + (long)iVar17 * 4) = uVar3;
        *(undefined8 *)((long)pvVar7 + (long)iVar17 * 8) = uVar11;
        iVar17 = iVar17 + 1;
      }
      lVar16 = lVar16 + 1;
      Default();
    } while (lVar16 < (int)DAT_01d46810);
  }
  puVar8 = operator_new(0x160);
  puVar8[1] = 0x20;
  puVar8[2] = 0x20;
  puVar8[0x18] = &DAT_01a47c04;
  *(uint *)(puVar8 + 3) = uVar9;
  *(undefined8 *)((long)puVar8 + 0x2c) = 0;
  *(undefined8 *)((long)puVar8 + 0x24) = 0;
  *(undefined4 *)((long)puVar8 + 0x34) = 0;
  puVar8[7] = pauVar6;
  *puVar8 = &PTR__RegisterConfiguration_01cc6818;
  *(undefined8 *)((long)puVar8 + 0x1c) = 0x1c00000000;
  *(undefined4 *)(puVar8 + 0x29) = 0;
  if (uVar9 == 0) goto LAB_014e3b94;
  if (uVar15 < 4) {
    uVar9 = 0;
    uVar12 = 0;
LAB_014e3b70:
    lVar16 = uVar15 - uVar12;
    puVar13 = (uint *)(*pauVar6 + uVar12 * 4);
    do {
      lVar16 = lVar16 + -1;
      uVar9 = 1 << (ulong)(*puVar13 & 0x1f) | uVar9;
      puVar13 = puVar13 + 1;
    } while (lVar16 != 0);
  }
  else {
    uVar12 = uVar15 & 0x7c;
    bVar18 = 0;
    bVar19 = 0;
    bVar21 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    auVar36._8_4_ = 1;
    auVar36._0_8_ = 0x100000001;
    auVar36._12_4_ = 1;
    uVar10 = uVar12;
    pauVar14 = pauVar6;
    do {
      uVar10 = uVar10 - 4;
      auVar37 = NEON_ushl(auVar36,*pauVar14,4);
      bVar18 = auVar37[0] | bVar18;
      bVar19 = auVar37[1] | bVar19;
      bVar21 = auVar37[2] | bVar21;
      bVar23 = auVar37[3] | bVar23;
      bVar24 = auVar37[4] | bVar24;
      bVar25 = auVar37[5] | bVar25;
      bVar26 = auVar37[6] | bVar26;
      bVar27 = auVar37[7] | bVar27;
      bVar28 = auVar37[8] | bVar28;
      bVar29 = auVar37[9] | bVar29;
      bVar30 = auVar37[10] | bVar30;
      bVar31 = auVar37[0xb] | bVar31;
      bVar32 = auVar37[0xc] | bVar32;
      bVar33 = auVar37[0xd] | bVar33;
      bVar34 = auVar37[0xe] | bVar34;
      bVar35 = auVar37[0xf] | bVar35;
      pauVar14 = pauVar14 + 1;
    } while (uVar10 != 0);
    auVar37[1] = bVar19;
    auVar37[0] = bVar18;
    auVar37[2] = bVar21;
    auVar37[3] = bVar23;
    auVar37[4] = bVar24;
    auVar37[5] = bVar25;
    auVar37[6] = bVar26;
    auVar37[7] = bVar27;
    auVar37[8] = bVar28;
    auVar37[9] = bVar29;
    auVar37[10] = bVar30;
    auVar37[0xb] = bVar31;
    auVar37[0xc] = bVar32;
    auVar37[0xd] = bVar33;
    auVar37[0xe] = bVar34;
    auVar37[0xf] = bVar35;
    auVar4[1] = bVar19;
    auVar4[0] = bVar18;
    auVar4[2] = bVar21;
    auVar4[3] = bVar23;
    auVar4[4] = bVar24;
    auVar4[5] = bVar25;
    auVar4[6] = bVar26;
    auVar4[7] = bVar27;
    auVar4[8] = bVar28;
    auVar4[9] = bVar29;
    auVar4[10] = bVar30;
    auVar4[0xb] = bVar31;
    auVar4[0xc] = bVar32;
    auVar4[0xd] = bVar33;
    auVar4[0xe] = bVar34;
    auVar4[0xf] = bVar35;
    auVar36 = NEON_ext(auVar37,auVar4,8,1);
    uVar9 = CONCAT13(bVar23 | auVar36[3] | bVar27 | auVar36[7],
                     CONCAT12(bVar21 | auVar36[2] | bVar26 | auVar36[6],
                              CONCAT11(bVar19 | auVar36[1] | bVar25 | auVar36[5],
                                       bVar18 | auVar36[0] | bVar24 | auVar36[4])));
    if (uVar15 != uVar12) goto LAB_014e3b70;
  }
  *(uint *)(puVar8 + 5) = uVar9;
LAB_014e3b94:
  *(undefined4 *)((long)puVar8 + 0x14) = 0x20;
  *(undefined4 *)((long)puVar8 + 0xc) = 0x20;
  *(undefined4 *)((long)puVar8 + 0x24) = 0x1c;
  *(undefined4 *)((long)puVar8 + 0x1c) = 0x1c;
  *(undefined4 *)(puVar8 + 0x1a) = 2;
  *(undefined4 *)(puVar8 + 9) = 2;
  *(undefined4 *)(puVar8 + 6) = 0x1fff7fff;
  puVar8[0x19] = 0x100000000;
  puVar8[8] = 0x100000000;
  lVar16 = 0;
  do {
    uVar2 = *(undefined4 *)(puVar8[0x18] + lVar16 + 0xc);
    lVar1 = lVar16 + 4;
    *(undefined4 *)((long)puVar8 + lVar16 + 0xd4) = uVar2;
    *(undefined4 *)((long)puVar8 + lVar16 + 0x4c) = uVar2;
    lVar16 = lVar1;
  } while (lVar1 != 100);
  puVar8[0x2a] = pauVar6;
  puVar8[0x2b] = pvVar7;
  *(undefined4 *)((long)puVar8 + 0x34) = 0x1fff7fff;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0x1fff7fff;
  *puVar8 = &PTR_FUN_01cc6878;
  return;
}

