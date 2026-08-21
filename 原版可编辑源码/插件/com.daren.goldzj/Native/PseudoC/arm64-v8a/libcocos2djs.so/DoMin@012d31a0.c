
/* v8::internal::compiler::SimplifiedLowering::DoMin(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*, v8::internal::MachineRepresentation) */

void __thiscall
v8::internal::compiler::SimplifiedLowering::DoMin
          (SimplifiedLowering *this,Node *param_1,Operator *param_2,undefined4 param_4)

{
  Node *pNVar1;
  Operator *pOVar2;
  Zone *pZVar3;
  Node *local_40;
  undefined8 uStack_38;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  local_40 = *(Node **)pNVar1;
  uStack_38 = *(undefined8 *)(pNVar1 + 8);
  pZVar3 = *(Zone **)**(undefined8 **)this;
  pNVar1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)this,param_2,2,&local_40,false);
  Node::InsertInput(param_1,pZVar3,0,pNVar1);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Select(*(CommonOperatorBuilder **)(*(long *)this + 8),param_4,0);
  NodeProperties::ChangeOp(param_1,pOVar2);
  return;
}

