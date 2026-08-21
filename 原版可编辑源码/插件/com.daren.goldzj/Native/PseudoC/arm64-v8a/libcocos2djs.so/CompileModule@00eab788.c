
/* v8::ScriptCompiler::CompileModule(v8::Isolate*, v8::ScriptCompiler::Source*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason) */

void v8::ScriptCompiler::CompileModule
               (Factory *param_1,long param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  
  if (1 < param_3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","options == kNoCompileOptions || options == kConsumeCodeCache");
  }
  if ((*(byte *)(param_2 + 0x20) >> 3 & 1) == 0) {
    lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar1 + 0xb738))
                  ("v8::ScriptCompiler::CompileModule",
                   "Invalid ScriptOrigin: is_module must be true");
        *(undefined1 *)(lVar1 + 0xb6b9) = 1;
        goto LAB_00eab7fc;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ScriptCompiler::CompileModule",
               "Invalid ScriptOrigin: is_module must be true");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00eab7fc:
  lVar1 = CompileUnboundInternal(param_1,param_2,param_3,param_4);
  if (lVar1 != 0) {
    internal::Factory::NewSourceTextModule(param_1,lVar1);
    return;
  }
  return;
}

