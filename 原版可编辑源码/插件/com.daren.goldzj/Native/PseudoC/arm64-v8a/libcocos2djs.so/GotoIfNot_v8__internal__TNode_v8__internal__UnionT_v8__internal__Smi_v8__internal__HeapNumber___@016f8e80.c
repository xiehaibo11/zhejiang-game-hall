
/* void 
   v8::internal::compiler::GraphAssembler::GotoIfNot<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >, v8::internal::TNode<v8::internal::Object>
   >(v8::internal::compiler::Node*, v8::internal::compiler::GraphAssemblerLabel<2>*,
   v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi, v8::internal::HeapNumber> >,
   v8::internal::TNode<v8::internal::Object>) */

void __thiscall
v8::internal::compiler::GraphAssembler::
GotoIfNot<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>,v8::internal::TNode<v8::internal::Object>>
          (GraphAssembler *this,Node *param_1,long param_2,undefined8 param_4,undefined8 param_5)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  undefined8 uVar4;
  Node *local_50;
  undefined8 uStack_48;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],
                      *(int *)(param_2 + 4) == 0,1);
  uStack_48 = *(undefined8 *)(this + 0x28);
  local_50 = param_1;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_50,false);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  local_50 = pNVar3;
  uVar4 = Graph::NewNode(pGVar1,pOVar2,1,&local_50,false);
  *(undefined8 *)(this + 0x28) = uVar4;
  MergeState<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>,v8::internal::TNode<v8::internal::Object>>
            (this,param_2,param_4,param_5);
  GotoIfBasicBlock(this,*(undefined8 *)(param_2 + 8),pNVar3,5);
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
  local_50 = pNVar3;
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,1,&local_50,false);
  uVar4 = AddNode(this,pNVar3);
  *(undefined8 *)(this + 0x28) = uVar4;
  return;
}

