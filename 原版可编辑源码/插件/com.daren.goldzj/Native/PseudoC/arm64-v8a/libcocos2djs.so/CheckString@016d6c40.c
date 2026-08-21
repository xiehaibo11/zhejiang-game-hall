
/* v8::internal::compiler::JSCallReducerAssembler::CheckString(v8::internal::TNode<v8::internal::Object>)
    */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::CheckString
          (JSCallReducerAssembler *this,Node *param_2)

{
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar1 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::CheckString(this_01,(FeedbackSource *)(lVar1 + 8))
  ;
  uStack_40 = *(undefined8 *)(this + 0x20);
  local_38 = *(undefined8 *)(this + 0x28);
  local_48 = param_2;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,3,&local_48,false);
  GraphAssembler::AddNode((GraphAssembler *)this,pNVar3);
  return;
}

