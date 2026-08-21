
/* v8::internal::compiler::RepresentationSelector::ChangeUnaryToPureBinaryOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, int, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::ChangeUnaryToPureBinaryOp
          (RepresentationSelector *this,Node *param_1,Operator *param_2,int param_3,Node *param_4)

{
  Node *pNVar1;
  Node *pNVar2;
  long lVar3;
  
  if (0 < *(int *)(*(long *)param_1 + 0x18)) {
    pNVar1 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pNVar2 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    lVar3 = *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28
                     + 0x18);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 8);
    }
    if (lVar3 == 1) {
      ChangeToDeadValue(this,param_1,pNVar2,pNVar1);
      return;
    }
    Node::TrimInputCount(param_1,*(int *)(*(long *)param_1 + 0x14));
    FUN_012e8f08(param_1,pNVar2,pNVar1);
  }
  Node::InsertInput(param_1,*(Zone **)**(undefined8 **)this,param_3,param_4);
  NodeProperties::ChangeOp(param_1,param_2);
  return;
}

