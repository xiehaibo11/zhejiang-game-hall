
/* v8::internal::compiler::RepresentationChanger::TaggedSignedOperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::TaggedSignedOperatorFor
          (RepresentationChanger *this,int param_2)

{
  if (param_2 == 0x72) {
    MachineOperatorBuilder::Word32Equal(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    return;
  }
  if (param_2 != 0x74) {
    if (param_2 == 0x73) {
      MachineOperatorBuilder::Int32LessThan
                (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  MachineOperatorBuilder::Int32LessThanOrEqual
            (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  return;
}

