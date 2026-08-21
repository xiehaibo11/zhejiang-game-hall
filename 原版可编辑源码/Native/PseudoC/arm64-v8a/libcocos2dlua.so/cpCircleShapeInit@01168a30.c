
undefined8 *
cpCircleShapeInit(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_4 + 0x11) = param_2;
  *(undefined4 *)((long)param_4 + 0x8c) = param_3;
  *(int *)(param_4 + 0x13) = param_1._0_4_;
  uVar1 = cpMomentForCircle(0x3f800000,0,param_1._0_8_,0,0);
  uVar2 = cpAreaForCircle(0,param_1._0_8_);
  param_4[1] = 0;
  param_4[2] = param_5;
  *(undefined4 *)(param_4 + 3) = 0;
  *(undefined4 *)((long)param_4 + 0x1c) = uVar1;
  *(undefined4 *)(param_4 + 4) = param_2;
  *(undefined4 *)((long)param_4 + 0x24) = param_3;
  *(undefined4 *)(param_4 + 5) = uVar2;
  *(undefined1 *)((long)param_4 + 0x3c) = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0xffffffffffffffff;
  *param_4 = &DAT_0172d1b8;
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  return param_4;
}

