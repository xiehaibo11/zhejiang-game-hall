
/* v8::internal::compiler::TopLevelLiveRange::GetSpillRangeOperand() const */

ulong __thiscall
v8::internal::compiler::TopLevelLiveRange::GetSpillRangeOperand(TopLevelLiveRange *this)

{
  return (ulong)(*(uint *)(this + 4) >> 8) & 0x1fe0 |
         (ulong)*(uint *)(*(long *)(this + 0x70) + 0x2c) << 0x23 | 0xc;
}

