
void ecp_nistz256_point_add(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 uVar6;
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  undefined8 extraout_x14_01;
  undefined8 extraout_x14_02;
  long extraout_x14_03;
  long extraout_x14_04;
  undefined8 extraout_x14_05;
  undefined8 extraout_x15;
  long extraout_x15_00;
  long extraout_x15_01;
  undefined8 extraout_x16;
  long extraout_x16_00;
  long extraout_x16_01;
  undefined8 extraout_x17;
  long extraout_x17_00;
  long extraout_x17_01;
  undefined1 auVar7 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130 [4];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = (ulong)((param_3[8] != 0 || param_3[9] != 0) || (param_3[10] != 0 || param_3[0xb] != 0));
  FUN_00bd54e0(&local_110);
  uVar2 = (ulong)((param_2[8] != 0 || param_2[9] != 0) || (param_2[10] != 0 || param_2[0xb] != 0));
  FUN_00bd54e0(&local_150);
  FUN_00bd5300(&local_90,extraout_x1_05,param_3 + 8,param_3[8],local_110,uStack_108,local_100,
               uStack_f8);
  FUN_00bd5300(&local_70,extraout_x1_06,param_2 + 8,param_2[8],local_150,uStack_148,local_140,
               uStack_138);
  FUN_00bd5300(&local_90,extraout_x1_07,param_2 + 4,param_2[4],local_90,uStack_88,local_80,uStack_78
              );
  FUN_00bd5300(&local_70,extraout_x1_08,param_3 + 4,param_3[4],local_70,uStack_68,local_60,uStack_58
              );
  FUN_00bd56a0(local_130,extraout_x1_09,&local_90,local_110,*param_2,param_2[1],param_2[2],
               param_2[3]);
  FUN_00bd5300(&local_d0,extraout_x1_10,&local_110);
  FUN_00bd5300(auStack_b0,extraout_x1_11,&local_150,local_150,*param_3,param_3[1],param_3[2],
               param_3[3]);
  FUN_00bd56a0(&local_170,extraout_x1_12,&local_d0);
  if (((extraout_x14_04 == 0 && extraout_x15_01 == 0) &&
       (extraout_x16_01 == 0 && extraout_x17_01 == 0)) && ((-uVar2 & -uVar1) != 0)) {
    if ((extraout_x14_03 == 0 && extraout_x15_00 == 0) &&
        (extraout_x16_00 == 0 && extraout_x17_00 == 0)) {
      FUN_00bd5650(param_2[4],&local_d0);
      FUN_00bd54e0(&local_90);
      FUN_00bd5650(*param_2,auStack_b0);
      FUN_00bd56f0(&local_90,extraout_x1,param_2);
      FUN_00bd54e0(&local_d0);
      FUN_00bd5300(&local_70,extraout_x1_00,param_2 + 4,param_2[4],param_2[8],param_2[9],param_2[10]
                   ,param_2[0xb]);
      FUN_00bd5650(extraout_x14,param_1 + 8);
      FUN_00bd54e0(&local_70);
      FUN_00bd5740(param_1 + 4);
      FUN_00bd5300(auStack_b0,extraout_x1_01,&local_90);
      uVar6 = extraout_x14_00;
      FUN_00bd5650(extraout_x14_00,auStack_b0);
      FUN_00bd5650(uVar6);
      FUN_00bd5300(&local_d0,extraout_x1_02,param_2);
      FUN_00bd5650(extraout_x14_01,&local_70);
      auVar7 = FUN_00bd54e0(param_1);
      FUN_00bd56a0(auVar7._0_8_,auVar7._8_8_,&local_70);
      auVar7 = FUN_00bd56f0(&local_d0,extraout_x1_03,&local_d0);
      FUN_00bd5300(auVar7._0_8_,auVar7._8_8_,auStack_b0,auStack_b0[0],extraout_x14_02,extraout_x15,
                   extraout_x16,extraout_x17);
      FUN_00bd56a0(param_1 + 4,extraout_x1_04,param_1 + 4);
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    FUN_00bd54e0(&local_110);
    FUN_00bd5300(&local_190,extraout_x1_13,param_2 + 8,param_2[8],local_170,uStack_168,local_160,
                 uStack_158);
    FUN_00bd54e0(&local_150);
    FUN_00bd5300(&local_190,extraout_x1_14,param_3 + 8,param_3[8],local_190,uStack_188,local_180,
                 uStack_178);
    FUN_00bd5300(local_f0,extraout_x1_15,&local_170,local_170,local_150,uStack_148,local_140,
                 uStack_138);
    FUN_00bd5300(auStack_b0,extraout_x1_16,&local_150,local_150,local_d0,uStack_c8,local_c0,
                 uStack_b8);
    FUN_00bd5650(extraout_x14_05,&local_150);
    auVar7 = FUN_00bd56f0(&local_1d0,extraout_x1_17,&local_110);
    FUN_00bd56a0(auVar7._0_8_,auVar7._8_8_,local_f0);
    FUN_00bd56f0(&local_1b0,extraout_x1_18,auStack_b0,local_f0[0],local_90,uStack_88,local_80,
                 uStack_78);
    FUN_00bd5300(&local_70,extraout_x1_19,local_f0);
    auVar7 = FUN_00bd5300(&local_1b0,extraout_x1_20,local_130,local_130[0],local_1b0,uStack_1a8,
                          local_1a0,uStack_198);
    FUN_00bd56a0(auVar7._0_8_,auVar7._8_8_,&local_70);
    if (uVar2 == 0) {
      uStack_1b8 = param_3[3];
      local_1c0 = param_3[2];
      uStack_1c8 = param_3[1];
      local_1d0 = *param_3;
    }
    if (uVar1 == 0) {
      uStack_1c8 = param_2[1];
      local_1d0 = *param_2;
    }
    uVar6 = param_3[4];
    uVar4 = param_3[5];
    if (uVar1 == 0) {
      uStack_1b8 = param_2[3];
      local_1c0 = param_2[2];
    }
    uVar3 = param_3[6];
    uVar5 = param_3[7];
    *param_1 = local_1d0;
    param_1[1] = uStack_1c8;
    param_1[2] = local_1c0;
    param_1[3] = uStack_1b8;
    if (uVar2 == 0) {
      uStack_198 = uVar5;
      local_1a0 = uVar3;
      uStack_1a8 = uVar4;
      local_1b0 = uVar6;
    }
    if (uVar1 == 0) {
      uStack_1a8 = param_2[5];
      local_1b0 = param_2[4];
    }
    uVar6 = param_3[8];
    uVar4 = param_3[9];
    if (uVar1 == 0) {
      uStack_198 = param_2[7];
      local_1a0 = param_2[6];
    }
    uVar3 = param_3[10];
    uVar5 = param_3[0xb];
    param_1[4] = local_1b0;
    param_1[5] = uStack_1a8;
    param_1[6] = local_1a0;
    param_1[7] = uStack_198;
    if (uVar2 == 0) {
      uStack_178 = uVar5;
      local_180 = uVar3;
      uStack_188 = uVar4;
      local_190 = uVar6;
    }
    if (uVar1 == 0) {
      uStack_178 = param_2[0xb];
      local_180 = param_2[10];
      uStack_188 = param_2[9];
      local_190 = param_2[8];
    }
    param_1[8] = local_190;
    param_1[9] = uStack_188;
    param_1[10] = local_180;
    param_1[0xb] = uStack_178;
  }
  return;
}

