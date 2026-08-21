
/* v8::internal::compiler::MemoryLowering::ReduceLoadElement(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceLoadElement(MemoryLowering *this,Node *param_1)

{
  Node *pNVar1;
  int iVar2;
  ElementAccess *pEVar3;
  Node *this_00;
  Node *this_01;
  Operator *pOVar4;
  MachineOperatorBuilder *pMVar5;
  Node *pNVar6;
  Use *pUVar7;
  
  pEVar3 = (ElementAccess *)ElementAccessOf(*(Operator **)param_1);
  pNVar1 = param_1 + 0x20;
  pNVar6 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = (Node *)ComputeIndex(this,pEVar3,*(Node **)(pNVar6 + 8));
  pNVar6 = pNVar1;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_01 = *(Node **)(pNVar6 + 8);
  if (this_01 != this_00) {
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pUVar7 = (Use *)(*(long *)pNVar1 + -0x30);
    }
    else {
      pUVar7 = (Use *)(param_1 + -0x30);
    }
    if (this_01 != (Node *)0x0) {
      Node::RemoveUse(this_01,pUVar7);
    }
    *(Node **)(pNVar6 + 8) = this_00;
    if (this_00 != (Node *)0x0) {
      Node::AppendUse(this_00,pUVar7);
    }
  }
  if (*(int *)(pEVar3 + 0x14) == 2) {
LAB_01792c50:
    pMVar5 = *(MachineOperatorBuilder **)(this + 0x30);
  }
  else {
    iVar2 = *(int *)(this + 0x44);
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::PoisonedLoad
                           (*(MachineOperatorBuilder **)(this + 0x30),*(undefined2 *)(pEVar3 + 0x10)
                           );
        goto LAB_01792c58;
      }
      goto LAB_01792c50;
    }
    pMVar5 = *(MachineOperatorBuilder **)(this + 0x30);
    if (*(int *)(pEVar3 + 0x14) == 0) {
      pOVar4 = (Operator *)
               MachineOperatorBuilder::PoisonedLoad(pMVar5,*(undefined2 *)(pEVar3 + 0x10));
      goto LAB_01792c58;
    }
  }
  pOVar4 = (Operator *)MachineOperatorBuilder::Load(pMVar5);
LAB_01792c58:
  NodeProperties::ChangeOp(param_1,pOVar4);
  return param_1;
}

