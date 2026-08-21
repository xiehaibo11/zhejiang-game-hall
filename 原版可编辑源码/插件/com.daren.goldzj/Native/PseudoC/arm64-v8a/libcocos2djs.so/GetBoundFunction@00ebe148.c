
/* v8::Function::GetBoundFunction() const */

ulong * __thiscall v8::Function::GetBoundFunction(Function *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  pIVar1 = (Isolate *)(uVar3 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar1 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x438) {
    uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(uVar3 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)internal::HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
  }
  else {
    puVar2 = (ulong *)((ulong)pIVar1 | 0xa0);
  }
  return puVar2;
}

