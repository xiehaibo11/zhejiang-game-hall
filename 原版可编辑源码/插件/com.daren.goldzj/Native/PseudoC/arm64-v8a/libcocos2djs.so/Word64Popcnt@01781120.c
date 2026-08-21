
/* v8::internal::compiler::MachineOperatorBuilder::Word64Popcnt() */

uint __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word64Popcnt(MachineOperatorBuilder *this)

{
  return *(uint *)(this + 0x14) >> 0xf & 1;
}

