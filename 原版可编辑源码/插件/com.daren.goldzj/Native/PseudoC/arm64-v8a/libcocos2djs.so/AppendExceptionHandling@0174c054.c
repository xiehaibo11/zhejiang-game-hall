
/* v8::internal::compiler::JSNativeContextSpecialization::AppendExceptionHandling(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::AppendExceptionHandling
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          Node *param_4,Node *param_5)

{
  int iVar1;
  Graph *pGVar2;
  Operator *pOVar3;
  Node *pNVar4;
  uint uVar5;
  Node *local_60;
  Node *pNStack_58;
  
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    uVar5 = *(uint *)(*(long *)(param_3 + 0x20) + 8);
  }
  else {
    uVar5 = *(uint *)(param_3 + 0x14) >> 0x18 & 0xf;
  }
  iVar1 = uVar5 + 1;
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfException
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_60 = param_1;
  pNStack_58 = param_2;
  pNVar4 = (Node *)Graph::NewNode(pGVar2,pOVar3,2,&local_60,false);
  Node::InsertInput(param_3,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Merge
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),iVar1);
  NodeProperties::ChangeOp(param_3,pOVar3);
  Node::InsertInput(param_4,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Phi
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),8,iVar1);
  NodeProperties::ChangeOp(param_4,pOVar3);
  Node::InsertInput(param_5,*(Zone **)**(undefined8 **)(this + 0x10),0,pNVar4);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),iVar1);
  NodeProperties::ChangeOp(param_5,pOVar3);
  pGVar2 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar3 = (Operator *)
           CommonOperatorBuilder::IfSuccess
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_60 = param_2;
  Graph::NewNode(pGVar2,pOVar3,1,&local_60,false);
  return;
}

