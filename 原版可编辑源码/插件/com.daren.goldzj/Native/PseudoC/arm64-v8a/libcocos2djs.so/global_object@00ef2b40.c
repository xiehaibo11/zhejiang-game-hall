
/* v8::internal::OptimizedCompilationInfo::global_object() const */

void __thiscall
v8::internal::OptimizedCompilationInfo::global_object(OptimizedCompilationInfo *this)

{
  ulong local_18;
  
  local_18 = **(ulong **)(this + 0x20) & 0xffffffff00000000;
  local_18 = local_18 |
             *(uint *)((local_18 |
                       *(uint *)((local_18 | *(uint *)(**(ulong **)(this + 0x20) + 0xf)) - 1)) +
                      0x13);
  Context::global_object((Context *)&local_18);
  return;
}

