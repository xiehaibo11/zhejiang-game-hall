
/* v8::internal::compiler::MemoryLowering::ReduceStoreToObject(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceStoreToObject
          (MemoryLowering *this,Node *param_1,AllocationState *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  
  pbVar1 = (byte *)ObjectAccessOf(*(Operator **)param_1);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  uVar2 = ComputeWriteBarrierKind
                    (this,param_1,*(undefined8 *)pNVar4,*(undefined8 *)(pNVar4 + 0x10),param_2,
                     pbVar1[2]);
  pOVar3 = (Operator *)
           MachineOperatorBuilder::Store
                     (*(MachineOperatorBuilder **)(this + 0x30),(ulong)*pbVar1 | (uVar2 & 0xff) << 8
                     );
  NodeProperties::ChangeOp(param_1,pOVar3);
  return param_1;
}

