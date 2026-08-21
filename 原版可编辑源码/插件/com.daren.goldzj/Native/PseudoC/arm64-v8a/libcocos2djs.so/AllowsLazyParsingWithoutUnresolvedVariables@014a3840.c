
/* v8::internal::Scope::AllowsLazyParsingWithoutUnresolvedVariables(v8::internal::Scope const*)
   const */

bool __thiscall
v8::internal::Scope::AllowsLazyParsingWithoutUnresolvedVariables(Scope *this,Scope *param_1)

{
  Scope SVar1;
  
  while( true ) {
    if (this == param_1) {
      return true;
    }
    SVar1 = this[0x80];
    if ((SVar1 != (Scope)0x5) && (SVar1 != (Scope)0x7)) break;
    this = *(Scope **)(this + 8);
  }
  if (SVar1 != (Scope)0x1) {
    return false;
  }
  return ((byte)this[0x81] & 1) == 0;
}

