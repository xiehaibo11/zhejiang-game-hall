
/* v8::internal::compiler::RepresentationChanger::Int64OperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::Int64OperatorFor
          (RepresentationChanger *this,int param_2)

{
  uint uVar1;
  
  if (param_2 - 0x7cU < 0x1f) {
    uVar1 = 1 << (ulong)(param_2 - 0x7cU & 0x1f);
    if ((uVar1 & 0x20040001) != 0) {
      MachineOperatorBuilder::Int64Add(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      return;
    }
    if ((uVar1 & 0x40080002) != 0) {
      MachineOperatorBuilder::Int64Sub(*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

