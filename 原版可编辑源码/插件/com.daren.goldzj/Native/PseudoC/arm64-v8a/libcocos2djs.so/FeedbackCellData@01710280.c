
/* v8::internal::compiler::FeedbackCellData::FeedbackCellData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::FeedbackCell>) */

void __thiscall
v8::internal::compiler::FeedbackCellData::FeedbackCellData
          (FeedbackCellData *this,JSHeapBroker *param_1,undefined8 param_3,ulong *param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  
  HeapObjectData::HeapObjectData();
  pIVar1 = *(Isolate **)param_1;
  uVar4 = *param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 3);
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
  lVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
  if (*(int *)(lVar3 + 8) == 1) {
    *(long *)(this + 0x18) = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

