
void FUN_00bfae80(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_e0 = &local_30;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar1 + 10) == '\0') {
    *(ulong *)(param_1 + 0x28) =
         *(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar1 + 0x20) + -0x5d) * 8;
  }
  uStack_d8 = 0xffffff80ffffffd0;
  local_f0 = (undefined1 *)register0x00000008;
  puStack_e8 = (undefined1 *)register0x00000008;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  uVar2 = FUN_00c00864(param_1,PTR_s_not_enough_memory_01776bf0 + param_2,&local_f0);
  FUN_00bfcf20(param_1,uVar2,*(long *)(param_1 + 0x20) + -8,0);
  FUN_00bfacdc(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00bfae80();
}

