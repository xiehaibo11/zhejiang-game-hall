
/* v8::internal::DeclarationScope::set_should_eager_compile() */

void __thiscall v8::internal::DeclarationScope::set_should_eager_compile(DeclarationScope *this)

{
  *(ushort *)(this + 0x83) =
       (*(ushort *)(this + 0x83) >> 1 & 0x40 | *(ushort *)(this + 0x83) & 0xffbf) ^ 0x40;
  return;
}

