
/* v8::internal::Assembler::blr(v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::blr(Assembler *this,Register *param_1)

{
  Emit(this,*(int *)param_1 << 5 | 0xd63f0000);
  return;
}

