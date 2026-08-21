
/* v8::internal::AllocationTraceNode::AllocationTraceNode(v8::internal::AllocationTraceTree*,
   unsigned int) */

void __thiscall
v8::internal::AllocationTraceNode::AllocationTraceNode
          (AllocationTraceNode *this,AllocationTraceTree *param_1,uint param_2)

{
  int iVar1;
  
  *(AllocationTraceTree **)this = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(uint *)(this + 8) = param_2;
  iVar1 = *(int *)param_1;
  *(int *)param_1 = iVar1 + 1;
  *(int *)(this + 0x14) = iVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

