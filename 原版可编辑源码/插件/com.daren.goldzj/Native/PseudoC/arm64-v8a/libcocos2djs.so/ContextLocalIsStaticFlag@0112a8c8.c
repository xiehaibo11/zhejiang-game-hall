
/* v8::internal::ScopeInfo::ContextLocalIsStaticFlag(int) const */

uint __thiscall v8::internal::ScopeInfo::ContextLocalIsStaticFlag(ScopeInfo *this,int param_1)

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
  return *(uint *)(lVar1 + (iVar2 + param_1) * 4 + 7) >> 0x17 & 1;
}

