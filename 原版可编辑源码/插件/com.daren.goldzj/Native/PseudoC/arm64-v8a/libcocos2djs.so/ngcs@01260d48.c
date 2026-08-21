
/* v8::internal::Assembler::ngcs(v8::internal::Register const&, v8::internal::Operand const&) */

void __thiscall v8::internal::Assembler::ngcs(Assembler *this,Register *param_1,Operand *param_2)

{
  Emit(this,(uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
            *(int *)(param_2 + 0x30) << 0x10 | 0x7a0003e0);
  return;
}

