
/* v8::internal::wasm::ThreadImpl::MatchingExceptionTag(v8::internal::Handle<v8::internal::Object>,
   unsigned int) */

bool __thiscall
v8::internal::wasm::ThreadImpl::MatchingExceptionTag(ThreadImpl *this,ulong *param_2,int param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  if (((*param_2 & 1) == 0) ||
     (*(ushort *)((*(ulong *)(this + 8) | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
    bVar1 = false;
  }
  else {
    puVar2 = (ulong *)WasmExceptionPackage::GetExceptionTag();
    uVar5 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    pIVar4 = *(Isolate **)(this + 8);
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(**(ulong **)(this + 0x10) + 0x9b)) +
                              (long)(param_3 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
    if (puVar3 == puVar2) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((puVar2 != (ulong *)0x0) && (puVar3 != (ulong *)0x0)) {
        bVar1 = *puVar3 == *puVar2;
      }
    }
  }
  return bVar1;
}

