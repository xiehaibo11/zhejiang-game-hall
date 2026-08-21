
/* v8::internal::ScopeInfo::FunctionContextSlotIndex(v8::internal::String) const */

int __thiscall v8::internal::ScopeInfo::FunctionContextSlotIndex(ScopeInfo *this,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if ((1 < *(int *)(lVar2 + 3)) && ((*(uint *)(lVar2 + 7) & 0x6000) == 0x4000)) {
    iVar1 = (*(uint *)(lVar2 + 0xf) >> 1) + (*(uint *)(lVar2 + 0xf) >> 1) +
            (*(uint *)(lVar2 + 7) >> 0xb & 1);
    if ((*(uint *)(lVar2 + 7) >> 8 & 3) - 1 < 2) {
      iVar1 = iVar1 + 1;
    }
    if (*(int *)(lVar2 + 7 + (long)(iVar1 * 4 + 0xc)) == param_2) {
      iVar1 = (*(uint *)(lVar2 + 0xf) >> 1) + (*(uint *)(lVar2 + 0xf) >> 1) +
              (*(uint *)(lVar2 + 7) >> 0xb & 1);
      if ((*(uint *)(lVar2 + 7) >> 8 & 3) - 1 < 2) {
        iVar1 = iVar1 + 1;
      }
      return *(int *)(lVar2 + 7 + (long)(iVar1 * 4 + 0x10)) >> 1;
    }
  }
  return -1;
}

