
/* v8::internal::OptimizedCompilationInfo::native_context() const */

ulong __thiscall
v8::internal::OptimizedCompilationInfo::native_context(OptimizedCompilationInfo *this)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)(this + 0x20) & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(**(ulong **)(this + 0x20) + 0xf)) -
                                             1)) + 0x13);
}

