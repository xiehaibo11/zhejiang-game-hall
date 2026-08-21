
/* v8::internal::compiler::JSTypedLowering::ReduceJSLoadMessage(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSLoadMessage(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  Node *this_00;
  Node *this_01;
  Operator *pOVar3;
  Use *pUVar4;
  Node *pNVar5;
  
  uVar2 = ExternalReference::address_of_pending_message_obj
                    (*(Isolate **)(*(long *)(this + 0x10) + 0x168));
  this_00 = (Node *)MachineGraph::ExternalConstant(*(MachineGraph **)(this + 0x10),uVar2);
  pNVar1 = param_1 + 0x20;
  pNVar5 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar5 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)pNVar5;
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar4 = (Use *)(*(long *)pNVar1 + -0x18);
    }
    else {
      pUVar4 = (Use *)(param_1 + -0x18);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar4);
    }
    *(Node **)pNVar5 = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar4);
    }
  }
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::LoadMessage
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

