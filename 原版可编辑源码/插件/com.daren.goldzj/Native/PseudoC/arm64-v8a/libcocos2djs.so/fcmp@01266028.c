
/* v8::internal::Assembler::fcmp(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall v8::internal::Assembler::fcmp(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  Emit(this,(int)*(ulong *)param_1 << 5 | *(int *)param_2 << 0x10 |
            (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x16 | 0x1e202000);
  return;
}

