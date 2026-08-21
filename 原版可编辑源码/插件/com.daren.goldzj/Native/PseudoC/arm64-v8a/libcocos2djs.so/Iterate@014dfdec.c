
/* v8::internal::CompilationCache::Iterate(v8::internal::RootVisitor*) */

void __thiscall v8::internal::CompilationCache::Iterate(CompilationCache *this,RootVisitor *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,9,0,lVar1,lVar1 + (long)*(int *)(*(long *)(this + 0x68) + 8) * 8);
  lVar1 = *(long *)(*(long *)(this + 0x70) + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,9,0,lVar1,lVar1 + (long)*(int *)(*(long *)(this + 0x70) + 8) * 8);
  lVar1 = *(long *)(*(long *)(this + 0x78) + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,9,0,lVar1,lVar1 + (long)*(int *)(*(long *)(this + 0x78) + 8) * 8);
  lVar1 = *(long *)(*(long *)(this + 0x80) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x014dfea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,9,0,lVar1,lVar1 + (long)*(int *)(*(long *)(this + 0x80) + 8) * 8);
  return;
}

