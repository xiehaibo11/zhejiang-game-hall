
/* v8::internal::CompilationCache::LookupRegExp(v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>) */

void __thiscall
v8::internal::CompilationCache::LookupRegExp
          (CompilationCache *this,undefined8 param_2,undefined4 param_3)

{
  CompilationCacheRegExp::Lookup((CompilationCacheRegExp *)(this + 0x50),param_2,param_3);
  return;
}

