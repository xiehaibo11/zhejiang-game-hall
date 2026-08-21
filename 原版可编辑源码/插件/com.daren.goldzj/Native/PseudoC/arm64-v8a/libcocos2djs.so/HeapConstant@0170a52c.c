
/* v8::internal::compiler::JSGraph::HeapConstant(v8::internal::Handle<v8::internal::HeapObject>) */

void __thiscall v8::internal::compiler::JSGraph::HeapConstant(JSGraph *this,undefined8 param_2)

{
  Graph *this_00;
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  undefined8 local_38;
  Node *local_18;
  
  local_38 = param_2;
  plVar1 = (long *)CommonNodeCache::FindHeapConstant((CommonNodeCache *)(this + 0x18));
  if (*plVar1 == 0) {
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::HeapConstant
                       (*(CommonOperatorBuilder **)(this + 8),(Handle *)&local_38);
    local_18 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_18,false);
    *plVar1 = lVar3;
  }
  return;
}

