
/* v8::internal::Assembler::ret(v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::ret(Assembler *this,Register *param_1)

{
  Emit(this,*(int *)param_1 << 5 | 0xd65f0000);
  return;
}

