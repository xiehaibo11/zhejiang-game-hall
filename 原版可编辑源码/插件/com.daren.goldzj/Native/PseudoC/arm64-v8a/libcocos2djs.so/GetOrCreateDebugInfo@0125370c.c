
/* v8::internal::WasmInstanceObject::GetOrCreateDebugInfo(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

ulong * v8::internal::WasmInstanceObject::GetOrCreateDebugInfo(ulong *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  
  pIVar2 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar1 = *(uint *)(*param_1 + 0x8b);
  if (uVar1 == *(uint *)(pIVar2 + 0xa0)) {
    puVar3 = (ulong *)WasmDebugInfo::New(param_1);
    return puVar3;
  }
  uVar4 = (ulong)pIVar2 | (ulong)uVar1;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
  }
  return puVar3;
}

