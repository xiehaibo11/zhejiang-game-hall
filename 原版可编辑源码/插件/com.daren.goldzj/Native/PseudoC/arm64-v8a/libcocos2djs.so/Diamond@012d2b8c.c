
/* v8::internal::compiler::Diamond::Diamond(v8::internal::compiler::Graph*,
   v8::internal::compiler::CommonOperatorBuilder*, v8::internal::compiler::Node*,
   v8::internal::compiler::BranchHint) */

void __thiscall
v8::internal::compiler::Diamond::Diamond
          (Diamond *this,Graph *param_1,CommonOperatorBuilder *param_2,Node *param_3,
          undefined4 param_5)

{
  Graph *pGVar1;
  Operator *pOVar2;
  undefined8 uVar3;
  Node *local_40;
  undefined8 uStack_38;
  
  *(Graph **)this = param_1;
  *(CommonOperatorBuilder **)(this + 8) = param_2;
  pOVar2 = (Operator *)CommonOperatorBuilder::Branch(param_2,param_5,1);
  uStack_38 = *(undefined8 *)(*(long *)this + 8);
  local_40 = param_3;
  uVar3 = Graph::NewNode(param_1,pOVar2,2,&local_40,false);
  pGVar1 = *(Graph **)this;
  *(undefined8 *)(this + 0x10) = uVar3;
  pOVar2 = (Operator *)CommonOperatorBuilder::IfTrue(*(CommonOperatorBuilder **)(this + 8));
  local_40 = *(Node **)(this + 0x10);
  uVar3 = Graph::NewNode(pGVar1,pOVar2,1,&local_40,false);
  pGVar1 = *(Graph **)this;
  *(undefined8 *)(this + 0x18) = uVar3;
  pOVar2 = (Operator *)CommonOperatorBuilder::IfFalse(*(CommonOperatorBuilder **)(this + 8));
  local_40 = *(Node **)(this + 0x10);
  uVar3 = Graph::NewNode(pGVar1,pOVar2,1,&local_40,false);
  pGVar1 = *(Graph **)this;
  *(undefined8 *)(this + 0x20) = uVar3;
  pOVar2 = (Operator *)CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(this + 8),2);
  local_40 = *(Node **)(this + 0x18);
  uStack_38 = *(undefined8 *)(this + 0x20);
  uVar3 = Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
  *(undefined8 *)(this + 0x28) = uVar3;
  return;
}

