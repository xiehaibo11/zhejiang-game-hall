
/* v8::internal::compiler::JSObjectData::SerializeElements(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::JSObjectData::SerializeElements(JSObjectData *this,JSHeapBroker *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long local_38;
  
  if (this[0x22] == (JSObjectData)0x0) {
    this[0x22] = (JSObjectData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_38,param_1,this,"JSObjectData::SerializeElements");
    pIVar1 = *(Isolate **)param_1;
    uVar4 = **(ulong **)this & 0xffffffff00000000 | (ulong)*(uint *)(**(ulong **)this + 7);
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
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (0x11 < *(ushort *)(*(long *)(lVar3 + 0x10) + 0x18) - 0x76) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFixedArrayBase()");
    }
    *(long *)(this + 0x18) = lVar3;
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

