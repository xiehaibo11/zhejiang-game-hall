
/* v8::internal::CoverageInfo::EndSourcePosition(int) const */

int __thiscall v8::internal::CoverageInfo::EndSourcePosition(CoverageInfo *this,int param_1)

{
  return *(int *)(*(long *)this + (long)(int)(param_1 << 4 | 4) + 7) >> 1;
}

