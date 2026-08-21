
/* v8::internal::compiler::MachineOperatorBuilder::Float64RoundTiesEven() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Float64RoundTiesEven(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 7 & 1;
}

