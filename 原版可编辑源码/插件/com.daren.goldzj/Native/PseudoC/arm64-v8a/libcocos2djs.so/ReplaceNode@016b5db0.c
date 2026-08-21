
/* v8::internal::compiler::EscapeAnalysisReducer::ReplaceNode(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EscapeAnalysisReducer::ReplaceNode
          (EscapeAnalysisReducer *this,Node *param_1,Node *param_2)

{
  long lVar1;
  ulong uVar2;
  Node *pNVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  long local_48;
  
  local_48 = *(long *)(this + 0x18);
  lVar1 = EscapeAnalysisResult::GetVirtualObject((EscapeAnalysisResult *)&local_48,param_2);
  if ((*(short *)(*(long *)param_2 + 0x10) != 0x3d) &&
     ((lVar1 == 0 || (*(char *)(lVar1 + 0x20) != '\0')))) {
    local_48 = *(long *)(param_2 + 8);
    lVar1 = *(long *)(param_1 + 8);
    if ((local_48 != lVar1) && (uVar2 = Type::SlowIs((Type *)&local_48,lVar1), (uVar2 & 1) == 0)) {
      pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      pNVar4 = (Node *)NodeProperties::GetControlInput(param_1,0);
      Node::TrimInputCount(param_1,0);
      Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),param_2);
      Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),pNVar3);
      Node::AppendInput(param_1,*(Zone **)**(undefined8 **)(this + 0x10),pNVar4);
      uVar5 = Type::Intersect(lVar1,local_48,*(undefined8 *)**(undefined8 **)(this + 0x10));
      *(undefined8 *)(param_1 + 8) = uVar5;
      pOVar6 = (Operator *)
               CommonOperatorBuilder::TypeGuard
                         (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),lVar1);
      NodeProperties::ChangeOp(param_1,pOVar6);
      (**(code **)(**(long **)(this + 8) + 0x20))
                (*(long **)(this + 8),param_1,param_1,param_1,pNVar4);
      return (Node *)0x0;
    }
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
  return param_2;
}

