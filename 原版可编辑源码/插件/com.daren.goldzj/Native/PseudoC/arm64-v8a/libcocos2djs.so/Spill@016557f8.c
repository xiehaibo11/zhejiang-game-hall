
/* v8::internal::compiler::LiveRange::Spill() */

void __thiscall v8::internal::compiler::LiveRange::Spill(LiveRange *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffe07f | 0x1001;
  return;
}

