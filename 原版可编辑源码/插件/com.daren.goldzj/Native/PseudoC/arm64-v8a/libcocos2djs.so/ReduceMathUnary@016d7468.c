
/* v8::internal::compiler::JSCallReducerAssembler::ReduceMathUnary(v8::internal::compiler::Operator
   const*) */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::ReduceMathUnary
          (JSCallReducerAssembler *this,Operator *param_1)

{
  Node *pNVar1;
  long lVar2;
  Operator *pOVar3;
  Graph *this_00;
  SimplifiedOperatorBuilder *pSVar4;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  this_00 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar4 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar2 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar3 = (Operator *)SimplifiedOperatorBuilder::SpeculativeToNumber(pSVar4,4,lVar2 + 8);
  uStack_50 = *(undefined8 *)(this + 0x20);
  local_48 = *(undefined8 *)(this + 0x28);
  local_58 = pNVar1;
  pNVar1 = (Node *)Graph::NewNode(this_00,pOVar3,3,&local_58,false);
  local_58 = (Node *)GraphAssembler::AddNode((GraphAssembler *)this,pNVar1);
  Graph::NewNode((Graph *)**(undefined8 **)(this + 0x18),param_1,1,&local_58,false);
  return;
}

