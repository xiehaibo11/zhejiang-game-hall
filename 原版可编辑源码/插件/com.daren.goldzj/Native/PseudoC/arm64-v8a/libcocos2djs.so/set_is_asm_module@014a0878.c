
/* v8::internal::DeclarationScope::set_is_asm_module() */

void __thiscall v8::internal::DeclarationScope::set_is_asm_module(DeclarationScope *this)

{
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 2;
  return;
}

