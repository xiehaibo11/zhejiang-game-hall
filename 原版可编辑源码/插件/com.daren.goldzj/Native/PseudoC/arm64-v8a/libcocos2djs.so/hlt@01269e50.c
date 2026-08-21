
/* v8::internal::Assembler::hlt(int) */

void __thiscall v8::internal::Assembler::hlt(Assembler *this,int param_1)

{
  Emit(this,param_1 << 5 | 0xd4400000);
  return;
}

