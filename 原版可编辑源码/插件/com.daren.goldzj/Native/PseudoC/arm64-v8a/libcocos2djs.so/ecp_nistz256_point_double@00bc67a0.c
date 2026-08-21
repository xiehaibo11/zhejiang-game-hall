
void ecp_nistz256_point_double(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar1;
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  undefined8 extraout_x14_01;
  undefined8 extraout_x14_02;
  undefined8 extraout_x15;
  undefined8 extraout_x16;
  undefined8 extraout_x17;
  undefined1 auVar2 [16];
  undefined1 local_d0 [32];
  undefined8 local_b0 [4];
  undefined1 local_90 [32];
  undefined1 auStack_70 [32];
  
  FUN_00bc6650(param_2[4],local_d0);
  FUN_00bc64e0(local_90);
  FUN_00bc6650(*param_2,local_b0);
  FUN_00bc66f0(local_90,extraout_x1,param_2);
  FUN_00bc64e0(local_d0);
  FUN_00bc6300(auStack_70,extraout_x1_00,param_2 + 4,param_2[4],param_2[8],param_2[9],param_2[10],
               param_2[0xb]);
  FUN_00bc6650(extraout_x14,param_1 + 0x40);
  FUN_00bc64e0(auStack_70);
  FUN_00bc6740(param_1 + 0x20);
  FUN_00bc6300(local_b0,extraout_x1_01,local_90);
  uVar1 = extraout_x14_00;
  FUN_00bc6650(extraout_x14_00,local_b0);
  FUN_00bc6650(uVar1);
  FUN_00bc6300(local_d0,extraout_x1_02,param_2);
  FUN_00bc6650(extraout_x14_01,auStack_70);
  auVar2 = FUN_00bc64e0(param_1);
  FUN_00bc66a0(auVar2._0_8_,auVar2._8_8_,auStack_70);
  auVar2 = FUN_00bc66f0(local_d0,extraout_x1_03,local_d0);
  FUN_00bc6300(auVar2._0_8_,auVar2._8_8_,local_b0,local_b0[0],extraout_x14_02,extraout_x15,
               extraout_x16,extraout_x17);
  FUN_00bc66a0(param_1 + 0x20,extraout_x1_04,param_1 + 0x20);
  return;
}

