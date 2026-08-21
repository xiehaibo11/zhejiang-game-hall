
/* v8::internal::HeapSnapshotJSONSerializer::SerializeTraceTree() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeTraceTree(HeapSnapshotJSONSerializer *this)

{
  if (*(long *)(**(long **)this + 0x30) != 0) {
    SerializeTraceNode(this,(AllocationTraceNode *)(*(long *)(**(long **)this + 0x30) + 0x18));
    return;
  }
  return;
}

