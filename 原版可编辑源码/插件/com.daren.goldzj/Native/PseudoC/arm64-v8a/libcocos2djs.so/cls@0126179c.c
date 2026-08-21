
/* v8::internal::Assembler::cls(v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::cls(Assembler *this,Register *param_1,Register *param_2)

{
  Emit(this,*(uint *)param_1 | (int)*(ulong *)param_2 << 5 |
            (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x1f | 0x5ac01400);
  return;
}

