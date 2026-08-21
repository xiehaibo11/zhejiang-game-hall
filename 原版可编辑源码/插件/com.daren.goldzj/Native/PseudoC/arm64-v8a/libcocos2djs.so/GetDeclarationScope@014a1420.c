
/* v8::internal::Scope::GetDeclarationScope() */

void __thiscall v8::internal::Scope::GetDeclarationScope(Scope *this)

{
  Scope SVar1;
  
  SVar1 = this[0x82];
  while (((byte)SVar1 & 1) == 0) {
    this = *(Scope **)(this + 8);
    SVar1 = this[0x82];
  }
  return;
}

