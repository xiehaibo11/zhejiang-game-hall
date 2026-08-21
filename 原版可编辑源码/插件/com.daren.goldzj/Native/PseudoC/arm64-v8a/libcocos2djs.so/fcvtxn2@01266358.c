
/* v8::internal::Assembler::fcvtxn2(v8::internal::VRegister const&, v8::internal::VRegister const&)
    */

void __thiscall
v8::internal::Assembler::fcvtxn2(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  Emit(this,*(uint *)param_1 | *(int *)param_2 << 5 | 0x6e616800);
  return;
}

