
/* v8::internal::compiler::BytecodeGraphBuilder::VisitIncBlockCounter() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitIncBlockCounter(BytecodeGraphBuilder *this)

{
  uint uVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *pNVar4;
  JSGraph *this_00;
  Node *local_40;
  undefined8 uStack_38;
  
  pNVar4 = *(Node **)(this + 0x168);
  if (pNVar4 == (Node *)0x0) {
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Parameter
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),-1,"%closure");
    local_40 = *(Node **)(**(long **)(this + 0x10) + 8);
    pNVar4 = (Node *)MakeNode(this,pOVar2,1,&local_40,false);
    *(Node **)(this + 0x168) = pNVar4;
  }
  this_00 = *(JSGraph **)(this + 0x10);
  uVar1 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                    ((BytecodeArrayAccessor *)(this + 0x88),0);
  uVar3 = JSGraph::Constant(this_00,(double)uVar1);
  pOVar2 = (Operator *)
           JSOperatorBuilder::CallRuntime
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),0x1dc);
  local_40 = pNVar4;
  uStack_38 = uVar3;
  MakeNode(this,pOVar2,2,&local_40,false);
  return;
}

