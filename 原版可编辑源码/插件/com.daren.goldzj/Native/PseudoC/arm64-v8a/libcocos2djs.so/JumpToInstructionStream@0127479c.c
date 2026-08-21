
/* v8::internal::MacroAssembler::JumpToInstructionStream(unsigned long) */

void __thiscall
v8::internal::MacroAssembler::JumpToInstructionStream(MacroAssembler *this,ulong param_1)

{
  long lVar1;
  Operand local_80 [8];
  undefined1 local_78;
  ulong local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 10;
  local_80[0] = (Operand)0x0;
  local_78 = 0;
  local_50 = 0xffffffff;
  local_48 = 2;
  local_60 = param_1;
  Assembler::ldr((Assembler *)this,(CPURegister *)&DAT_019f4168,local_80);
  Assembler::br((Assembler *)this,(Register *)&DAT_019f4168);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

