
/* v8::internal::ScopeInfo::PrivateNameLookupSkipsOuterClass() const */

uint __thiscall v8::internal::ScopeInfo::PrivateNameLookupSkipsOuterClass(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 0x1a & 1;
  }
  return 0;
}

