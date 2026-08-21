
/* v8::internal::ScopeInfo::ContextLocalIsParameter(int) const */

bool __thiscall v8::internal::ScopeInfo::ContextLocalIsParameter(ScopeInfo *this,int param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)this;
  if (*(int *)(lVar1 + 3) < 2) {
    iVar2 = 3;
  }
  else {
    iVar2 = (*(int *)(lVar1 + 0xf) >> 1) + 3;
  }
  return ((*(uint *)(lVar1 + (iVar2 + param_1) * 4 + 7) ^ 0xffffffff) & 0x7fff80) != 0;
}

