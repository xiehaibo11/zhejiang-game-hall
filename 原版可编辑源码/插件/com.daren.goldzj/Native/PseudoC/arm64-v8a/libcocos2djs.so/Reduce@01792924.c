
/* v8::internal::compiler::MemoryLowering::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall v8::internal::compiler::MemoryLowering::Reduce(MemoryLowering *this,Node *param_1)

{
  Operator *pOVar1;
  long lVar2;
  Node *pNVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined2 *puVar6;
  
  pOVar1 = *(Operator **)param_1;
  pNVar3 = (Node *)0x0;
  switch(*(short *)(pOVar1 + 0x10)) {
  case 0xe7:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xe8:
    lVar2 = AllocateParametersOf(pOVar1);
    pNVar3 = (Node *)ReduceAllocateRaw(this,param_1,*(undefined1 *)(lVar2 + 8),
                                       *(undefined4 *)(lVar2 + 0xc),0);
    return pNVar3;
  case 0xe9:
  case 0xec:
  case 0xed:
  case 0xef:
  case 0xf0:
  case 0xf3:
  case 0xf4:
    goto switchD_01792968_caseD_e9;
  case 0xea:
    pNVar3 = (Node *)ReduceLoadField(this,param_1);
    return pNVar3;
  case 0xeb:
    pNVar3 = (Node *)ReduceLoadElement(this,param_1);
    return pNVar3;
  case 0xee:
    puVar6 = (undefined2 *)ObjectAccessOf(pOVar1);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(this + 0x30),*puVar6);
    break;
  case 0xf1:
    pNVar3 = (Node *)ReduceStoreField(this,param_1,(AllocationState *)0x0);
    return pNVar3;
  case 0xf2:
    pNVar3 = (Node *)ReduceStoreElement(this,param_1,(AllocationState *)0x0);
    return pNVar3;
  case 0xf5:
    pbVar4 = (byte *)ObjectAccessOf(pOVar1);
    pNVar3 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    uVar5 = ComputeWriteBarrierKind
                      (this,param_1,*(undefined8 *)pNVar3,*(undefined8 *)(pNVar3 + 0x10),0,pbVar4[2]
                      );
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Store
                       (*(MachineOperatorBuilder **)(this + 0x30),
                        (ulong)*pbVar4 | (uVar5 & 0xff) << 8);
    break;
  default:
    if (*(short *)(pOVar1 + 0x10) == 0x1ac) {
      pNVar3 = (Node *)ReduceStore(this,param_1,(AllocationState *)0x0);
      return pNVar3;
    }
    goto switchD_01792968_caseD_e9;
  }
  NodeProperties::ChangeOp(param_1,pOVar1);
  pNVar3 = param_1;
switchD_01792968_caseD_e9:
  return pNVar3;
}

