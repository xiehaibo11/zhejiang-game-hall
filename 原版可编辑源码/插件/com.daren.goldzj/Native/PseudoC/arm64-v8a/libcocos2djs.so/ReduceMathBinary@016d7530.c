
/* v8::internal::compiler::JSCallReducerAssembler::ReduceMathBinary(v8::internal::compiler::Operator
   const*) */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::ReduceMathBinary
          (JSCallReducerAssembler *this,Operator *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  long lVar3;
  Operator *pOVar4;
  Graph *pGVar5;
  SimplifiedOperatorBuilder *pSVar6;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pNVar1 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),2);
  if (*(int *)(*(long *)*(Node **)(this + 0x38) + 0x14) < 4) {
    pNVar2 = (Node *)GraphAssembler::NaNConstant((GraphAssembler *)this);
  }
  else {
    pNVar2 = (Node *)NodeProperties::GetValueInput(*(Node **)(this + 0x38),3);
  }
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar3 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::SpeculativeToNumber(pSVar6,4,lVar3 + 8);
  uStack_50 = *(undefined8 *)(this + 0x20);
  local_48 = *(undefined8 *)(this + 0x28);
  local_58 = pNVar1;
  pNVar1 = (Node *)Graph::NewNode(pGVar5,pOVar4,3,&local_58,false);
  pNVar1 = (Node *)GraphAssembler::AddNode((GraphAssembler *)this,pNVar1);
  pGVar5 = (Graph *)**(undefined8 **)(this + 0x18);
  pSVar6 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f];
  lVar3 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::SpeculativeToNumber(pSVar6,4,lVar3 + 8);
  uStack_50 = *(undefined8 *)(this + 0x20);
  local_48 = *(undefined8 *)(this + 0x28);
  local_58 = pNVar2;
  pNVar2 = (Node *)Graph::NewNode(pGVar5,pOVar4,3,&local_58,false);
  uStack_50 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar2);
  local_58 = pNVar1;
  Graph::NewNode((Graph *)**(undefined8 **)(this + 0x18),param_1,2,&local_58,false);
  return;
}

