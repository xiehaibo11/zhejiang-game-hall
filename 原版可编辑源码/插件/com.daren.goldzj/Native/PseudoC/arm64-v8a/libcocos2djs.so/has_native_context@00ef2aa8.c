
/* v8::internal::OptimizedCompilationInfo::has_native_context() const */

bool __thiscall
v8::internal::OptimizedCompilationInfo::has_native_context(OptimizedCompilationInfo *this)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(ulong **)(this + 0x20) != (ulong *)0x0) {
    uVar1 = **(ulong **)(this + 0x20);
    uVar2 = uVar1 & 0xffffffff00000000;
    return *(int *)((uVar2 | *(uint *)((uVar2 | *(uint *)(uVar1 + 0xf)) - 1)) + 0x13) != 0;
  }
  return false;
}

