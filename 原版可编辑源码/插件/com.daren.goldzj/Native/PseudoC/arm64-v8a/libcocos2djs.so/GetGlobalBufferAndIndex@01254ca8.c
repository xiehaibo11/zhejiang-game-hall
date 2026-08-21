
/* v8::internal::WasmInstanceObject::GetGlobalBufferAndIndex(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   v8::internal::wasm::WasmGlobal const&) */

void v8::internal::WasmInstanceObject::GetGlobalBufferAndIndex(ulong *param_1,long param_2)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  pIVar2 = (Isolate *)(uVar3 & 0xffffffff00000000);
  if ((*(char *)(param_2 + 1) == '\0') || (*(char *)(param_2 + 0x1c) == '\0')) {
    uVar3 = (ulong)pIVar2 | (ulong)*(uint *)(uVar3 + 0x83);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
    }
  }
  else {
    uVar3 = (ulong)pIVar2 |
            (ulong)*(uint *)(((ulong)pIVar2 | (ulong)*(uint *)(uVar3 + 0x87)) +
                             (long)(*(int *)(param_2 + 0x18) << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
    }
  }
  return;
}

