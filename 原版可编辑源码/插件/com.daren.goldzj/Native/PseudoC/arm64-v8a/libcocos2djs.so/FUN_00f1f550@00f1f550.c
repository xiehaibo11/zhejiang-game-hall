
long FUN_00f1f550(long param_1,long param_2)

{
  TranslatedValue TVar1;
  int iVar2;
  long lVar3;
  TranslatedValue *this;
  
  iVar2 = v8::internal::TranslatedValue::GetRawValue(*(TranslatedValue **)(param_1 + 8));
  this = *(TranslatedValue **)(param_1 + 8);
  if ((iVar2 == *(int *)(param_2 + 0x178)) && (*this != (TranslatedValue)0x7)) {
    param_2 = param_2 + 400;
  }
  else {
    if (this[1] != (TranslatedValue)0x2) {
      TVar1 = *this;
      if (6 < (byte)TVar1 - 1) {
        if ((byte)TVar1 - 8 < 2) {
          v8::internal::TranslatedState::EnsureObjectAllocatedAt
                    (*(TranslatedState **)(this + 8),this);
          lVar3 = v8::internal::TranslatedState::InitializeObjectAt
                            (*(TranslatedState **)(this + 8),this);
          return lVar3;
        }
        if (TVar1 != (TranslatedValue)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("internal error: value missing");
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unexpected case");
      }
      v8::internal::TranslatedValue::MaterializeSimple(this);
    }
    param_2 = *(long *)(this + 0x10);
  }
  return param_2;
}

