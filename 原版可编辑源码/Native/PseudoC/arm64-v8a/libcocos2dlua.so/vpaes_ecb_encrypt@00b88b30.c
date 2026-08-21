
void vpaes_ecb_encrypt(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                      undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulong extraout_x17;
  ulong extraout_x17_00;
  ulong extraout_x17_01;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar17 = param_2[0xf];
  uVar16 = param_2[0xe];
  uVar15 = param_2[0xd];
  uVar14 = param_2[0xc];
  uVar13 = param_2[0xb];
  uVar12 = param_2[10];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = param_2[0];
  auVar18 = FUN_00b88140(param_3,param_4,param_6);
  if ((extraout_x17 & 0x10) != 0) {
    auVar19 = FUN_00b88160(auVar18._0_8_ + 0x10);
    puVar1 = auVar19._8_8_;
    *puVar1 = extraout_b0;
    puVar1[1] = extraout_var;
    puVar1[2] = extraout_var_01;
    puVar1[3] = extraout_var_03;
    puVar1[4] = extraout_var_05;
    puVar1[5] = extraout_var_07;
    puVar1[6] = extraout_var_09;
    puVar1[7] = extraout_var_11;
    puVar1[8] = extraout_var_13;
    puVar1[9] = extraout_var_15;
    puVar1[10] = extraout_var_17;
    puVar1[0xb] = extraout_var_19;
    puVar1[0xc] = extraout_var_21;
    puVar1[0xd] = extraout_var_23;
    puVar1[0xe] = extraout_var_25;
    puVar1[0xf] = extraout_var_27;
    auVar18._8_8_ = puVar1 + 0x10;
    auVar18._0_8_ = auVar19._0_8_;
    if (extraout_x17_00 < 0x11) {
      return;
    }
  }
  do {
    auVar19 = FUN_00b88250(auVar18._0_8_ + 0x20,auVar18._8_8_);
    puVar1 = auVar19._8_8_;
    *puVar1 = extraout_b0_00;
    puVar1[1] = extraout_var_00;
    puVar1[2] = extraout_var_02;
    puVar1[3] = extraout_var_04;
    puVar1[4] = extraout_var_06;
    puVar1[5] = extraout_var_08;
    puVar1[6] = extraout_var_10;
    puVar1[7] = extraout_var_12;
    puVar1[8] = extraout_var_14;
    puVar1[9] = extraout_var_16;
    puVar1[10] = extraout_var_18;
    puVar1[0xb] = extraout_var_20;
    puVar1[0xc] = extraout_var_22;
    puVar1[0xd] = extraout_var_24;
    puVar1[0xe] = extraout_var_26;
    puVar1[0xf] = extraout_var_28;
    puVar1[0x10] = uVar2;
    puVar1[0x11] = uVar3;
    puVar1[0x12] = uVar4;
    puVar1[0x13] = uVar5;
    puVar1[0x14] = uVar6;
    puVar1[0x15] = uVar7;
    puVar1[0x16] = uVar8;
    puVar1[0x17] = uVar9;
    puVar1[0x18] = uVar10;
    puVar1[0x19] = uVar11;
    puVar1[0x1a] = uVar12;
    puVar1[0x1b] = uVar13;
    puVar1[0x1c] = uVar14;
    puVar1[0x1d] = uVar15;
    puVar1[0x1e] = uVar16;
    puVar1[0x1f] = uVar17;
    auVar18._8_8_ = puVar1 + 0x20;
    auVar18._0_8_ = auVar19._0_8_;
                    /* try { // try from 00b88b80 to 00c88b83 has its CatchHandler @ 00b88c38 */
  } while (0x20 < extraout_x17_01);
                    /* try { // try from 00b88b84 to 00c88bef has its CatchHandler @ 00b88a74 */
  return;
}

