
/* v8::internal::compiler::MachineOperatorBuilder::Float64RoundDown() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Float64RoundDown(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 1 & 1;
}

