
/* v8::internal::CompilationCache::PutScript(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::LanguageMode,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall
v8::internal::CompilationCache::PutScript
          (CompilationCache *this,undefined8 param_2,undefined8 param_3,uint param_4,
          undefined8 *param_5)

{
  ulong uVar1;
  Logger *this_00;
  
  if ((FLAG_compilation_cache != '\0') && (this[0x88] != (CompilationCache)0x0)) {
    this_00 = *(Logger **)(*(long *)this + 0x9558);
    uVar1 = Logger::is_logging(this_00);
    if ((uVar1 & 1) != 0) {
      Logger::CompilationCacheEvent(this_00,"put","script",*param_5);
    }
    CompilationCacheScript::Put
              ((CompilationCacheScript *)(this + 8),param_2,param_3,param_4 & 1,param_5);
    return;
  }
  return;
}

