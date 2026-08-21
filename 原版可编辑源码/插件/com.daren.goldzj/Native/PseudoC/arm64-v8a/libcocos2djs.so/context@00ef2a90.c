
/* v8::internal::OptimizedCompilationInfo::context() const */

ulong __thiscall v8::internal::OptimizedCompilationInfo::context(OptimizedCompilationInfo *this)

{
  return **(ulong **)(this + 0x20) & 0xffffffff00000000 |
         (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xf);
}

