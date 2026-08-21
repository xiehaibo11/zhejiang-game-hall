
/* v8::internal::compiler::MapData::SerializeBackPointer(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::MapData::SerializeBackPointer(MapData *this,JSHeapBroker *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long local_38;
  
  if (this[0x88] == (MapData)0x0) {
    this[0x88] = (MapData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_38,param_1,this,"MapData::SerializeBackPointer");
    uVar1 = *(uint *)(**(ulong **)this + 0x13);
    uVar5 = **(ulong **)this & 0xffffffff00000000;
    if (((uVar1 & 1) == 0) ||
       (uVar6 = uVar5 | uVar1, *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2)) {
      uVar6 = *(ulong *)(uVar5 + 0xa0);
    }
    pIVar2 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
    }
    lVar4 = JSHeapBroker::GetOrCreateData(param_1,puVar3);
    if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    *(long *)(this + 0x90) = lVar4;
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

