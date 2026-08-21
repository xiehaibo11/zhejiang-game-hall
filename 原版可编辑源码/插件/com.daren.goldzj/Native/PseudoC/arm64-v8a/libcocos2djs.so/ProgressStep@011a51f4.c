
/* v8::internal::HeapSnapshotGenerator::ProgressStep() */

void __thiscall v8::internal::HeapSnapshotGenerator::ProgressStep(HeapSnapshotGenerator *this)

{
  *(int *)(this + 0x140) = *(int *)(this + 0x140) + 1;
  return;
}

