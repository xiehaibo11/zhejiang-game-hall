
/* v8::internal::CompilationCache::LookupScript(v8::internal::Handle<v8::internal::String>,
   v8::internal::MaybeHandle<v8::internal::Object>, int, int, v8::ScriptOriginOptions,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode) */

undefined8 v8::internal::CompilationCache::LookupScript(long param_1)

{
  undefined8 uVar1;
  
  if ((FLAG_compilation_cache != '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
    uVar1 = CompilationCacheScript::Lookup((CompilationCacheScript *)(param_1 + 8));
    return uVar1;
  }
  return 0;
}

