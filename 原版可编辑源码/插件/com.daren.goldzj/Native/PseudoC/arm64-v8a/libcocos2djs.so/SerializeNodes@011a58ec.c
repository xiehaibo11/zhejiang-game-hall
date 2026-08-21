
/* v8::internal::HeapSnapshotJSONSerializer::SerializeNodes() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeNodes(HeapSnapshotJSONSerializer *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  HeapEntry *pHVar5;
  HeapEntry *pHVar6;
  long *plVar7;
  
  lVar4 = *(long *)this;
  lVar2 = *(long *)(lVar4 + 0xd8);
  if (*(long *)(lVar4 + 0xe0) != lVar2) {
    uVar3 = *(ulong *)(lVar4 + 0xf0);
    uVar1 = *(long *)(lVar4 + 0xf8) + uVar3;
    pHVar5 = (HeapEntry *)(*(long *)(lVar2 + (uVar3 / 0x66) * 8) + (uVar3 % 0x66) * 0x28);
    pHVar6 = (HeapEntry *)(*(long *)(lVar2 + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28);
    if (pHVar6 != pHVar5) {
      plVar7 = (long *)(lVar2 + (uVar3 / 0x66) * 8);
      do {
        SerializeNode(this,pHVar5);
        if (*(char *)(*(long *)(this + 0x28) + 0x24) != '\0') {
          return;
        }
        pHVar5 = pHVar5 + 0x28;
        if ((long)pHVar5 - *plVar7 == 0xff0) {
          plVar7 = plVar7 + 1;
          pHVar5 = (HeapEntry *)*plVar7;
        }
      } while (pHVar6 != pHVar5);
    }
  }
  return;
}

