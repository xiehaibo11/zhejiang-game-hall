
/* v8::internal::Assembler::stlrb(v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::stlrb(Assembler *this,Register *param_1,Register *param_2)

{
  Emit(this,(*(uint *)param_2 & 0x1f) << 5 | *(uint *)param_1 | 0x89ffc00);
  return;
}

