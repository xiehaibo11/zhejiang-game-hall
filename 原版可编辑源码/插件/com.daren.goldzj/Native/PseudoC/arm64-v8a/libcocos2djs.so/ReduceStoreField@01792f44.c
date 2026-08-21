
/* v8::internal::compiler::MemoryLowering::ReduceStoreField(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceStoreField
          (MemoryLowering *this,Node *param_1,AllocationState *param_2)

{
  char *pcVar1;
  ulong uVar2;
  Node *pNVar3;
  Operator *pOVar4;
  
  pcVar1 = (char *)FieldAccessOf(*(Operator **)param_1);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  uVar2 = ComputeWriteBarrierKind
                    (this,param_1,*(undefined8 *)pNVar3,*(undefined8 *)(pNVar3 + 8),param_2,
                     pcVar1[0x22]);
  pNVar3 = (Node *)GraphAssembler::IntPtrConstant
                             (*(GraphAssembler **)(this + 0x38),
                              (long)*(int *)(pcVar1 + 4) - (ulong)(*pcVar1 == '\x01'));
  Node::InsertInput(param_1,*(Zone **)(this + 0x20),1,pNVar3);
  pOVar4 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(this + 0x30),
                      (ulong)(byte)pcVar1[0x20] | (uVar2 & 0xff) << 8);
  NodeProperties::ChangeOp(param_1,pOVar4);
  return param_1;
}

