
/* v8::internal::Assembler::fcsel(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::Condition) */

void __thiscall
v8::internal::Assembler::fcsel(Assembler *this,ulong *param_1,int *param_2,int *param_3,int param_5)

{
  Emit(this,(uint)*param_1 | param_5 << 0xc | *param_3 << 0x10 |
            (uint)(*param_1 >> 0x20 == 0x40) << 0x16 | *param_2 << 5 | 0x1e200c00);
  return;
}

