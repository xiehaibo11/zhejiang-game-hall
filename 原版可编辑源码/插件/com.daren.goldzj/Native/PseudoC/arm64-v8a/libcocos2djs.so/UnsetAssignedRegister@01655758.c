
/* v8::internal::compiler::LiveRange::UnsetAssignedRegister() */

void __thiscall v8::internal::compiler::LiveRange::UnsetAssignedRegister(LiveRange *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffe07f | 0x1000;
  return;
}

