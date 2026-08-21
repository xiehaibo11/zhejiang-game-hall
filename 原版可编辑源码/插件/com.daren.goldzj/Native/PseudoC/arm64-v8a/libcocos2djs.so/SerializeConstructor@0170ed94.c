
/* v8::internal::compiler::MapData::SerializeConstructor(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::MapData::SerializeConstructor(MapData *this,JSHeapBroker *param_1)

{
  uint *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long local_38;
  
  if (this[0x78] == (MapData)0x0) {
    this[0x78] = (MapData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_38,param_1,this,"MapData::SerializeConstructor");
    uVar2 = *(uint *)(**(ulong **)this + 0x13);
    uVar6 = **(ulong **)this & 0xffffffff00000000;
    uVar7 = uVar6 | uVar2;
    if ((uVar2 & 1) != 0) {
      do {
        if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar7 + 0x13);
        uVar7 = uVar6 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    pIVar3 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    }
    uVar5 = JSHeapBroker::GetOrCreateData(param_1,puVar4);
    *(undefined8 *)(this + 0x80) = uVar5;
    *(int *)(local_38 + 0x170) = *(int *)(local_38 + 0x170) + -1;
  }
  return;
}

