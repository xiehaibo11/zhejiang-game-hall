
/* v8::internal::Assembler::msr(v8::internal::SystemRegister, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::msr(Assembler *this,int param_2,uint *param_3)

{
  Emit(this,*param_3 | param_2 << 5 | 0xd5100000);
  return;
}

