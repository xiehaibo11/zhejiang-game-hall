
/* v8::internal::DebugInfo::DebugExecutionMode() const */

uint __thiscall v8::internal::DebugInfo::DebugExecutionMode(DebugInfo *this)

{
  return *(uint *)(*(long *)this + 0x1b) >> 1 & 0x20;
}

