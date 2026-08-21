
void FUN_00a241ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long local_38;
  long lStack_30;
  long local_28;
  
  puStack_50 = auStack_b0;
  puStack_58 = &stack0xffffffffffffff80;
  uStack_48 = 0xffffff80ffffffd8;
  lStack_30 = 0;
  local_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  local_38 = param_1;
  local_28 = param_2;
  iVar1 = FUN_00a22dfc(&local_38,FUN_00a24178,param_3,&local_60);
  if ((iVar1 != -1) && (local_28 != 0)) {
    *(undefined1 *)(local_38 - (ulong)(local_28 == lStack_30)) = 0;
  }
  return;
}

