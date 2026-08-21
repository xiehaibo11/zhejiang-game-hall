
/* v8::internal::ScopeInfo::is_declaration_scope() const */

uint __thiscall v8::internal::ScopeInfo::is_declaration_scope(ScopeInfo *this)

{
  if (1 < *(int *)(*(long *)this + 3)) {
    return *(uint *)(*(long *)this + 7) >> 7 & 1;
  }
  return 0;
}

