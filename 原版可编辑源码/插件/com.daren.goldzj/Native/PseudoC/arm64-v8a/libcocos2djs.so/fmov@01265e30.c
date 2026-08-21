
/* v8::internal::Assembler::fmov(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall v8::internal::Assembler::fmov(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  Emit(this,(uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x16 |
            *(int *)param_2 << 5 | 0x1e204000);
  return;
}

