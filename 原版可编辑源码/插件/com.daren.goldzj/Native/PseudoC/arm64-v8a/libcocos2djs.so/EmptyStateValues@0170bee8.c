
/* v8::internal::compiler::JSGraph::EmptyStateValues() */

void __thiscall v8::internal::compiler::JSGraph::EmptyStateValues(JSGraph *this)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_28;
  
  if (*(long *)(this + 0x248) == 0) {
    this_00 = *(Graph **)this;
    pOVar1 = (Operator *)
             CommonOperatorBuilder::StateValues(*(CommonOperatorBuilder **)(this + 8),0,0);
    local_28 = (Node *)0x0;
    uVar2 = Graph::NewNode(this_00,pOVar1,0,&local_28,false);
    *(undefined8 *)(this + 0x248) = uVar2;
  }
  return;
}

