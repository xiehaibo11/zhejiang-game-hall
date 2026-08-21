
/* v8::internal::MacroAssembler::InvokeFunctionCode(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, v8::internal::Register, InvokeFlag) */

void v8::internal::MacroAssembler::InvokeFunctionCode
               (TurboAssembler *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,int param_11)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  uint local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = ExternalReference::debug_hook_on_function_call_address(*(Isolate **)(param_1 + 0x178));
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a0 = CONCAT71(local_a0._1_7_,7);
  local_98 = 0xffffffff;
  local_90 = CONCAT44(local_90._4_4_,2);
  TurboAssembler::Mov(param_1,&DAT_019f4174,&local_c8,0);
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0;
  local_c8 = 0x4000000004;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(param_1,&DAT_019f4174,&local_c8,0x800000);
  TurboAssembler::Cbnz(param_1,(Register *)&DAT_019f4174,(Label *)&uStack_d0);
  Assembler::bind((Label *)param_1);
  if ((int)param_4 == -1) {
    (**(code **)(*(long *)param_1 + 0x58))(param_1,0x4000000003,0,4);
  }
  local_e0 = 0;
  InvokePrologue(param_1,param_6,param_7,param_9,param_10,&local_e0,param_11);
  local_114 = 0xffffffff;
  local_10c = 2;
  local_108 = 0x17;
  local_f0 = 0x4000000002;
  local_e8 = 0;
  local_100 = 0xffffffff00000000;
  uStack_f8 = 0xffffffff;
  local_120 = param_2;
  local_118 = param_3;
  AssemblerBase::RecordComment((AssemblerBase *)param_1,"[ DecompressTaggedPointer");
  local_c8 = 0x2000000002;
  local_c0 = 0;
  TurboAssembler::LoadStoreMacro(param_1,&local_c8,&local_120,0x80400000);
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_98 = 0x4000000002;
  uStack_88 = 0xffffffff;
  local_90 = 0;
  TurboAssembler::AddSubMacro(param_1,&local_f0,&DAT_019f4144,&local_c8,0,0);
  AssemblerBase::RecordComment((AssemblerBase *)param_1,"]");
  if (param_11 == 0) {
    pcVar2 = *(code **)(*(long *)param_1 + 0x28);
  }
  else {
    pcVar2 = *(code **)(*(long *)param_1 + 0x30);
  }
  (*pcVar2)(param_1,local_f0,local_e8);
  Assembler::b((Assembler *)param_1,(Label *)&local_e0);
  Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
  Assembler::bind((Label *)param_1);
  CallDebugOnFunctionCall
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  Assembler::b((Assembler *)param_1,(Label *)&local_d8);
  Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
  Assembler::bind((Label *)param_1);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

