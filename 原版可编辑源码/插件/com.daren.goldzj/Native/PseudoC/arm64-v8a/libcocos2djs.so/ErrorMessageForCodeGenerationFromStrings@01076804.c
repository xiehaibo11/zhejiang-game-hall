
/* v8::internal::Context::ErrorMessageForCodeGenerationFromStrings() */

void __thiscall v8::internal::Context::ErrorMessageForCodeGenerationFromStrings(Context *this)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong uVar5;
  char *local_40;
  undefined8 uStack_38;
  
  pIVar4 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
  uVar1 = *(uint *)(*(ulong *)this + 0xb3);
  uVar5 = (ulong)pIVar4 | (ulong)uVar1;
  if (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8),uVar5);
    uVar5 = *puVar2;
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  if ((int)uVar5 == *(int *)(pIVar4 + 0xa0)) {
    local_40 = "Code generation from strings disallowed for this context";
    uStack_38 = 0x38;
    lVar3 = Factory::NewStringFromOneByte(pIVar4,&local_40,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  return;
}

