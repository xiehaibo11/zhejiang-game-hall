
/* v8::internal::Assembler::hint(v8::internal::SystemHint) */

void __thiscall v8::internal::Assembler::hint(Assembler *this,int param_2)

{
  Emit(this,param_2 << 5 | 0xd503201f);
  return;
}

