
void ditherAndClamp(uint *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  char cVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar28;
  char cVar29;
  byte bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  if (param_3 != 0) {
    if ((param_3 < 4) || ((param_1 < param_2 + param_3 * 2 && (param_2 < param_1 + param_3)))) {
      uVar15 = 0;
      puVar13 = param_1;
      puVar14 = param_2;
    }
    else {
      uVar15 = param_3 & 0xfffffffffffffffc;
      puVar13 = param_1 + uVar15;
      puVar14 = param_2 + uVar15 * 2;
      uVar17 = uVar15;
      do {
        uVar4 = *param_2;
        uVar22 = param_2[1];
        uVar1 = param_2[2];
        uVar25 = param_2[3];
        uVar2 = param_2[4];
        uVar26 = param_2[5];
        uVar5 = param_2[6];
        uVar27 = param_2[7];
        param_2 = param_2 + 8;
        uVar17 = uVar17 - 4;
        cVar9 = (char)(uVar4 >> 0x18);
        cVar28 = cVar9 >> 7;
        cVar10 = (char)(uVar1 >> 0x18);
        cVar29 = cVar10 >> 7;
        cVar11 = (char)(uVar2 >> 0x18);
        bVar30 = cVar11 >> 7;
        cVar12 = (char)(uVar5 >> 0x18);
        bVar31 = cVar12 >> 7;
        cVar18 = (char)((int)uVar22 >> 0x1f);
        cVar19 = (char)((int)uVar25 >> 0x1f);
        bVar20 = (byte)((int)uVar26 >> 0x1f);
        bVar21 = (byte)((int)uVar27 >> 0x1f);
        auVar23._0_4_ =
             -(uint)(CONCAT13(cVar28,CONCAT12(cVar28,CONCAT11(cVar28,cVar9 >> 3))) ==
                    (int)uVar4 >> 0x1f);
        auVar23._4_4_ =
             -(uint)(CONCAT13(cVar29,CONCAT12(cVar29,CONCAT11(cVar29,cVar10 >> 3))) ==
                    (int)uVar1 >> 0x1f);
        auVar23._8_4_ =
             -(uint)(CONCAT13(bVar30,CONCAT12(bVar30,CONCAT11(bVar30,cVar11 >> 3))) ==
                    (int)uVar2 >> 0x1f);
        auVar23._12_4_ =
             -(uint)(CONCAT13(bVar31,CONCAT12(bVar31,CONCAT11(bVar31,cVar12 >> 3))) ==
                    (int)uVar5 >> 0x1f);
        auVar32._0_4_ =
             -(uint)((int)uVar22 >> 0x1b ==
                    CONCAT13(cVar18,CONCAT12(cVar18,CONCAT11(cVar18,cVar18))));
        auVar32._4_4_ =
             -(uint)((int)uVar25 >> 0x1b ==
                    CONCAT13(cVar19,CONCAT12(cVar19,CONCAT11(cVar19,cVar19))));
        auVar32._8_4_ =
             -(uint)((int)uVar26 >> 0x1b ==
                    CONCAT13(bVar20,CONCAT12(bVar20,CONCAT11(bVar20,bVar20))));
        auVar32._12_4_ = -(uint)((int)uVar27 >> 0x1b == (int)uVar27 >> 0x1f);
        auVar6._4_4_ = uVar1 >> 0xc;
        auVar6._0_4_ = uVar4 >> 0xc;
        auVar6._8_4_ = uVar2 >> 0xc;
        auVar6._12_4_ = uVar5 >> 0xc;
        auVar8[8] = bVar30 ^ 0xff;
        auVar8._0_8_ = CONCAT17(cVar29,(uint7)CONCAT15(cVar29,CONCAT14(cVar29,(uint)CONCAT11(cVar28,
                                                  cVar28)))) ^ 0x7fff00007fff;
        auVar8[9] = bVar30 ^ 0x7f;
        auVar8[10] = bVar30;
        auVar8[0xb] = bVar30;
        auVar8[0xc] = bVar31 ^ 0xff;
        auVar8[0xd] = bVar31 ^ 0x7f;
        auVar8[0xe] = bVar31;
        auVar8[0xf] = bVar31;
        auVar24[8] = bVar30 ^ 0xff;
        auVar24._0_8_ =
             CONCAT17(cVar29,(uint7)CONCAT15(cVar29,CONCAT14(cVar29,(uint)CONCAT11(cVar28,cVar28))))
             ^ 0x7fff00007fff;
        auVar24[9] = bVar30 ^ 0x7f;
        auVar24[10] = bVar30;
        auVar24[0xb] = bVar30;
        auVar24[0xc] = bVar31 ^ 0xff;
        auVar24[0xd] = bVar31 ^ 0x7f;
        auVar24[0xe] = bVar31;
        auVar24[0xf] = bVar31;
        auVar24 = auVar24 ^ (auVar8 ^ auVar6) & auVar23;
        auVar3[8] = bVar20 ^ 0xff;
        auVar3._0_8_ = CONCAT17(cVar19,CONCAT16(cVar19,CONCAT15(cVar19,CONCAT14(cVar19,CONCAT13(
                                                  cVar18,CONCAT12(cVar18,CONCAT11(cVar18,cVar18)))))
                                               )) ^ 0x7fff00007fff;
        auVar3[9] = bVar20 ^ 0x7f;
        auVar3[10] = bVar20;
        auVar3[0xb] = bVar20;
        auVar3[0xc] = bVar21 ^ 0xff;
        auVar3[0xd] = bVar21 ^ 0x7f;
        auVar3[0xe] = bVar21;
        auVar3[0xf] = bVar21;
        auVar7._4_4_ = uVar25 >> 0xc;
        auVar7._0_4_ = uVar22 >> 0xc;
        auVar7._8_4_ = uVar26 >> 0xc;
        auVar7._12_4_ = uVar27 >> 0xc;
        auVar33[8] = bVar20 ^ 0xff;
        auVar33._0_8_ =
             CONCAT17(cVar19,CONCAT16(cVar19,CONCAT15(cVar19,CONCAT14(cVar19,CONCAT13(cVar18,
                                                  CONCAT12(cVar18,CONCAT11(cVar18,cVar18))))))) ^
             0x7fff00007fff;
        auVar33[9] = bVar20 ^ 0x7f;
        auVar33[10] = bVar20;
        auVar33[0xb] = bVar20;
        auVar33[0xc] = bVar21 ^ 0xff;
        auVar33[0xd] = bVar21 ^ 0x7f;
        auVar33[0xe] = bVar21;
        auVar33[0xf] = bVar21;
        auVar33 = auVar33 ^ (auVar3 ^ auVar7) & auVar32;
        *(ulong *)(param_1 + 2) =
             CONCAT17(auVar33[0xd],
                      CONCAT16(auVar33[0xc],
                               CONCAT15(auVar24[0xd],
                                        CONCAT14(auVar24[0xc],
                                                 CONCAT13(auVar33[9],
                                                          CONCAT12(auVar33[8],auVar24._8_2_))))));
        *(ulong *)param_1 =
             CONCAT17(auVar33[5],
                      CONCAT16(auVar33[4],
                               CONCAT15(auVar24[5],
                                        CONCAT14(auVar24[4],
                                                 CONCAT13(auVar33[1],
                                                          CONCAT12(auVar33[0],auVar24._0_2_))))));
        param_1 = param_1 + 4;
      } while (uVar17 != 0);
      if (uVar15 == param_3) {
        return;
      }
    }
    lVar16 = param_3 - uVar15;
    do {
      uVar1 = *puVar14;
      uVar2 = puVar14[1];
      uVar4 = uVar1 >> 0xc;
      if ((int)uVar1 >> 0x1f != (int)uVar1 >> 0x1b) {
        uVar4 = (int)uVar1 >> 0x1f ^ 0x7fff;
      }
      uVar1 = uVar2 >> 0xc;
      if ((int)uVar2 >> 0x1f != (int)uVar2 >> 0x1b) {
        uVar1 = (int)uVar2 >> 0x1f ^ 0x7fff;
      }
      lVar16 = lVar16 + -1;
      *puVar13 = uVar4 & 0xffff | uVar1 << 0x10;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 2;
    } while (lVar16 != 0);
  }
  return;
}

