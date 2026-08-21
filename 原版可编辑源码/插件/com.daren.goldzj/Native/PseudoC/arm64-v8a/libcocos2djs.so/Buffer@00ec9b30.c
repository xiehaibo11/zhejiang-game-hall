
/* v8::ArrayBufferView::Buffer() */

void __thiscall v8::ArrayBufferView::Buffer(ArrayBufferView *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  pIVar2 = (Isolate *)(local_18 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x41a) {
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = local_18;
    }
    else {
      puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),local_18);
      local_18 = *puVar1;
      pIVar2 = (Isolate *)(local_18 & 0xffffffff00000000);
    }
    uVar3 = (ulong)pIVar2 | (ulong)*(uint *)(local_18 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      internal::CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
    }
  }
  else {
    internal::JSTypedArray::GetBuffer((JSTypedArray *)&local_18);
  }
  return;
}

