
undefined4
lua_loadx(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_b0 [64];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_30;
  undefined8 local_28;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_0140fd20;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  local_30 = param_4;
  local_28 = param_5;
  uVar1 = FUN_00c17684(param_1,0,auStack_b0,FUN_00c0df20);
  FUN_00c063d4(param_1,auStack_b0);
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80(param_1);
    return uVar1;
  }
  return uVar1;
}

