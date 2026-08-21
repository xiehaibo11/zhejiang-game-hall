
/* void v8::internal::compiler::GraphAssembler::BranchImpl<v8::internal::TNode<v8::internal::Object>
   >(v8::internal::compiler::Node*, v8::internal::compiler::GraphAssemblerLabel<1>*,
   v8::internal::compiler::GraphAssemblerLabel<1>*, v8::internal::compiler::BranchHint,
   v8::internal::compiler::IsSafetyCheck, v8::internal::TNode<v8::internal::Object>) */

void __thiscall
v8::internal::compiler::GraphAssembler::BranchImpl<v8::internal::TNode<v8::internal::Object>>
          (GraphAssembler *this,Node *param_1,long param_2,long param_3,undefined4 param_5,
          undefined4 param_6,undefined8 param_7)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *local_60;
  undefined8 uStack_58;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],param_5,param_6);
  uStack_58 = *(undefined8 *)(this + 0x28);
  local_60 = param_1;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_60,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  local_60 = pNVar3;
  pNVar4 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_60,false);
  *(Node **)(this + 0x28) = pNVar4;
  MergeState<v8::internal::TNode<v8::internal::Object>>(this,param_2,param_7);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  local_60 = pNVar3;
  pNVar5 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_60,false);
  *(Node **)(this + 0x28) = pNVar5;
  MergeState<v8::internal::TNode<v8::internal::Object>>(this,param_3,param_7);
  if (*(long *)(this + 0x30) != 0) {
    RecordBranchInBlockUpdater
              (this,pNVar3,pNVar4,pNVar5,*(BasicBlock **)(param_2 + 8),*(BasicBlock **)(param_3 + 8)
              );
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

