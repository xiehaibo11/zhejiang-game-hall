
void FUN_00bd5cfc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
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
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  undefined8 extraout_x15;
  undefined8 extraout_x16;
  undefined8 extraout_x17;
  undefined1 auVar15 [16];
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [32];
  
  bVar5 = param_2[8] == 0;
  bVar6 = param_2[9] == 0;
  bVar7 = param_2[10] == 0;
  bVar8 = param_2[0xb] == 0;
  bVar9 = *param_3 == 0;
  bVar10 = param_3[1] == 0;
  bVar11 = param_3[2] == 0;
  bVar12 = param_3[3] == 0;
  bVar13 = param_3[4] == 0 && param_3[5] == 0;
  bVar14 = param_3[6] == 0 && param_3[7] == 0;
  FUN_00bd54e0(&uStack_110);
  FUN_00bd5300(auStack_130,extraout_x1,param_3,*param_3,extraout_x14,extraout_x15,extraout_x16,
               extraout_x17);
  FUN_00bd56a0(&uStack_f0,extraout_x1_00,param_2,param_2[8],uStack_110,uStack_108,uStack_100,
               uStack_f8);
  FUN_00bd5300(&uStack_110,extraout_x1_01,param_2 + 8);
  FUN_00bd5300(&lStack_150,extraout_x1_02,param_2 + 8,param_2[8],uStack_f0,uStack_e8,uStack_e0,
               uStack_d8);
  FUN_00bd5300(&uStack_110,extraout_x1_03,param_3 + 4,param_3[4],uStack_110,uStack_108,uStack_100,
               uStack_f8);
  FUN_00bd56a0(auStack_d0,extraout_x1_04,param_2 + 4);
  FUN_00bd54e0(&uStack_b0);
  FUN_00bd54e0(auStack_70);
  FUN_00bd5300(&uStack_90,extraout_x1_05,&uStack_f0,uStack_f0,uStack_b0,uStack_a8,uStack_a0,
               uStack_98);
  FUN_00bd5300(auStack_130,extraout_x1_06,param_2,*param_2,uStack_b0,uStack_a8,uStack_a0,uStack_98);
  FUN_00bd5650(extraout_x14_00,&uStack_b0);
  auVar15 = FUN_00bd56f0(&lStack_190,extraout_x1_07,auStack_70);
  FUN_00bd56a0(auVar15._0_8_,auVar15._8_8_,&uStack_90);
  FUN_00bd56f0(&lStack_170,extraout_x1_08,auStack_130,param_2[4],uStack_90,uStack_88,uStack_80,
               uStack_78);
  FUN_00bd5300(&uStack_110,extraout_x1_09,param_2 + 4);
  auVar15 = FUN_00bd5300(&lStack_170,extraout_x1_10,auStack_d0,auStack_d0[0],lStack_170,lStack_168,
                         lStack_160,lStack_158);
  FUN_00bd56a0(auVar15._0_8_,auVar15._8_8_,&uStack_110);
  if ((bVar5 && bVar6) && (bVar7 && bVar8)) {
    lStack_178 = param_3[3];
    lStack_180 = param_3[2];
    lStack_188 = param_3[1];
    lStack_190 = *param_3;
  }
  if (((bVar9 && bVar10) && (bVar11 && bVar12)) && (bVar13 && bVar14)) {
    lStack_188 = param_2[1];
    lStack_190 = *param_2;
  }
  lVar1 = param_3[4];
  lVar3 = param_3[5];
  if (((bVar9 && bVar10) && (bVar11 && bVar12)) && (bVar13 && bVar14)) {
    lStack_178 = param_2[3];
    lStack_180 = param_2[2];
  }
  lVar2 = param_3[6];
  lVar4 = param_3[7];
  *param_1 = lStack_190;
  param_1[1] = lStack_188;
  param_1[2] = lStack_180;
  param_1[3] = lStack_178;
  if ((bVar5 && bVar6) && (bVar7 && bVar8)) {
    lStack_158 = lVar4;
    lStack_160 = lVar2;
    lStack_168 = lVar3;
    lStack_170 = lVar1;
  }
  if (((bVar9 && bVar10) && (bVar11 && bVar12)) && (bVar13 && bVar14)) {
    lStack_168 = param_2[5];
    lStack_170 = param_2[4];
  }
  if (((bVar9 && bVar10) && (bVar11 && bVar12)) && (bVar13 && bVar14)) {
    lStack_158 = param_2[7];
    lStack_160 = param_2[6];
  }
  param_1[4] = lStack_170;
  param_1[5] = lStack_168;
  param_1[6] = lStack_160;
  param_1[7] = lStack_158;
  if ((bVar5 && bVar6) && (bVar7 && bVar8)) {
    lStack_138 = 0xfffffffe;
    lStack_140 = -1;
    lStack_148 = -0x100000000;
    lStack_150 = 1;
  }
  if (((bVar9 && bVar10) && (bVar11 && bVar12)) && (bVar13 && bVar14)) {
    lStack_138 = param_2[0xb];
    lStack_140 = param_2[10];
    lStack_148 = param_2[9];
    lStack_150 = param_2[8];
  }
  param_1[8] = lStack_150;
  param_1[9] = lStack_148;
  param_1[10] = lStack_140;
  param_1[0xb] = lStack_138;
  return;
}

