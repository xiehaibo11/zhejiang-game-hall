
/* v8::internal::Assembler::adc(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Operand const&) */

void __thiscall
v8::internal::Assembler::adc(Assembler *this,Register *param_1,Register *param_2,Operand *param_3)

{
  Emit(this,(uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
            *(int *)(param_3 + 0x30) << 0x10 | *(int *)param_2 << 5 | 0x1a000000);
  return;
}

