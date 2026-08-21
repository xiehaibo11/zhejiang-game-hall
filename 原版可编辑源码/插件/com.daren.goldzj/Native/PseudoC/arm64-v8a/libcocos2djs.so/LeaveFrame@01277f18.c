
/* v8::internal::TurboAssembler::LeaveFrame(v8::internal::StackFrame::Type) */

void v8::internal::TurboAssembler::LeaveFrame(Assembler *param_1)

{
  long lVar1;
  BlockScope aBStack_88 [8];
  ulong local_80;
  uint local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = local_80 & 0xffffffffffffff00;
  local_78 = local_78 & 0xffffff00;
  local_60 = 0;
  local_58 = CONCAT71(local_58._1_7_,0x13);
  local_50 = 0x400000001d;
  uStack_40 = 0xffffffff;
  local_48 = 0;
  Mov((TurboAssembler *)param_1,&DAT_019f3ff4,&local_80,0);
  ConstantPool::BlockScope::BlockScope(aBStack_88,param_1,0);
  Assembler::CheckVeneerPool(param_1,false,true,0);
  Assembler::StartBlockVeneerPool(param_1);
  local_68 = 0x10;
  local_80 = 0x400000003f;
  local_78 = 0;
  local_74 = 0xffffffff;
  local_6c = 2;
  local_60 = 0xffffffff00000002;
  local_58 = 0xffffffff;
  Assembler::ldp(param_1,(CPURegister *)&DAT_019f418c,(CPURegister *)&DAT_019f4198,
                 (MemOperand *)&local_80);
  Assembler::EndBlockVeneerPool(param_1);
  ConstantPool::BlockScope::~BlockScope(aBStack_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

