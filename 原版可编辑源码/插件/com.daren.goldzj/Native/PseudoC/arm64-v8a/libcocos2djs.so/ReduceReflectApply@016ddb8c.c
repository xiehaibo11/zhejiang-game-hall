
/* v8::internal::compiler::JSCallReducer::ReduceReflectApply(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceReflectApply(JSCallReducer *this,Node *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  Node *pNVar5;
  Operator *pOVar6;
  int iVar7;
  Zone *pZVar8;
  
  puVar4 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar3 = *puVar4;
  iVar7 = (uVar3 & 0x7ffffff) - 2;
  Node::RemoveInput(param_1,0);
  Node::RemoveInput(param_1,0);
  if (iVar7 < 3) {
    do {
      iVar2 = iVar7 + 1;
      pZVar8 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
      pNVar5 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      Node::InsertInput(param_1,pZVar8,iVar7,pNVar5);
      iVar7 = iVar2;
    } while (iVar2 != 3);
  }
  else if (iVar7 != 3) {
    iVar7 = (uVar3 & 0x7ffffff) - 3;
    do {
      Node::RemoveInput(param_1,iVar7);
      bVar1 = 3 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar1);
  }
  pOVar6 = (Operator *)
           JSOperatorBuilder::CallWithArrayLike
                     (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),puVar4 + 1,puVar4 + 2,
                      *puVar4 >> 0x1c & 1,1);
  NodeProperties::ChangeOp(param_1,pOVar6);
  puVar4 = (uint *)CallParametersOf(*(Operator **)param_1);
  pNVar5 = (Node *)ReduceCallOrConstructWithArrayLikeOrSpread
                             (this,param_1,*puVar4 & 0x7ffffff,puVar4 + 1,puVar4 + 2,
                              *puVar4 >> 0x1c & 1);
  if (pNVar5 != (Node *)0x0) {
    param_1 = pNVar5;
  }
  return param_1;
}

