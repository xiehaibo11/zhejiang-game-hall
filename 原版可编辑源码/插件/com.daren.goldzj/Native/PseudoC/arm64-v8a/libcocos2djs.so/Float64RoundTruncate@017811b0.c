
/* v8::internal::compiler::MachineOperatorBuilder::Float64RoundTruncate() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Float64RoundTruncate(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 5 & 1;
}

