
/* v8::internal::SharedFunctionInfo::GetCoverageInfo() const */

ulong __thiscall v8::internal::SharedFunctionInfo::GetCoverageInfo(SharedFunctionInfo *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)this + 0xf)) + 0x1f);
}

