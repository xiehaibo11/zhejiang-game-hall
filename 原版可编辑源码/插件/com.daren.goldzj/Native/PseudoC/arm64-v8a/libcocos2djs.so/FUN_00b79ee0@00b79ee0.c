
void FUN_00b79ee0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  uint extraout_w1;
  long extraout_x8;
  unkbyte9 *pVar5;
  unkbyte9 *extraout_x8_00;
  unkbyte9 *extraout_x8_01;
  unkbyte9 *extraout_x8_02;
  undefined8 extraout_d0;
  undefined1 auVar6 [16];
  undefined1 extraout_q0 [16];
  undefined1 auVar7 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined8 extraout_var;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  
  pauVar3 = (undefined1 (*) [16])FUN_00b79ea0();
  auVar7 = *pauVar3;
  auVar6 = FUN_00b7a0f0(pauVar3 + 1);
  pVar5 = (unkbyte9 *)(&DAT_00b79680 + extraout_x8);
  if (param_4 == 0) {
    *param_3 = auVar6._0_8_;
    param_3[1] = auVar6._8_8_;
  }
  else {
    uVar2 = *(undefined8 *)(&DAT_00b79688 + extraout_x8);
    auVar6[9] = (char)((ulong)uVar2 >> 8);
    auVar6._0_9_ = *pVar5;
    auVar6[10] = (char)((ulong)uVar2 >> 0x10);
    auVar6[0xb] = (char)((ulong)uVar2 >> 0x18);
    auVar6[0xc] = (char)((ulong)uVar2 >> 0x20);
    auVar6[0xd] = (char)((ulong)uVar2 >> 0x28);
    auVar6[0xe] = (char)((ulong)uVar2 >> 0x30);
    auVar6[0xf] = (char)((ulong)uVar2 >> 0x38);
    auVar7 = a64_TBL(ZEXT816(0),auVar7,auVar6);
    *param_3 = auVar7._0_8_;
    param_3[1] = auVar7._8_8_;
    pVar5 = (unkbyte9 *)((ulong)pVar5 ^ 0x30);
  }
  if (extraout_w1 < 0xc1) {
    if (extraout_w1 == 0xc0) {
      auVar7 = FUN_00b7a0f0(pVar5);
      uVar16 = auVar7[8];
      uVar17 = auVar7[9];
      uVar18 = auVar7[10];
      uVar19 = auVar7[0xb];
      uVar20 = auVar7[0xc];
      uVar21 = auVar7[0xd];
      uVar22 = auVar7[0xe];
      uVar23 = auVar7[0xf];
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      lVar4 = 4;
      while( true ) {
        auVar6 = FUN_00b7a070(lVar4 + -1);
        auVar7[1] = uVar9;
        auVar7[0] = uVar8;
        auVar7[2] = uVar10;
        auVar7[3] = uVar11;
        auVar7[4] = uVar12;
        auVar7[5] = uVar13;
        auVar7[6] = uVar14;
        auVar7[7] = uVar15;
        auVar7[8] = uVar16;
        auVar7[9] = uVar17;
        auVar7[10] = uVar18;
        auVar7[0xb] = uVar19;
        auVar7[0xc] = uVar20;
        auVar7[0xd] = uVar21;
        auVar7[0xe] = uVar22;
        auVar7[0xf] = uVar23;
        auVar7 = NEON_ext(auVar7,auVar6,8,1);
        FUN_00b7a110(auVar7);
        FUN_00b7a040();
        FUN_00b7a110();
        lVar4 = FUN_00b7a070();
        pVar5 = extraout_x8_01;
        auVar7 = extraout_q0_00;
        if (lVar4 == 0) break;
        FUN_00b7a110();
        lVar4 = FUN_00b7a040();
      }
    }
    else {
      lVar4 = 10;
      while (lVar4 = FUN_00b7a070(lVar4 + -1), pVar5 = extraout_x8_00, auVar7 = extraout_q0,
            lVar4 != 0) {
        lVar4 = FUN_00b7a110();
      }
    }
  }
  else {
    FUN_00b7a0f0(pVar5);
    lVar4 = 7;
    while( true ) {
      FUN_00b7a110(lVar4 + -1);
      lVar4 = FUN_00b7a070();
      pVar5 = extraout_x8_02;
      auVar7 = extraout_q0_01;
      if (lVar4 == 0) break;
      FUN_00b7a110();
      lVar4 = FUN_00b7a088();
    }
  }
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)((long)pVar5 + 8);
    param_3 = param_3 + 4;
    auVar1[9] = (char)((ulong)uVar2 >> 8);
    auVar1._0_9_ = *pVar5;
    auVar1[10] = (char)((ulong)uVar2 >> 0x10);
    auVar1[0xb] = (char)((ulong)uVar2 >> 0x18);
    auVar1[0xc] = (char)((ulong)uVar2 >> 0x20);
    auVar1[0xd] = (char)((ulong)uVar2 >> 0x28);
    auVar1[0xe] = (char)((ulong)uVar2 >> 0x30);
    auVar1[0xf] = (char)((ulong)uVar2 >> 0x38);
    a64_TBL(ZEXT816(0),auVar7,auVar1);
  }
  param_3 = param_3 + -2;
  FUN_00b7a0f0();
  *param_3 = extraout_d0;
  param_3[1] = extraout_var;
  return;
}

