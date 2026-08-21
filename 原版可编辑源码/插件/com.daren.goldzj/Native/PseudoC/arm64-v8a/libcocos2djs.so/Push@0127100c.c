
/* v8::internal::TurboAssembler::Push(v8::internal::Register const&, v8::internal::VRegister const&)
    */

void __thiscall
v8::internal::TurboAssembler::Push(TurboAssembler *this,Register *param_1,VRegister *param_2)

{
  Assembler::str((CPURegister *)this,(MemOperand *)param_2);
  Assembler::str((CPURegister *)this,(MemOperand *)param_1);
  return;
}

