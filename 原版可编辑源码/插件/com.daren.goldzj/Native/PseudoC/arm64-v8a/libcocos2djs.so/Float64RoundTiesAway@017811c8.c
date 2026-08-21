
/* v8::internal::compiler::MachineOperatorBuilder::Float64RoundTiesAway() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Float64RoundTiesAway(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 8 & 1;
}

