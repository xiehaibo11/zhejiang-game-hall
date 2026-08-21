
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfaf60(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                 undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [512];
  undefined8 local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_00bfcd70(auStack_208,param_2,param_4 & 0xffffffff);
  local_230 = *param_6;
  uStack_228 = param_6[1];
  local_220 = param_6[2];
  uStack_218 = param_6[3];
  uVar1 = FUN_00c00864(param_1,PTR_s_not_enough_memory_01776bf0 + param_5,&local_230);
  uVar1 = FUN_00c00c18(param_1,"%s:%d: %s",auStack_208,param_4,uVar1);
  if (param_3 != 0) {
    FUN_00c00c18(param_1,PTR_s_not_enough_memory_01776bf0 + 0x83d,uVar1,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfa980(param_1,3);
}

