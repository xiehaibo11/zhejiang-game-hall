
/* v8::internal::Factory::NewInvalidStringLengthError() */

void __thiscall v8::internal::Factory::NewInvalidStringLengthError(Factory *this)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (FLAG_correctness_fuzzer_suppressions == '\0') {
    if (*(int *)(*(long *)(this + 0xed0) + 0xb) == 2) {
      Protectors::InvalidateStringLengthOverflowLookupChain((Isolate *)this);
    }
    uVar2 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1))
                                                + 0x13)) + 0x397);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(this + 0x95a0);
      if (puVar1 == *(ulong **)(this + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    }
    NewError(this,puVar1,0xca,0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Aborting on invalid string length");
}

