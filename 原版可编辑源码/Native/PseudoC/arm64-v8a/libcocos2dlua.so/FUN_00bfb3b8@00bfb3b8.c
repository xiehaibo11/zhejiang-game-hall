
void FUN_00bfb3b8(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_e0 = auStack_30;
  uStack_d8 = 0xffffff80ffffffd8;
  local_f0 = (undefined1 *)register0x00000008;
  puStack_e8 = (undefined1 *)register0x00000008;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  uVar1 = FUN_00c00864(param_1,PTR_s_not_enough_memory_01776bf0 + param_3,&local_f0);
                    /* WARNING: Subroutine does not return */
  FUN_00bfb23c(param_1,param_2,uVar1);
}

