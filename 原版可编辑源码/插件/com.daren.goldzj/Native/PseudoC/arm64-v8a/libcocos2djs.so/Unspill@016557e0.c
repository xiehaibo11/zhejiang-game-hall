
/* v8::internal::compiler::LiveRange::Unspill() */

void __thiscall v8::internal::compiler::LiveRange::Unspill(LiveRange *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffe07e | 0x1000;
  return;
}

