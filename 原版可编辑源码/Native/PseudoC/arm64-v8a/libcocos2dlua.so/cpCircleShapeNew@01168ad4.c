
undefined8 *
cpCircleShapeNew(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = calloc(1,0xa0);
  *(undefined4 *)(puVar1 + 0x11) = param_2;
  *(undefined4 *)((long)puVar1 + 0x8c) = param_3;
  *(int *)(puVar1 + 0x13) = param_1._0_4_;
  uVar2 = cpMomentForCircle(0x3f800000,0,param_1._0_8_,0,0);
  uVar3 = cpAreaForCircle(0,param_1._0_8_);
  puVar1[2] = param_4;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar2;
  *(undefined4 *)(puVar1 + 4) = param_2;
  *(undefined4 *)((long)puVar1 + 0x24) = param_3;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *puVar1 = &DAT_0172d1b8;
  puVar1[0xd] = 0xffffffffffffffff;
  return puVar1;
}

