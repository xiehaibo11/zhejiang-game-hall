
/* v8::internal::compiler::MemoryLowering::ReduceLoadField(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceLoadField(MemoryLowering *this,Node *param_1)

{
  int iVar1;
  char *pcVar2;
  Node *pNVar3;
  Operator *pOVar4;
  MachineOperatorBuilder *pMVar5;
  
  pcVar2 = (char *)FieldAccessOf(*(Operator **)param_1);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant
                             (*(GraphAssembler **)(this + 0x38),
                              (long)*(int *)(pcVar2 + 4) - (ulong)(*pcVar2 == '\x01'));
  Node::InsertInput(param_1,*(Zone **)(this + 0x20),1,pNVar3);
  if (*(int *)(pcVar2 + 0x24) == 2) {
LAB_01792d24:
    pMVar5 = *(MachineOperatorBuilder **)(this + 0x30);
  }
  else {
    iVar1 = *(int *)(this + 0x44);
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::PoisonedLoad
                           (*(MachineOperatorBuilder **)(this + 0x30),*(undefined2 *)(pcVar2 + 0x20)
                           );
        goto LAB_01792d2c;
      }
      goto LAB_01792d24;
    }
    pMVar5 = *(MachineOperatorBuilder **)(this + 0x30);
    if (*(int *)(pcVar2 + 0x24) == 0) {
      pOVar4 = (Operator *)
               MachineOperatorBuilder::PoisonedLoad(pMVar5,*(undefined2 *)(pcVar2 + 0x20));
      goto LAB_01792d2c;
    }
  }
  pOVar4 = (Operator *)MachineOperatorBuilder::Load(pMVar5);
LAB_01792d2c:
  NodeProperties::ChangeOp(param_1,pOVar4);
  return param_1;
}

