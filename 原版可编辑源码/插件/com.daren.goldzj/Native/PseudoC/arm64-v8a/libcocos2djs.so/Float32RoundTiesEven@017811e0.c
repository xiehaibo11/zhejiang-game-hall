
/* v8::internal::compiler::MachineOperatorBuilder::Float32RoundTiesEven() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Float32RoundTiesEven(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 6 & 1;
}

