
/* v8::internal::ScopeInfo::ModuleVariableCountIndex() const */

int __thiscall v8::internal::ScopeInfo::ModuleVariableCountIndex(ScopeInfo *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (1 < *(int *)(lVar2 + 3)) {
    iVar1 = (*(int *)(lVar2 + 0xf) >> 1) + (*(int *)(lVar2 + 0xf) >> 1) +
            (*(uint *)(lVar2 + 7) >> 0xb & 1) + (uint)((*(uint *)(lVar2 + 7) & 0x6000) != 0) * 2 +
            (*(uint *)(lVar2 + 7) >> 0xf & 1);
    if ((*(uint *)(lVar2 + 7) >> 8 & 3) - 1 < 2) {
      iVar1 = iVar1 + 1;
    }
    return iVar1 + (uint)(((*(uint *)(lVar2 + 7) >> 1 & 0xf) - 1 & 0xff) < 4) * 2 + 4 +
           (*(uint *)(lVar2 + 7) >> 0x17 & 1);
  }
  return 4;
}

