
/* v8::internal::AllocationTraceTree::Print(v8::internal::AllocationTracker*) */

void __thiscall
v8::internal::AllocationTraceTree::Print(AllocationTraceTree *this,AllocationTracker *param_1)

{
  base::OS::Print("[AllocationTraceTree:]\n");
  base::OS::Print("Total size | Allocation count | Function id | id\n");
  AllocationTraceNode::Print((AllocationTraceNode *)(this + 8),0,param_1);
  return;
}

