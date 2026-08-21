
/* v8::internal::compiler::RepresentationSelector::ChangeToDeadValue(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::ChangeToDeadValue
          (RepresentationSelector *this,Node *param_1,Node *param_2,Node *param_3)

{
  Node *pNVar1;
  Graph *this_00;
  Operator *pOVar2;
  Node *this_01;
  Node *this_02;
  Use *pUVar3;
  Node *pNVar4;
  Node *local_50;
  Node *pNStack_48;
  
  this_00 = (Graph *)**(undefined8 **)this;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Unreachable((CommonOperatorBuilder *)(*(undefined8 **)this)[1]);
  local_50 = param_2;
  pNStack_48 = param_3;
  this_01 = (Node *)Graph::NewNode(this_00,pOVar2,2,&local_50,false);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::DeadValue
                     (*(CommonOperatorBuilder **)(*(long *)this + 8),
                      *(undefined1 *)
                       (*(long *)(this + 0x18) +
                        ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1));
  pNVar1 = param_1 + 0x20;
  pNVar4 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_02 = *(Node **)pNVar4;
  if (this_02 != this_01) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar3 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar3 = (Use *)(param_1 + -0x18);
    }
    if (this_02 != (Node *)0x0) {
      Node::RemoveUse(this_02,pUVar3);
    }
    *(Node **)pNVar4 = this_01;
    if (this_01 != (Node *)0x0) {
      Node::AppendUse(this_01,pUVar3);
    }
  }
  Node::TrimInputCount(param_1,*(int *)(pOVar2 + 0x14));
  FUN_012e8f08(param_1,this_01,param_3);
  NodeProperties::ChangeOp(param_1,pOVar2);
  return;
}

