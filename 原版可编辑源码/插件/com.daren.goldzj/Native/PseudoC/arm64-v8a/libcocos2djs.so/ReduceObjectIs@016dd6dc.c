
/* v8::internal::compiler::JSCallReducer::ReduceObjectIs(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectIs(JSCallReducer *this,Node *param_1)

{
  int iVar1;
  uint *puVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Graph *this_00;
  Node *local_50;
  undefined8 uStack_48;
  
  puVar2 = (uint *)CallParametersOf(*(Operator **)param_1);
  iVar1 = (*puVar2 & 0x7ffffff) - 2;
  if (iVar1 < 1) {
    pNVar3 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,2);
    if (iVar1 != 1) {
      uVar4 = NodeProperties::GetValueInput(param_1,3);
      goto LAB_016dd758;
    }
  }
  uVar4 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
LAB_016dd758:
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar5 = (Operator *)
           SimplifiedOperatorBuilder::SameValue
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
  local_50 = pNVar3;
  uStack_48 = uVar4;
  uVar4 = Graph::NewNode(this_00,pOVar5,2,&local_50,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,0,0);
  return uVar4;
}

