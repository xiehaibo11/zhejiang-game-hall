
/* v8::internal::compiler::MachineOperatorReducer::ReduceFloat64InsertLowWord32(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceFloat64InsertLowWord32
          (MachineOperatorReducer *this,Node *param_1)

{
  short sVar1;
  undefined8 uVar2;
  Node *pNVar3;
  Node *pNVar4;
  ulong uVar5;
  
  pNVar3 = param_1 + 0x20;
  pNVar4 = pNVar3;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  sVar1 = *(short *)(**(long **)pNVar4 + 0x10);
  if (sVar1 == 0x1a) {
    uVar5 = (ulong)*(uint *)(**(long **)pNVar4 + 0x34) << 0x20;
  }
  else {
    uVar5 = 0;
  }
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  uVar2 = 0;
  if ((sVar1 == 0x1a) && (*(short *)(**(long **)(pNVar3 + 8) + 0x10) == 0x17)) {
    uVar2 = MachineGraph::Float64Constant
                      (*(MachineGraph **)(this + 0x10),
                       (double)(uVar5 | *(uint *)(**(long **)(pNVar3 + 8) + 0x2c)));
  }
  return uVar2;
}

