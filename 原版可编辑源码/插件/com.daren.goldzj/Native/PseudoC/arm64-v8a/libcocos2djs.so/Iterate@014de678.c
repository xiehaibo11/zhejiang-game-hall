
/* v8::internal::CompilationSubCache::Iterate(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::CompilationSubCache::Iterate(CompilationSubCache *this,RootVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x014de69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,9,0,*(long *)(this + 0x10),
             *(long *)(this + 0x10) + (long)*(int *)(this + 8) * 8);
  return;
}

