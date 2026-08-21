
/* v8::internal::CompilationCache::Remove(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall v8::internal::CompilationCache::Remove(CompilationCache *this,undefined8 param_2)

{
  if ((FLAG_compilation_cache != '\0') && (this[0x88] != (CompilationCache)0x0)) {
    CompilationSubCache::Remove((CompilationSubCache *)(this + 0x20));
    CompilationSubCache::Remove((CompilationSubCache *)(this + 0x38),param_2);
    CompilationSubCache::Remove((CompilationSubCache *)(this + 8),param_2);
    return;
  }
  return;
}

