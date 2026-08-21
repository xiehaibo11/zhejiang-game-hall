
/* v8::internal::CoverageInfo::StartSourcePosition(int) const */

int __thiscall v8::internal::CoverageInfo::StartSourcePosition(CoverageInfo *this,int param_1)

{
  return *(int *)(*(long *)this + ((long)(param_1 << 4) | 7U)) >> 1;
}

