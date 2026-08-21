
/* v8::internal::ScopeInfo::HasInferredFunctionName() const */

uint __thiscall v8::internal::ScopeInfo::HasInferredFunctionName(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0xf & 1;
  }
  return 0;
}

