
/* v8::internal::compiler::BytecodeGraphBuilder::MergeControl(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::MergeControl
          (BytecodeGraphBuilder *this,Node *param_1,Node *param_2)

{
  int iVar1;
  short sVar2;
  Operator *pOVar3;
  Node *local_40;
  Node *pNStack_38;
  
  sVar2 = *(short *)(*(long *)param_1 + 0x10);
  iVar1 = *(int *)(*(long *)param_1 + 0x1c) + 1;
  if (sVar2 == 1) {
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Loop
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),iVar1);
    Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),param_2);
    NodeProperties::ChangeOp(param_1,pOVar3);
  }
  else {
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Merge
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),iVar1);
    if (sVar2 == 10) {
      Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),param_2);
      NodeProperties::ChangeOp(param_1,pOVar3);
    }
    else {
      local_40 = param_1;
      pNStack_38 = param_2;
      param_1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x10),pOVar3,2,&local_40,
                                       true);
    }
  }
  return param_1;
}

