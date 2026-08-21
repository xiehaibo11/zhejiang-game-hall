
/* v8::internal::Assembler::csel(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&, v8::internal::Condition) */

void __thiscall
v8::internal::Assembler::csel(Assembler *this,ulong *param_1,int *param_2,int *param_3,int param_5)

{
  Emit(this,(uint)*param_1 | param_5 << 0xc | (uint)(*param_1 >> 0x20 == 0x40) << 0x1f |
            *param_3 << 0x10 | *param_2 << 5 | 0x1a800000);
  return;
}

