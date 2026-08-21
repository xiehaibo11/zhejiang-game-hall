
/* v8::internal::ScopeInfo::ContextLocalName(int) const */

ulong __thiscall v8::internal::ScopeInfo::ContextLocalName(ScopeInfo *this,int param_1)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (long)(param_1 * 4 + 0xc) + 7);
}

