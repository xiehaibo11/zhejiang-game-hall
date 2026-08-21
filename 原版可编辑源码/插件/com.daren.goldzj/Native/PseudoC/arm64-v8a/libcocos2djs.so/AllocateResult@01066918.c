
/* v8::internal::StringToBigIntHelper::AllocateResult() */

void __thiscall v8::internal::StringToBigIntHelper::AllocateResult(StringToBigIntHelper *this)

{
  long lVar1;
  
  lVar1 = BigInt::AllocateFor(*(undefined8 *)(this + 8),*(undefined4 *)(this + 0x20),
                              *(int *)(this + 0x28) - *(int *)(this + 0x24),1,
                              *(int *)(this + 0x40) == 1);
  if (lVar1 == 0) {
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = 1;
  }
  else {
    *(long *)(this + 0x38) = lVar1;
  }
  return;
}

