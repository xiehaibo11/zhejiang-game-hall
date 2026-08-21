
/* v8::internal::MacroAssembler::PushCalleeSavedRegisters() */

void __thiscall v8::internal::MacroAssembler::PushCalleeSavedRegisters(MacroAssembler *this)

{
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  Assembler *local_30;
  BlockScope aBStack_28 [8];
  
  local_30 = (Assembler *)this;
  ConstantPool::BlockScope::BlockScope(aBStack_28,(Assembler *)this,0);
  Assembler::CheckVeneerPool(local_30,false,true,0);
  Assembler::StartBlockVeneerPool(local_30);
  local_60 = 0x400000003f;
  local_48 = 0xfffffffffffffff0;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_4c = 2;
  local_40 = 0xffffffff00000001;
  uStack_38 = 0xffffffff;
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4024,(CPURegister *)&DAT_019f4034,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4044,(CPURegister *)&DAT_019f4054,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4064,(CPURegister *)&DAT_019f4074,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4084,(CPURegister *)&DAT_019f4094,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f40a4,(CPURegister *)&DAT_019f40b0,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f40bc,(CPURegister *)&DAT_019f40c8,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f40d4,(CPURegister *)&DAT_019f40e0,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f40ec,(CPURegister *)&DAT_019f40f8,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f4104,(CPURegister *)&DAT_019f4110,
                 (MemOperand *)&local_60);
  Assembler::stp((Assembler *)this,(CPURegister *)&DAT_019f411c,(CPURegister *)&DAT_019f4128,
                 (MemOperand *)&local_60);
  Assembler::EndBlockVeneerPool(local_30);
  ConstantPool::BlockScope::~BlockScope(aBStack_28);
  return;
}

