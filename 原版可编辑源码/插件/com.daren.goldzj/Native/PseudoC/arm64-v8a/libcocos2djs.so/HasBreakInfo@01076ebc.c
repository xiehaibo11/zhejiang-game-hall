
/* v8::internal::DebugInfo::HasBreakInfo() const */

byte __thiscall v8::internal::DebugInfo::HasBreakInfo(DebugInfo *this)

{
  return *(byte *)(*(long *)this + 0x1b) >> 1 & 1;
}

