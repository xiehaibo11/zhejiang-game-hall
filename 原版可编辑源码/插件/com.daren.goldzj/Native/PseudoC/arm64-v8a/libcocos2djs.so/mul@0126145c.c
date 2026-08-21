
/* v8::internal::Assembler::mul(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&) */

void __thiscall
v8::internal::Assembler::mul(Assembler *this,Register *param_1,Register *param_2,Register *param_3)

{
  Emit(this,(uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
            *(int *)param_3 << 0x10 | *(int *)param_2 << 5 | 0x1b007c00);
  return;
}

