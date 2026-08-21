
/* v8::internal::compiler::MemoryLowering::ReduceStore(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

Node * __thiscall
v8::internal::compiler::MemoryLowering::ReduceStore
          (MemoryLowering *this,Node *param_1,AllocationState *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  Operator *pOVar5;
  Node *pNVar6;
  
  puVar4 = (ushort *)StoreRepresentationOf(*(Operator **)param_1);
  uVar1 = *puVar4;
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  uVar2 = uVar1 >> 8;
  uVar3 = ComputeWriteBarrierKind
                    (this,param_1,*(undefined8 *)pNVar6,*(undefined8 *)(pNVar6 + 0x10),param_2,uVar2
                    );
  if (uVar2 == (uVar3 & 0xff)) {
    param_1 = (Node *)0x0;
  }
  else {
    pOVar5 = (Operator *)
             MachineOperatorBuilder::Store
                       (*(MachineOperatorBuilder **)(this + 0x30),uVar1 & 0xff | uVar3 << 8);
    NodeProperties::ChangeOp(param_1,pOVar5);
  }
  return param_1;
}

