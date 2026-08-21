
/* v8::internal::Assembler::br(v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::br(Assembler *this,Register *param_1)

{
  Emit(this,*(int *)param_1 << 5 | 0xd61f0000);
  return;
}

