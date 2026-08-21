
/* v8::internal::compiler::JSCallReducerAssembler::CheckBounds(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >, v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >) */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::CheckBounds
          (JSCallReducerAssembler *this,Node *param_2,undefined8 param_3)

{
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  Node *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar1 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::CheckBounds(this_01,(FeedbackSource *)(lVar1 + 8))
  ;
  local_50 = *(undefined8 *)(this + 0x20);
  uStack_48 = *(undefined8 *)(this + 0x28);
  local_60 = param_2;
  uStack_58 = param_3;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,4,&local_60,false);
  GraphAssembler::AddNode((GraphAssembler *)this,pNVar3);
  return;
}

