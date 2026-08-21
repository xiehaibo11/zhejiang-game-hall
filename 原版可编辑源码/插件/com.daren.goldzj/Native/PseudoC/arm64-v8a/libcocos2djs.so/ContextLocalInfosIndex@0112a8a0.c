
/* v8::internal::ScopeInfo::ContextLocalInfosIndex() const */

int __thiscall v8::internal::ScopeInfo::ContextLocalInfosIndex(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return (*(int *)(*(long *)this + 0xf) >> 1) + 3;
  }
  return 3;
}

