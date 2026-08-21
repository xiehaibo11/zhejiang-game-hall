
/* v8::internal::MacroAssembler::AssertNotSmi(v8::internal::Register, v8::internal::AbortReason) */

void v8::internal::MacroAssembler::AssertNotSmi
               (Label *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong local_90;
  undefined4 local_88;
  ulong local_80;
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_90 = param_2;
  local_88 = param_3;
  if (param_1[0xc0] != (Label)0x0) {
    local_60 = 1;
    local_58 = 0x13;
    local_50 = 0xffffffff;
    puVar1 = &DAT_019f4018;
    if (param_2 >> 0x20 != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_80 = local_80 & 0xffffffffffffff00;
    local_78 = 0;
    local_48 = 2;
    TurboAssembler::LogicalMacro((TurboAssembler *)param_1,puVar1,&local_90,&local_80,0x60000000);
    local_80 = 0;
    TurboAssembler::B((TurboAssembler *)param_1,&local_80,1);
    TurboAssembler::Abort((TurboAssembler *)param_1,param_4);
    Assembler::bind(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

