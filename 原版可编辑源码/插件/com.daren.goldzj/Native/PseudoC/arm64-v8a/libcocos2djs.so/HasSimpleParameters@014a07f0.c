
/* v8::internal::Scope::HasSimpleParameters() */

byte __thiscall v8::internal::Scope::HasSimpleParameters(Scope *this)

{
  Scope SVar1;
  
  if (((byte)this[0x82] & 1) != 0) goto LAB_014a0804;
  do {
    do {
      this = *(Scope **)(this + 8);
    } while (((byte)this[0x82] & 1) == 0);
LAB_014a0804:
    SVar1 = this[0x80];
  } while ((SVar1 == (Scope)0x0) || (SVar1 == (Scope)0x6));
  if (SVar1 == (Scope)0x2) {
    return (byte)this[0x83] & 1;
  }
  return 1;
}

