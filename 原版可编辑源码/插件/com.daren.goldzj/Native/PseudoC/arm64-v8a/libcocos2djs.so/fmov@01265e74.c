
/* v8::internal::Assembler::fmov(v8::internal::Register const&, v8::internal::VRegister const&, int)
    */

void v8::internal::Assembler::fmov(Register *param_1,VRegister *param_2,int param_3)

{
  Emit((Assembler *)param_1,*(uint *)param_2 | *(int *)(ulong)(uint)param_3 << 5 | 0x9eae0000);
  return;
}

