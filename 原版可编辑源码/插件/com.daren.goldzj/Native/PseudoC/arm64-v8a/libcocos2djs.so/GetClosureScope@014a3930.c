
/* v8::internal::Scope::GetClosureScope() const */

void __thiscall v8::internal::Scope::GetClosureScope(Scope *this)

{
  if (((byte)this[0x82] & 1) != 0) goto LAB_014a3944;
  do {
    do {
      this = *(Scope **)(this + 8);
    } while (((byte)this[0x82] & 1) == 0);
LAB_014a3944:
  } while ((this[0x80] == (Scope)0x6) || (this[0x80] == (Scope)0x0));
  return;
}

