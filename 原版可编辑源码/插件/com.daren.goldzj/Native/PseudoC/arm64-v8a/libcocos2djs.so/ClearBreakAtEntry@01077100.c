
/* v8::internal::DebugInfo::ClearBreakAtEntry() */

void __thiscall v8::internal::DebugInfo::ClearBreakAtEntry(DebugInfo *this)

{
  *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) & 0xffffffee;
  return;
}

