
/* v8::internal::AllocationTraceTree::AllocationTraceTree() */

void __thiscall v8::internal::AllocationTraceTree::AllocationTraceTree(AllocationTraceTree *this)

{
  *(AllocationTraceTree **)(this + 8) = this;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)this = 2;
  *(undefined8 *)(this + 0x18) = 0x100000000;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}

