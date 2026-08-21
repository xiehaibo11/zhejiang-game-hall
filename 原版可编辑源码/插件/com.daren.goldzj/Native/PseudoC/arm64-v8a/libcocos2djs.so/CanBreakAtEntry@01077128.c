
/* v8::internal::DebugInfo::CanBreakAtEntry() const */

byte __thiscall v8::internal::DebugInfo::CanBreakAtEntry(DebugInfo *this)

{
  return *(byte *)(*(long *)this + 0x1b) >> 5 & 1;
}

