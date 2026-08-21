
/* v8::internal::TranslatedValue::GetValue() */

undefined8 __thiscall v8::internal::TranslatedValue::GetValue(TranslatedValue *this)

{
  TranslatedValue TVar1;
  undefined8 uVar2;
  
  if (this[1] != (TranslatedValue)0x2) {
    TVar1 = *this;
    if (6 < (byte)TVar1 - 1) {
      if ((byte)TVar1 - 8 < 2) {
        TranslatedState::EnsureObjectAllocatedAt(*(TranslatedState **)(this + 8),this);
        uVar2 = TranslatedState::InitializeObjectAt(*(TranslatedState **)(this + 8),this);
        return uVar2;
      }
      if (TVar1 != (TranslatedValue)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("internal error: value missing");
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unexpected case");
    }
    MaterializeSimple(this);
  }
  return *(undefined8 *)(this + 0x10);
}

