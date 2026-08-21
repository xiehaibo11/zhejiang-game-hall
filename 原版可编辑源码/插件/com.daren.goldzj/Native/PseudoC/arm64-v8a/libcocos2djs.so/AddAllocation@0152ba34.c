
/* v8::internal::AllocationTraceNode::AddAllocation(unsigned int) */

void __thiscall
v8::internal::AllocationTraceNode::AddAllocation(AllocationTraceNode *this,uint param_1)

{
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + param_1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}

