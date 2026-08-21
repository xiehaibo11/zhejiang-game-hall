
/* v8::internal::Assembler::fcvtmu(v8::internal::Register const&, v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::fcvtmu(Assembler *this,Register *param_1,VRegister *param_2)

{
  Emit(this,(uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
            (int)*(ulong *)param_2 << 5 | (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x16 |
            0x1e310000);
  return;
}

