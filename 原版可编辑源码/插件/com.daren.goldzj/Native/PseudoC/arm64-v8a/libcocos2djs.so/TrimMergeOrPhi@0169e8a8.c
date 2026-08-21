
/* v8::internal::compiler::DeadCodeElimination::TrimMergeOrPhi(v8::internal::compiler::Node*, int)
    */

void __thiscall
v8::internal::compiler::DeadCodeElimination::TrimMergeOrPhi
          (DeadCodeElimination *this,Node *param_1,int param_2)

{
  int iVar1;
  Operator *pOVar2;
  
  pOVar2 = (Operator *)
           CommonOperatorBuilder::ResizeMergeOrPhi
                     (*(CommonOperatorBuilder **)(this + 0x18),*(Operator **)param_1,param_2);
  iVar1 = OperatorProperties::GetTotalInputCount(pOVar2);
  Node::TrimInputCount(param_1,iVar1);
  NodeProperties::ChangeOp(param_1,pOVar2);
  return;
}

