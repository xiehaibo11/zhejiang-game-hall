
/* v8::internal::DebugCodegen::GenerateFrameDropperTrampoline(v8::internal::MacroAssembler*) */

void v8::internal::DebugCodegen::GenerateFrameDropperTrampoline(MacroAssembler *param_1)

{
  long lVar1;
  ulong local_c0;
  uint local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_b8 = local_b8 & 0xffffff00;
  local_a0 = 0;
  local_98 = CONCAT71(local_98._1_7_,0x13);
  local_90 = 0x4000000001;
  uStack_80 = 0xffffffff;
  local_88 = 0;
  TurboAssembler::Mov((TurboAssembler *)param_1,&DAT_019f4210,&local_c0,0);
  local_b8 = 0;
  local_c0 = 0x400000001d;
  local_a8 = 0xfffffffffffffff0;
  local_b4 = 0xffffffff;
  local_ac = 2;
  local_a0 = 0xffffffff00000000;
  local_98 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&DAT_019f421c,&local_c0,0xc0400000);
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_b8 = local_b8 & 0xffffff00;
  local_a0 = 0;
  local_98 = CONCAT71(local_98._1_7_,0x13);
  local_90 = 0x400000001d;
  uStack_80 = 0xffffffff;
  local_88 = 0;
  TurboAssembler::Mov((TurboAssembler *)param_1,&DAT_019f4228,&local_c0,0);
  TurboAssembler::Pop((TurboAssembler *)param_1,(CPURegister *)&DAT_019f4210,
                      (CPURegister *)&DAT_019f4204,(CPURegister *)&DAT_019f4234,
                      (CPURegister *)&DAT_019f4234);
  local_c0 = 0x4000000001;
  local_b8 = 0;
  local_b4 = 0xffffffff;
  local_ac = 2;
  local_a8 = 0xb;
  local_a0 = 0xffffffff00000000;
  local_98 = 0xffffffff;
  TurboAssembler::LoadTaggedPointerField
            ((TurboAssembler *)param_1,(Register *)&DAT_019f4240,(MemOperand *)&local_c0);
  local_b8 = 0;
  local_b4 = 0xffffffff;
  local_ac = 2;
  local_c0 = 0x4000000000;
  local_a8 = 0x15;
  local_a0 = 0xffffffff00000000;
  local_98 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)param_1,&DAT_019f4240,&local_c0,0x40400000);
  Assembler::mov((Assembler *)param_1,(Register *)&DAT_019f424c,(Register *)&DAT_019f4240);
  MacroAssembler::InvokeFunctionWithNewTarget
            (param_1,0x4000000001,0,0x4000000003,0,0x4000000000,0,1);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

