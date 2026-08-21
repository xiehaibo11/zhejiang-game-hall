
/* v8::internal::Assembler::cinv(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Condition) */

void __thiscall
v8::internal::Assembler::cinv(Assembler *this,ulong *param_1,int *param_2,int param_4)

{
  Emit(this,(param_4 << 0xc | 0x5a800000U) ^ 0x1000 | (uint)*param_1 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x1f | *param_2 << 0x10 | *param_2 << 5);
  return;
}

