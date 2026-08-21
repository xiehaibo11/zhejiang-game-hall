
/* v8::internal::DebugInfo::IsEmpty() const */

bool __thiscall v8::internal::DebugInfo::IsEmpty(DebugInfo *this)

{
  if (*(uint *)(*(long *)this + 0x1b) < 2) {
    return *(uint *)(*(long *)this + 7) < 2;
  }
  return false;
}

