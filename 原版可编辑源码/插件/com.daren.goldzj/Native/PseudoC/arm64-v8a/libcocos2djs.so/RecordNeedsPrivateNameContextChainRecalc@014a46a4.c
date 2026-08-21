
/* v8::internal::DeclarationScope::RecordNeedsPrivateNameContextChainRecalc() */

void __thiscall
v8::internal::DeclarationScope::RecordNeedsPrivateNameContextChainRecalc(DeclarationScope *this)

{
  while ((this != (DeclarationScope *)0x0 && ((*(ushort *)(this + 0x83) >> 0xd & 1) == 0))) {
    *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 0x2000;
    this = *(DeclarationScope **)(this + 8);
    if (this == (DeclarationScope *)0x0) {
      return;
    }
    for (; ((((byte)this[0x82] & 1) == 0 || (this[0x80] == (DeclarationScope)0x6)) ||
           (this[0x80] == (DeclarationScope)0x0)); this = *(DeclarationScope **)(this + 8)) {
    }
  }
  return;
}

