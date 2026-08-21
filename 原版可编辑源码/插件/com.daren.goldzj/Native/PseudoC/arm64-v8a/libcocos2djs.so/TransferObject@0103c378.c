
/* v8::internal::Genesis::TransferObject(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall
v8::internal::Genesis::TransferObject(Genesis *this,ulong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  
  pIVar6 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar6 + 0x95a0);
  lVar2 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  TransferNamedProperties();
  TransferIndexedProperties(this,param_2,param_3);
  pIVar3 = *(Isolate **)this;
  uVar5 = *param_2 & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*param_2 - 1)) + 0xf);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
  }
  JSObject::ForceSetPrototype(param_3,puVar4);
  if (pIVar6 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar6 + 0x95a0) = uVar1;
    *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
    if (*(long *)(pIVar6 + 0x95a8) != lVar2) {
      *(long *)(pIVar6 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar6);
      return;
    }
  }
  return;
}

