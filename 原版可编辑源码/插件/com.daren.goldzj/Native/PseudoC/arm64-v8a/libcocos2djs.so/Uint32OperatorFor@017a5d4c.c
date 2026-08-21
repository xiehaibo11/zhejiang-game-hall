
/* v8::internal::compiler::RepresentationChanger::Uint32OperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::Uint32OperatorFor
          (RepresentationChanger *this,undefined4 param_2)

{
  switch(param_2) {
  case 0x6f:
  case 0x72:
    MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x70:
  case 0x73:
    MachineOperatorBuilder::Uint32LessThan(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10))
    ;
    return;
  case 0x71:
  case 0x74:
    MachineOperatorBuilder::Uint32LessThanOrEqual
              (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x7c:
    MachineOperatorBuilder::Int32Add(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x7d:
    MachineOperatorBuilder::Int32Sub(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x7e:
  case 0x88:
  case 0x90:
    MachineOperatorBuilder::Int32Mul(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x7f:
  case 0x91:
    MachineOperatorBuilder::Uint32Div(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0x80:
  case 0x92:
    MachineOperatorBuilder::Uint32Mod(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  case 0xa4:
    MachineOperatorBuilder::Word32Clz(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  }
}

