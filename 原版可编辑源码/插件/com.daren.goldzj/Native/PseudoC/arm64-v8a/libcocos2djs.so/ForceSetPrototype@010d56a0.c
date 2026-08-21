
/* v8::internal::JSObject::ForceSetPrototype(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::HeapObject>) */

void v8::internal::JSObject::ForceSetPrototype(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar3 | (ulong)*(uint *)(*param_1 - 1);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar4);
  }
  uVar2 = Map::Copy(pIVar3,puVar1,"ForceSetPrototype");
  Map::SetPrototype(pIVar3,uVar2,param_2,1);
  MigrateToMap(pIVar3,param_1,uVar2,0);
  return;
}

