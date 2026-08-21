
/* v8::internal::MacroAssembler::InvokeFunction(v8::internal::Register, v8::internal::Register,
   v8::internal::Register, InvokeFlag) */

void __thiscall
v8::internal::MacroAssembler::InvokeFunction
          (MacroAssembler *this,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  long lVar1;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_d4 = 0xffffffff;
  local_cc = 2;
  local_c8 = 0xf;
  local_c0 = 0xffffffff00000000;
  uStack_b8 = 0xffffffff;
  local_e0 = param_2;
  local_d8 = param_3;
  AssemblerBase::RecordComment((AssemblerBase *)this,"[ DecompressTaggedPointer");
  local_b0 = 0x200000001b;
  local_a8 = 0;
  TurboAssembler::LoadStoreMacro((TurboAssembler *)this,&local_b0,&local_e0,0x80400000);
  local_88 = 0x13;
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_90 = 0;
  local_80 = 0x400000001b;
  uStack_70 = 0xffffffff;
  local_78 = 0;
  TurboAssembler::AddSubMacro((TurboAssembler *)this,&DAT_019f41bc,&DAT_019f4144,&local_b0,0,0);
  AssemblerBase::RecordComment((AssemblerBase *)this,"]");
  InvokeFunctionCode(this,param_2,param_3,0xffffffff,2,param_4,param_5);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

