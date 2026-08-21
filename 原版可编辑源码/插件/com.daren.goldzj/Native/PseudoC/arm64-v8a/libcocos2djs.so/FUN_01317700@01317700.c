
void FUN_01317700(long param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 4:
    v8::internal::compiler::MachineGraph::Int32Constant(*(MachineGraph **)(param_1 + 8),0);
    return;
  case 5:
    v8::internal::compiler::MachineGraph::Int64Constant(*(MachineGraph **)(param_1 + 8),0);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xb:
    v8::internal::compiler::MachineGraph::Float32Constant(*(MachineGraph **)(param_1 + 8),0.0);
    return;
  case 0xc:
    v8::internal::compiler::MachineGraph::Float64Constant(*(MachineGraph **)(param_1 + 8),0.0);
    return;
  }
}

