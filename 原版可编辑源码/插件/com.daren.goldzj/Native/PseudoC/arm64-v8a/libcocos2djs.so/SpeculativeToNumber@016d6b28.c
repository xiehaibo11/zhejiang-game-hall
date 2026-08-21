
/* v8::internal::compiler::JSCallReducerAssembler::SpeculativeToNumber(v8::internal::TNode<v8::internal::Object>,
   v8::internal::compiler::NumberOperationHint) */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::SpeculativeToNumber
          (JSCallReducerAssembler *this,Node *param_2,undefined4 param_3)

{
  long lVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Graph *this_00;
  SimplifiedOperatorBuilder *pSVar4;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar4 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar1 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar2 = (Operator *)SimplifiedOperatorBuilder::SpeculativeToNumber(pSVar4,param_3,lVar1 + 8);
  uStack_50 = *(undefined8 *)(this + 0x20);
  local_48 = *(undefined8 *)(this + 0x28);
  local_58 = param_2;
  pNVar3 = (Node *)Graph::NewNode(this_00,pOVar2,3,&local_58,false);
  GraphAssembler::AddNode((GraphAssembler *)this,pNVar3);
  return;
}

