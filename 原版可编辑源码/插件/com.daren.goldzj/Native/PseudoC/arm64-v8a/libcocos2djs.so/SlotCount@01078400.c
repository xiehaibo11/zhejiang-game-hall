
/* v8::internal::CoverageInfo::SlotCount() const */

int __thiscall v8::internal::CoverageInfo::SlotCount(CoverageInfo *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)this + 3) >> 1;
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 >> 2;
}

