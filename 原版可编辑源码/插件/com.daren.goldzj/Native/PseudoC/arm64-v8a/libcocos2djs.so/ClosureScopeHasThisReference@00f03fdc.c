
/* v8::internal::ScopeIterator::ClosureScopeHasThisReference() const */

undefined8 __thiscall v8::internal::ScopeIterator::ClosureScopeHasThisReference(ScopeIterator *this)

{
  undefined8 uVar1;
  
  if (((byte)(*(Scope **)(this + 0x40))[0x84] >> 4 & 1) == 0) {
    uVar1 = Scope::HasThisReference(*(Scope **)(this + 0x40));
    return uVar1;
  }
  return 0;
}

