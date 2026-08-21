
/* v8::internal::compiler::JSTypedLowering::ReduceJSStoreMessage(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSStoreMessage(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  Node *this_00;
  Node *pNVar3;
  Node *this_01;
  Operator *pOVar4;
  Use *pUVar5;
  Node *pNVar6;
  
  uVar2 = ExternalReference::address_of_pending_message_obj
                    (*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  this_00 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)MachineGraph::ExternalConstant(*(MachineGraph **)(this + 0x10),uVar2);
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar6;
  if (this_01 != pNVar3) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar5);
    }
    *(Node **)pNVar6 = pNVar3;
    if (pNVar3 != (Node *)0x0) {
      Node::AppendUse(pNVar3,pUVar5);
    }
  }
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  pNVar3 = *(Node **)(pNVar6 + 8);
  if (pNVar3 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar5 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar5 = (Use *)(param_1 + -0x30);
    }
    if (pNVar3 != (Node *)0x0) {
      Node::RemoveUse(pNVar3,pUVar5);
    }
    *(Node **)(pNVar6 + 8) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar5);
    }
  }
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::StoreMessage
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  NodeProperties::ChangeOp(param_1,pOVar4);
  return param_1;
}

