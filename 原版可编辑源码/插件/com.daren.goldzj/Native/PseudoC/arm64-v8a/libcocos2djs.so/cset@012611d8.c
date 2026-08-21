
/* v8::internal::Assembler::cset(v8::internal::Register const&, v8::internal::Condition) */

void __thiscall v8::internal::Assembler::cset(Assembler *this,ulong *param_1,int param_3)

{
  Emit(this,(param_3 << 0xc | 0x1a9f07e0U) ^ 0x1000 | (uint)*param_1 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f);
  return;
}

