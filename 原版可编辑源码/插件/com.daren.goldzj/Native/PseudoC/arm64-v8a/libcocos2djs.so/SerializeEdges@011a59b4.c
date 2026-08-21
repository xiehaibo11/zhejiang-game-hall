
/* v8::internal::HeapSnapshotJSONSerializer::SerializeEdges() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeEdges(HeapSnapshotJSONSerializer *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)this;
  lVar1 = *(long *)(lVar2 + 0x130);
  if (*(long *)(lVar2 + 0x138) != lVar1) {
    uVar3 = 0;
    do {
      SerializeEdge(this,*(HeapGraphEdge **)(lVar1 + uVar3 * 8),uVar3 == 0);
      if (*(char *)(*(long *)(this + 0x28) + 0x24) != '\0') {
        return;
      }
      lVar1 = *(long *)(lVar2 + 0x130);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(lVar2 + 0x138) - lVar1 >> 3));
  }
  return;
}

