
/* v8::internal::JSObject::GetElementsTransitionMap(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ElementsKind) */

void v8::internal::JSObject::GetElementsTransitionMap(ulong *param_1,undefined4 param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  pIVar1 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(*param_1 - 1);
  if (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar1 | 0x95b8),uVar3);
  }
  Map::TransitionElementsTo((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar2,param_2);
  return;
}

