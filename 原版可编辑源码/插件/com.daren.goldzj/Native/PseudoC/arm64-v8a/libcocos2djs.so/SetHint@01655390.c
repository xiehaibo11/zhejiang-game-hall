
/* v8::internal::compiler::UsePosition::SetHint(v8::internal::compiler::UsePosition*) */

void __thiscall v8::internal::compiler::UsePosition::SetHint(UsePosition *this,UsePosition *param_1)

{
  *(UsePosition **)(this + 8) = param_1;
  *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xffffffe3 | 8;
  return;
}

