
/* v8::internal::Assembler::fmov(v8::internal::VRegister const&, int, v8::internal::Register const&)
    */

void __thiscall
v8::internal::Assembler::fmov(Assembler *this,VRegister *param_1,int param_2,Register *param_3)

{
  Emit(this,*(uint *)param_1 | *(int *)param_3 << 5 | 0x9eaf0000);
  return;
}

