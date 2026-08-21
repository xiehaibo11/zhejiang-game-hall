
/* v8::internal::TurboAssembler::CopySlots(v8::internal::Register, v8::internal::Register,
   v8::internal::Register) */

void v8::internal::TurboAssembler::CopySlots
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_c0[0] = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0x13;
  local_84 = 0xffffffff00000000;
  local_7c = 3;
  local_d0 = param_2;
  local_c8 = param_3;
  local_90 = param_2;
  local_88 = param_3;
  AddSubMacro(param_1,&local_d0,&DAT_019f3ff4,local_c0,0,0);
  local_c0[0] = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0x13;
  local_84 = 0xffffffff00000000;
  local_7c = 3;
  local_d0 = param_4;
  local_c8 = param_5;
  local_90 = param_4;
  local_88 = param_5;
  AddSubMacro(param_1,&local_d0,&DAT_019f3ff4,local_c0,0,0);
  CopyDoubleWords(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

