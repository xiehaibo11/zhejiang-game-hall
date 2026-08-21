
/* v8::internal::compiler::MachineOperatorBuilder::Float64RoundUp() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Float64RoundUp(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 3 & 1;
}

