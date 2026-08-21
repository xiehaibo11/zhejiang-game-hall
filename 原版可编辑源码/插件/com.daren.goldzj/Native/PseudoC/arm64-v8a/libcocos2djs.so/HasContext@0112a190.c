
/* v8::internal::ScopeInfo::HasContext() const */

bool __thiscall v8::internal::ScopeInfo::HasContext(ScopeInfo *this)

{
  int iVar1;
  
  iVar1 = ContextLength(this);
  return 0 < iVar1;
}

