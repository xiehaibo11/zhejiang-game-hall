
/* void v8::internal::compiler::GraphAssembler::GotoIf<>(v8::internal::compiler::Node*,
   v8::internal::compiler::GraphAssemblerLabel<0>*) */

void __thiscall
v8::internal::compiler::GraphAssembler::GotoIf<>
          (GraphAssembler *this,Node *param_1,GraphAssemblerLabel *param_2)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *local_40;
  undefined8 uStack_38;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],
                      (ulong)(*(int *)(param_2 + 4) == 0) << 1,1);
  uStack_38 = *(undefined8 *)(this + 0x28);
  local_40 = param_1;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  local_40 = pNVar3;
  uVar4 = Graph::NewNode(pGVar1,pOVar2,1,&local_40,false);
  *(undefined8 *)(this + 0x28) = uVar4;
  MergeState<>(this,param_2);
  GotoIfBasicBlock(this,*(undefined8 *)(param_2 + 8),pNVar3,4);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  local_40 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_40,false);
  uVar4 = AddNode(this,pNVar3);
  *(undefined8 *)(this + 0x28) = uVar4;
  return;
}

