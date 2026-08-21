
/* v8::internal::Assembler::msub(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall
v8::internal::Assembler::msub
          (Assembler *this,Register *param_1,Register *param_2,Register *param_3,Register *param_4)

{
  Emit(this,(uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
            *(int *)param_3 << 0x10 | *(int *)param_4 << 10 | *(int *)param_2 << 5 | 0x1b008000);
  return;
}

