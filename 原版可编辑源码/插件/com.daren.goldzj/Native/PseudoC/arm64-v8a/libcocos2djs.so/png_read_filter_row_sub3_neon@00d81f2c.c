
void png_read_filter_row_sub3_neon(long param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  char cVar16;
  char cVar21;
  uint uVar17;
  char cVar19;
  char cVar20;
  ulong uVar18;
  char cVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 uVar23;
  undefined8 uVar27;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < lVar2) {
    uVar14 = *(undefined8 *)*param_2;
    cVar5 = (char)uVar14;
    cVar6 = (char)((ulong)uVar14 >> 8);
    cVar7 = (char)((ulong)uVar14 >> 0x10);
    cVar8 = (char)((ulong)uVar14 >> 0x18);
    uVar9 = (undefined1)((ulong)uVar14 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar14 >> 0x28);
    uVar11 = (undefined1)((ulong)uVar14 >> 0x30);
    uVar12 = (undefined1)((ulong)uVar14 >> 0x38);
    uVar18 = 0;
    auVar15 = NEON_ext(*param_2,*param_2,8,1);
    pauVar3 = param_2;
    do {
      uVar13 = auVar15._0_8_;
      uVar23 = NEON_ext(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(uVar9,CONCAT13(
                                                  cVar8,CONCAT12(cVar7,CONCAT11(cVar6,cVar5))))))),
                        uVar13,3,1);
      cVar16 = cVar5 + (char)uVar18;
      cVar19 = cVar6 + (char)(uVar18 >> 8);
      cVar20 = cVar7 + (char)(uVar18 >> 0x10);
      cVar21 = cVar8 + (char)(uVar18 >> 0x18);
      uVar27 = NEON_ext(CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(uVar9,CONCAT13(
                                                  cVar8,CONCAT12(cVar7,CONCAT11(cVar6,cVar5))))))),
                        uVar13,6,1);
      pauVar4 = (undefined1 (*) [16])(*pauVar3 + 0xc);
      uVar14 = *(undefined8 *)*pauVar4;
      auVar1 = *pauVar4;
      auVar15 = *pauVar4;
      cVar5 = (char)uVar14;
      cVar6 = (char)((ulong)uVar14 >> 8);
      cVar7 = (char)((ulong)uVar14 >> 0x10);
      cVar8 = (char)((ulong)uVar14 >> 0x18);
      uVar9 = (undefined1)((ulong)uVar14 >> 0x20);
      uVar10 = (undefined1)((ulong)uVar14 >> 0x28);
      uVar11 = (undefined1)((ulong)uVar14 >> 0x30);
      uVar12 = (undefined1)((ulong)uVar14 >> 0x38);
      cVar22 = (char)uVar23 + cVar16;
      cVar24 = (char)((ulong)uVar23 >> 8) + cVar19;
      cVar25 = (char)((ulong)uVar23 >> 0x10) + cVar20;
      cVar26 = (char)((ulong)uVar23 >> 0x18) + cVar21;
      uVar14 = NEON_ext(uVar13,uVar13,1,1);
      *(uint *)*pauVar3 = CONCAT13(cVar21,CONCAT12(cVar20,CONCAT11(cVar19,cVar16)));
      *(uint *)(*pauVar3 + 3) = CONCAT13(cVar26,CONCAT12(cVar25,CONCAT11(cVar24,cVar22)));
      cVar22 = cVar22 + (char)uVar27;
      cVar24 = cVar24 + (char)((ulong)uVar27 >> 8);
      cVar25 = cVar25 + (char)((ulong)uVar27 >> 0x10);
      cVar26 = cVar26 + (char)((ulong)uVar27 >> 0x18);
      uVar17 = CONCAT13(cVar26 + (char)((ulong)uVar14 >> 0x18),
                        CONCAT12(cVar25 + (char)((ulong)uVar14 >> 0x10),
                                 CONCAT11(cVar24 + (char)((ulong)uVar14 >> 8),cVar22 + (char)uVar14)
                                ));
      uVar18 = (ulong)uVar17;
      auVar15 = NEON_ext(auVar15,auVar1,8,1);
      *(uint *)(*pauVar3 + 6) = CONCAT13(cVar26,CONCAT12(cVar25,CONCAT11(cVar24,cVar22)));
      *(uint *)(*pauVar3 + 9) = uVar17;
      pauVar3 = pauVar4;
    } while (pauVar4 < (undefined1 (*) [16])(*param_2 + lVar2));
  }
  return;
}

