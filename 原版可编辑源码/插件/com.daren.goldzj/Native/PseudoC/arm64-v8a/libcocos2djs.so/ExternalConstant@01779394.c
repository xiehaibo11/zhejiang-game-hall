
/* v8::internal::compiler::MachineGraph::ExternalConstant(v8::internal::Runtime::FunctionId) */

void __thiscall
v8::internal::compiler::MachineGraph::ExternalConstant(MachineGraph *this,undefined4 param_2)

{
  Graph *this_00;
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  undefined8 local_38;
  Node *local_18;
  
  local_38 = ExternalReference::Create(param_2);
  plVar1 = (long *)CommonNodeCache::FindExternalConstant((CommonNodeCache *)(this + 0x18),local_38);
  if (*plVar1 == 0) {
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::ExternalConstant
                       (*(CommonOperatorBuilder **)(this + 8),(ExternalReference *)&local_38);
    local_18 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_18,false);
    *plVar1 = lVar3;
  }
  return;
}

