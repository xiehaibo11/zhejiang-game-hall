
/* v8::internal::compiler::MapData::SerializeRootMap(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::MapData::SerializeRootMap(MapData *this,JSHeapBroker *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  Isolate *pIVar4;
  undefined8 local_40;
  long local_38;
  
  if (this[0xa8] == (MapData)0x0) {
    this[0xa8] = (MapData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_38,param_1,this,"MapData::SerializeRootMap");
    local_40 = **(undefined8 **)this;
    uVar1 = Map::FindRootMap((Map *)&local_40,*(Isolate **)param_1);
    pIVar4 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar1);
    }
    lVar3 = JSHeapBroker::GetOrCreateData(param_1,puVar2);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    *(long *)(this + 0xb0) = lVar3;
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

