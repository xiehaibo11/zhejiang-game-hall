
/* v8::internal::compiler::HeapObjectData::HeapObjectData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::HeapObject>) */

void __thiscall
v8::internal::compiler::HeapObjectData::HeapObjectData
          (HeapObjectData *this,JSHeapBroker *param_1,undefined8 param_3,ulong *param_4)

{
  byte bVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_38;
  
  ObjectData::ObjectData();
  local_38 = *param_4;
  bVar1 = Object::BooleanValue((Object *)&local_38,*(Isolate **)param_1);
  this[0xc] = (HeapObjectData)(bVar1 & 1);
  pIVar2 = *(Isolate **)param_1;
  uVar5 = *param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 - 1);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
  }
  uVar4 = JSHeapBroker::GetOrCreateData(param_1,puVar3);
  *(undefined8 *)(this + 0x10) = uVar4;
  if (*(int *)(param_1 + 0x70) == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","broker->SerializingAllowed()");
}

