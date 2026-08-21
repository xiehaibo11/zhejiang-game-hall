
/* v8::internal::compiler::JSHeapBroker::GetOrCreateData(v8::internal::Object) */

void __thiscall
v8::internal::compiler::JSHeapBroker::GetOrCreateData(JSHeapBroker *this,ulong param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  
  pIVar1 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = param_2;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),param_2);
  }
  GetOrCreateData(this,puVar2);
  return;
}

