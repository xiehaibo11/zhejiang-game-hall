
/* v8::internal::compiler::RepresentationChanger::Int32OperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::Int32OperatorFor
          (RepresentationChanger *this,undefined4 param_2)

{
  switch(param_2) {
  case 0x6f:
  case 0x72:
    MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x70:
  case 0x73:
    MachineOperatorBuilder::Int32LessThan(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x71:
  case 0x74:
    MachineOperatorBuilder::Int32LessThanOrEqual
              (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x7c:
  case 0x8e:
  case 0x99:
    MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x7d:
  case 0x8f:
  case 0x9a:
    MachineOperatorBuilder::Int32Sub(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x7e:
  case 0x90:
    MachineOperatorBuilder::Int32Mul(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x7f:
  case 0x91:
    MachineOperatorBuilder::Int32Div(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x80:
  case 0x92:
    MachineOperatorBuilder::Int32Mod(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x81:
  case 0x94:
    MachineOperatorBuilder::Word32Or(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x82:
  case 0x95:
    MachineOperatorBuilder::Word32Xor(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x83:
  case 0x93:
    MachineOperatorBuilder::Word32And(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  }
}

