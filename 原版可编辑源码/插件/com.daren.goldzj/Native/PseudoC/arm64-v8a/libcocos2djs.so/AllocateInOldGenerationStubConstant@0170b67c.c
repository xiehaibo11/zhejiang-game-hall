
/* v8::internal::compiler::JSGraph::AllocateInOldGenerationStubConstant() */

void __thiscall v8::internal::compiler::JSGraph::AllocateInOldGenerationStubConstant(JSGraph *this)

{
  Graph *this_00;
  long *plVar1;
  long lVar2;
  Operator *pOVar3;
  undefined8 local_38;
  Node *local_18;
  
  if (*(long *)(this + 400) == 0) {
    local_38 = Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x168) + 0x9e00),0x51);
    plVar1 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18),local_38);
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
    *(long *)(this + 400) = lVar2;
  }
  return;
}

