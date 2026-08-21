
/* v8::internal::TranslatedState::ResolveCapturedObject(v8::internal::TranslatedValue*) */

TranslatedValue * __thiscall
v8::internal::TranslatedState::ResolveCapturedObject(TranslatedState *this,TranslatedValue *param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  
  while( true ) {
    if (*param_1 != (TranslatedValue)0x9) {
      if (*param_1 == (TranslatedValue)0x8) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","TranslatedValue::kCapturedObject == slot->kind()");
    }
    if (*(ulong *)(this + 0x58) <= (ulong)(long)*(int *)(param_1 + 0x18)) break;
    uVar1 = *(long *)(this + 0x50) + (long)*(int *)(param_1 + 0x18);
    piVar2 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                    (uVar1 & 0x1ff) * 8);
    lVar3 = *(long *)this + (long)*piVar2 * 0x58;
    uVar1 = *(long *)(lVar3 + 0x48) + (long)piVar2[1];
    param_1 = (TranslatedValue *)
              (*(long *)(*(long *)(lVar3 + 0x30) + (uVar1 >> 4 & 0xffffffffffffff8)) +
              (uVar1 & 0x7f) * 0x20);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()");
}

