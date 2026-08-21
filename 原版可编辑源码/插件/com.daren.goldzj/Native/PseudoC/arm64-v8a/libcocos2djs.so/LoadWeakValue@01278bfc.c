
/* v8::internal::MacroAssembler::LoadWeakValue(v8::internal::Register, v8::internal::Register,
   v8::internal::Label*) */

void v8::internal::MacroAssembler::LoadWeakValue
               (Register *param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
               undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  ulong local_c0;
  undefined4 local_b8;
  ulong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90 [8];
  undefined1 local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_c0 = 0x200000003f;
  if ((int)param_4 != 0x3f) {
    local_c0 = param_4 & 0xffffffff | 0x2000000000;
  }
  local_48 = *(long *)(lVar1 + 0x28);
  local_b8 = 0;
  local_90[0] = 0;
  local_88 = 0;
  local_70 = 3;
  local_68 = 0x13;
  local_60 = 0xffffffff;
  local_58 = 2;
  local_b0 = param_4;
  local_a8 = param_5;
  local_a0 = param_2;
  local_98 = param_3;
  TurboAssembler::CompareAndBranch((TurboAssembler *)param_1,&local_c0,local_90,0,param_6);
  local_90[0] = 0;
  local_88 = 0;
  local_68 = 0x13;
  local_60 = 0xffffffff;
  local_70 = 0xfffffffffffffffd;
  local_58 = 2;
  Assembler::and_(param_1,(Register *)&local_a0,(Operand *)&local_b0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

