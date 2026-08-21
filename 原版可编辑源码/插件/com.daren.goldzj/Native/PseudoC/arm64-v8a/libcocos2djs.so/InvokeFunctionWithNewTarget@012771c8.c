
/* v8::internal::MacroAssembler::InvokeFunctionWithNewTarget(v8::internal::Register,
   v8::internal::Register, v8::internal::Register, InvokeFlag) */

void __thiscall
v8::internal::MacroAssembler::InvokeFunctionWithNewTarget
          (MacroAssembler *this,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  long lVar1;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined4 local_d0;
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
  local_d8 = 0x4000000002;
  local_d0 = 0;
  local_fc = 0xffffffff;
  local_f4 = 2;
  local_f0 = 0xf;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff;
  local_108 = param_2;
  local_100 = param_3;
  AssemblerBase::RecordComment((AssemblerBase *)this,"[ DecompressTaggedPointer");
  local_c8 = 0x200000001b;
  local_c0 = 0;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_c8,&local_108,0x80400000);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0._0_1_ = 0x13;
  local_98 = 0x400000001b;
  uStack_88 = 0xffffffff;
  local_90 = 0;
  TurboAssembler::AddSubMacro((TurboAssembler *)this,&DAT_019f41bc,&DAT_019f4144,&local_c8,0,0);
  AssemblerBase::RecordComment((AssemblerBase *)this,"]");
  local_fc = 0xffffffff;
  local_f4 = 2;
  local_f0 = 0xb;
  local_e8 = 0xffffffff00000000;
  uStack_e0 = 0xffffffff;
  local_108 = param_2;
  local_100 = param_3;
  AssemblerBase::RecordComment((AssemblerBase *)this,"[ DecompressTaggedPointer");
  local_c8 = 0x2000000002;
  local_c0 = 0;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_c8,&local_108,0x80400000);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_c0 = local_c0 & 0xffffff00;
  local_a8 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,0x13);
  local_98 = 0x4000000002;
  uStack_88 = 0xffffffff;
  local_90 = 0;
  TurboAssembler::AddSubMacro((TurboAssembler *)this,&local_d8,&DAT_019f4144,&local_c8,0,0);
  AssemblerBase::RecordComment((AssemblerBase *)this,"]");
  local_bc = 0xffffffff;
  local_b4 = 2;
  local_b0 = 0x15;
  local_c8 = local_d8;
  local_c0 = local_d0;
  local_a8 = 0xffffffff00000000;
  local_a0 = 0xffffffff;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_d8,&local_c8,0x40400000);
  InvokeFunctionCode(this,param_2,param_3,param_4,param_5,local_d8,local_d0);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

