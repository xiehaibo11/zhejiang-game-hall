
/* v8::internal::AllocationTraceNode::FindChild(unsigned int) */

long __thiscall v8::internal::AllocationTraceNode::FindChild(AllocationTraceNode *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x18);
  do {
    if (plVar1 == *(long **)(this + 0x20)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(uint *)(lVar2 + 8) != param_1);
  return lVar2;
}

