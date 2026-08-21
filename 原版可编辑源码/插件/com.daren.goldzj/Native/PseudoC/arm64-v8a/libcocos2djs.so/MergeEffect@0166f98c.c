
/* v8::internal::compiler::BytecodeGraphBuilder::MergeEffect(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::MergeEffect
          (BytecodeGraphBuilder *this,Node *param_1,Node *param_2,Node *param_3)

{
  int iVar1;
  Node *pNVar2;
  Node *this_00;
  Operator *pOVar3;
  Node *pNVar4;
  Node *pNVar5;
  
  iVar1 = *(int *)(*(long *)param_3 + 0x1c);
  if ((*(short *)(*(long *)param_1 + 0x10) == 0x24) &&
     (pNVar2 = (Node *)NodeProperties::GetControlInput(param_1,0), pNVar2 == param_3)) {
    Node::InsertInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),iVar1 + -1,param_2);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),iVar1);
    NodeProperties::ChangeOp(param_1,pOVar3);
  }
  else if (param_1 != param_2) {
    param_1 = (Node *)NewEffectPhi(this,iVar1,param_1,param_3);
    pNVar2 = param_1 + 0x20;
    pNVar5 = pNVar2;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    this_00 = *(Node **)(pNVar5 + ((long)iVar1 + -1) * 8);
    if (this_00 != param_2) {
      pNVar4 = param_1;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar4 = *(Node **)pNVar2;
      }
      if (this_00 != (Node *)0x0) {
        Node::RemoveUse(this_00,(Use *)(pNVar4 + (long)-iVar1 * 0x18));
      }
      *(Node **)(pNVar5 + ((long)iVar1 + -1) * 8) = param_2;
      if (param_2 != (Node *)0x0) {
        Node::AppendUse(param_2,(Use *)(pNVar4 + (long)-iVar1 * 0x18));
      }
    }
  }
  return param_1;
}

