
/* v8::internal::compiler::JSArrayData::Serialize(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::JSArrayData::Serialize(JSArrayData *this,JSHeapBroker *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_38;
  
  if (this[0xb0] == (JSArrayData)0x0) {
    this[0xb0] = (JSArrayData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_38,param_1,this,"JSArrayData::Serialize");
    pIVar1 = *(Isolate **)param_1;
    uVar4 = **(ulong **)this & 0xffffffff00000000 | (ulong)*(uint *)(**(ulong **)this + 0xb);
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
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

