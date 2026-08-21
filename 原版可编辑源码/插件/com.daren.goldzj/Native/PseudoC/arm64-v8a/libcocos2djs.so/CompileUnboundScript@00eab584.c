
/* v8::ScriptCompiler::CompileUnboundScript(v8::Isolate*, v8::ScriptCompiler::Source*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason) */

void v8::ScriptCompiler::CompileUnboundScript
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  if ((*(byte *)(param_2 + 0x20) >> 3 & 1) == 0) {
LAB_00eab5f0:
    CompileUnboundInternal(param_1,param_2,param_3,param_4);
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))
                ("v8::ScriptCompiler::CompileUnboundScript",
                 "v8::ScriptCompiler::CompileModule must be used to compile modules");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      goto LAB_00eab5f0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ScriptCompiler::CompileUnboundScript",
             "v8::ScriptCompiler::CompileModule must be used to compile modules");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

