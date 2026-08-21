
void FUN_01150820(byte *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  ushort uVar11;
  ulong *puVar12;
  undefined1 uVar13;
  char cVar14;
  undefined1 uVar15;
  char cVar16;
  undefined1 uVar17;
  char cVar18;
  undefined1 uVar19;
  char cVar20;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  if (param_3 < 4) {
    FUN_0114f0e4(param_1,param_2,param_3);
    return;
  }
  uVar9 = -(ushort)(param_1[1] >> 7) & 0xfc00 | (ushort)param_1[1] << 2;
  uVar11 = -(ushort)(*param_1 >> 7) & 0xfc00 | (ushort)*param_1 << 2;
  uVar8 = -(ushort)(param_1[2] >> 7) & 0xfc00 | (ushort)param_1[2] << 2;
  lVar10 = 4;
  lVar1 = (ulong)(param_3 - 4U & 0xfffffffc) + 4;
  puVar12 = param_2;
  do {
    uVar6 = puVar12[1];
    uVar13 = (undefined1)(uVar6 >> 8);
    cVar14 = (char)(uVar6 >> 0x10);
    uVar15 = (undefined1)(uVar6 >> 0x18);
    cVar16 = (char)(uVar6 >> 0x20);
    uVar17 = (undefined1)(uVar6 >> 0x28);
    cVar18 = (char)(uVar6 >> 0x30);
    uVar19 = (undefined1)(uVar6 >> 0x38);
    uVar5 = *puVar12;
    lVar10 = lVar10 + 4;
    auVar3[9] = uVar13;
    auVar3._0_9_ = *(unkbyte9 *)puVar12;
    auVar3[10] = cVar14;
    auVar3[0xb] = uVar15;
    auVar3[0xc] = cVar16;
    auVar3[0xd] = uVar17;
    auVar3[0xe] = cVar18;
    auVar3[0xf] = uVar19;
    auVar4[9] = uVar13;
    auVar4._0_9_ = *(unkbyte9 *)puVar12;
    auVar4[10] = cVar14;
    auVar4[0xb] = uVar15;
    auVar4[0xc] = cVar16;
    auVar4[0xd] = uVar17;
    auVar4[0xe] = cVar18;
    auVar4[0xf] = uVar19;
    auVar31 = NEON_ext(auVar3,auVar4,8,1);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar5;
    auVar32._0_8_ = auVar31._0_8_;
    auVar32._8_8_ = 0;
    auVar22._0_8_ = a64_TBL(ZEXT816(0),auVar21,0x5ff05ff01ff01ff);
    uVar30 = a64_TBL(ZEXT816(0),auVar32,0x5ff05ff01ff01ff);
    auVar22._8_8_ = uVar30;
    auVar2._2_2_ = uVar11;
    auVar2._0_2_ = uVar9;
    auVar2._4_2_ = uVar9;
    auVar2._6_2_ = uVar11;
    auVar2._8_2_ = uVar9;
    auVar2._10_2_ = uVar11;
    auVar2._12_2_ = uVar9;
    auVar2._14_2_ = uVar11;
    auVar31 = NEON_sqdmulh(auVar22,auVar2,2);
    cVar20 = (char)uVar5 + auVar31[0];
    bVar23 = (char)(uVar5 >> 0x10) + auVar31[2];
    bVar24 = (char)(uVar5 >> 0x20) + auVar31[4];
    bVar25 = (char)(uVar5 >> 0x30) + auVar31[6];
    bVar26 = (char)uVar6 + auVar31[8];
    bVar27 = cVar14 + auVar31[10];
    bVar28 = cVar16 + auVar31[0xc];
    bVar29 = cVar18 + auVar31[0xe];
    auVar7._1_2_ = (ushort)bVar23 << 8;
    auVar7[0] = cVar20;
    auVar7._3_2_ = (ushort)bVar24 << 8;
    auVar7._5_2_ = (ushort)bVar25 << 8;
    auVar7._7_2_ = (ushort)bVar26 << 8;
    auVar7._9_2_ = (ushort)bVar27 << 8;
    auVar7._11_2_ = (ushort)bVar28 << 8;
    auVar7._13_2_ = (ushort)bVar29 << 8;
    auVar7[0xf] = 0;
    auVar31._6_2_ = uVar8;
    auVar31._0_6_ = (uint6)uVar8 << 0x10;
    auVar31._8_2_ = 0;
    auVar31._10_2_ = uVar8;
    auVar31._12_2_ = 0;
    auVar31._14_2_ = uVar8;
    auVar31 = NEON_sqdmulh(auVar7 << 8,auVar31,2);
    puVar12[1] = CONCAT17(uVar19,CONCAT16(bVar29,CONCAT15(uVar17,CONCAT14(bVar28 + auVar31[0xe],
                                                                          CONCAT13(uVar15,CONCAT12(
                                                  bVar27,CONCAT11(uVar13,bVar26 + auVar31[10])))))))
    ;
    *puVar12 = CONCAT17((char)(uVar5 >> 0x38),
                        CONCAT16(bVar25,CONCAT15((char)(uVar5 >> 0x28),
                                                 CONCAT14(bVar24 + auVar31[6],
                                                          CONCAT13((char)(uVar5 >> 0x18),
                                                                   CONCAT12(bVar23,CONCAT11((char)(
                                                  uVar5 >> 8),cVar20 + auVar31[2])))))));
    puVar12 = puVar12 + 2;
  } while (lVar10 <= param_3);
  FUN_0114f0e4(param_1,(long)param_2 + lVar1 * 4,param_3 - (int)lVar1);
  return;
}

