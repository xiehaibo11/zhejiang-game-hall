
/* v8::internal::compiler::JSRegExpData::SerializeAsRegExpBoilerplate(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::JSRegExpData::SerializeAsRegExpBoilerplate
          (JSRegExpData *this,JSHeapBroker *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long local_28;
  
  if (this[0xb0] == (JSRegExpData)0x0) {
    this[0xb0] = (JSRegExpData)0x1;
    TraceScope::TraceScope
              ((TraceScope *)&local_28,param_1,this,"JSRegExpData::SerializeAsRegExpBoilerplate");
    puVar5 = *(ulong **)this;
    JSObjectData::SerializeElements((JSObjectData *)this,param_1);
    pIVar1 = *(Isolate **)param_1;
    uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 3);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    uVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
    *(undefined8 *)(this + 0xb8) = uVar3;
    pIVar1 = *(Isolate **)param_1;
    uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    uVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
    *(undefined8 *)(this + 0xc0) = uVar3;
    pIVar1 = *(Isolate **)param_1;
    uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    uVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
    *(undefined8 *)(this + 200) = uVar3;
    pIVar1 = *(Isolate **)param_1;
    uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0x13);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    uVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
    *(undefined8 *)(this + 0xd0) = uVar3;
    pIVar1 = *(Isolate **)param_1;
    uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    uVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar5);
    *(undefined8 *)(this + 0xd8) = uVar3;
    *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
  }
  return;
}

