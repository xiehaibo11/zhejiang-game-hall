
/* v8::internal::DebugInfo::BreakAtEntry() const */

byte __thiscall v8::internal::DebugInfo::BreakAtEntry(DebugInfo *this)

{
  return *(byte *)(*(long *)this + 0x1b) >> 4 & 1;
}

