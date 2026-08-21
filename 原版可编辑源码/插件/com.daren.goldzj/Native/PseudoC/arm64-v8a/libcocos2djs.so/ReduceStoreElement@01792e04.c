
/* v8::internal::compiler::MemoryLowering::ReduceStoreElement(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceStoreElement
          (MemoryLowering *this,Node *param_1,AllocationState *param_2)

{
  Node *pNVar1;
  undefined8 uVar2;
  ElementAccess *pEVar3;
  Node *this_00;
  Node *this_01;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Use *pUVar8;
  
  pEVar3 = (ElementAccess *)ElementAccessOf(*(Operator **)param_1);
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  uVar2 = *(undefined8 *)pNVar6;
  uVar7 = *(undefined8 *)(pNVar6 + 0x10);
  this_00 = (Node *)ComputeIndex(this,pEVar3,*(Node **)(pNVar6 + 8));
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)(pNVar6 + 8);
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar8 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar8 = (Use *)(param_1 + -0x30);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar8);
    }
    *(Node **)(pNVar6 + 8) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar8);
    }
  }
  uVar4 = ComputeWriteBarrierKind(this,param_1,uVar2,uVar7,param_2,pEVar3[0x12]);
  pOVar5 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(this + 0x30),
                      (ulong)(byte)pEVar3[0x10] | (uVar4 & 0xff) << 8);
  NodeProperties::ChangeOp(param_1,pOVar5);
  return param_1;
}

