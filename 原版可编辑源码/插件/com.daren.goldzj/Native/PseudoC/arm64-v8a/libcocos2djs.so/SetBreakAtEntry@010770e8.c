
/* v8::internal::DebugInfo::SetBreakAtEntry() */

void __thiscall v8::internal::DebugInfo::SetBreakAtEntry(DebugInfo *this)

{
  *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) & 0xfffffffe | 0x10;
  return;
}

