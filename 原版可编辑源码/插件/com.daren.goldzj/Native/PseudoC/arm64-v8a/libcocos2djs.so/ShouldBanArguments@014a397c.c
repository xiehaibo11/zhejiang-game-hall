
/* v8::internal::Scope::ShouldBanArguments() */

bool __thiscall v8::internal::Scope::ShouldBanArguments(Scope *this)

{
  if (((byte)this[0x82] & 1) != 0) goto LAB_014a3990;
  do {
    do {
      this = *(Scope **)(this + 8);
    } while (((byte)this[0x82] & 1) == 0);
LAB_014a3990:
  } while ((this[0x80] != (Scope)0x4) && (((byte)this[0x84] >> 4 & 1) == 0));
  return this[0x85] == (Scope)0x12;
}

