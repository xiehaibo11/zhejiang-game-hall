
/* v8::internal::CoverageInfo::BlockCount(int) const */

int __thiscall v8::internal::CoverageInfo::BlockCount(CoverageInfo *this,int param_1)

{
  return *(int *)(*(long *)this + ((long)(param_1 << 4) | 0xfU)) >> 1;
}

