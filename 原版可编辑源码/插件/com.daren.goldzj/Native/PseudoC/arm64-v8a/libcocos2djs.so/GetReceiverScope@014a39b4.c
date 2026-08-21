
/* v8::internal::Scope::GetReceiverScope() */

void __thiscall v8::internal::Scope::GetReceiverScope(Scope *this)

{
  if (((byte)this[0x82] & 1) != 0) goto LAB_014a39c8;
  do {
    do {
      this = *(Scope **)(this + 8);
    } while (((byte)this[0x82] & 1) == 0);
LAB_014a39c8:
  } while ((this[0x80] != (Scope)0x4) && (((byte)this[0x84] >> 4 & 1) == 0));
  return;
}

