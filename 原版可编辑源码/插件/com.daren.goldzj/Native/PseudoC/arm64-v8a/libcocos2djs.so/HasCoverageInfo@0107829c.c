
/* v8::internal::DebugInfo::HasCoverageInfo() const */

byte __thiscall v8::internal::DebugInfo::HasCoverageInfo(DebugInfo *this)

{
  return *(byte *)(*(long *)this + 0x1b) >> 3 & 1;
}

