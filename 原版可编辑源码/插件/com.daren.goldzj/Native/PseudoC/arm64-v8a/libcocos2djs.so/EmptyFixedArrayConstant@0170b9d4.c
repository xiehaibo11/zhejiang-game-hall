
/* v8::internal::compiler::JSGraph::EmptyFixedArrayConstant() */

void __thiscall v8::internal::compiler::JSGraph::EmptyFixedArrayConstant(JSGraph *this)

{
  Graph *this_00;
  long *plVar1;
  long lVar2;
  Operator *pOVar3;
  long local_38;
  Node *local_18;
  
  if (*(long *)(this + 0x1c0) == 0) {
    local_38 = *(long *)(this + 0x168) + 0x168;
    plVar1 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18));
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      this_00 = *(Graph **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::HeapConstant
                         (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_38);
      local_18 = (Node *)0x0;
      lVar2 = Graph::NewNode(this_00,pOVar3,0,&local_18,false);
      *plVar1 = lVar2;
    }
    *(long *)(this + 0x1c0) = lVar2;
  }
  return;
}

