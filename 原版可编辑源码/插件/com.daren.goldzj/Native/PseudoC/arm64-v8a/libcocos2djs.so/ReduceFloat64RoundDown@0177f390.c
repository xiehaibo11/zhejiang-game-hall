
/* v8::internal::compiler::MachineOperatorReducer::ReduceFloat64RoundDown(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceFloat64RoundDown
          (MachineOperatorReducer *this,Node *param_1)

{
  undefined8 uVar1;
  Node *pNVar2;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  if (*(short *)(**(long **)pNVar2 + 0x10) == 0x1a) {
    uVar1 = MachineGraph::Float64Constant
                      (*(MachineGraph **)(this + 0x10),
                       (double)(long)*(double *)(**(long **)pNVar2 + 0x30));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

