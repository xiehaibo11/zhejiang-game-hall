
/* v8::ScriptCompiler::StartStreamingScript(v8::Isolate*, v8::ScriptCompiler::StreamedSource*,
   v8::ScriptCompiler::CompileOptions) */

undefined8 *
v8::ScriptCompiler::StartStreamingScript(Isolate *param_1,undefined8 *param_2,int param_3)

{
  BackgroundCompileTask *this;
  undefined8 *puVar1;
  ScriptStreamingData *pSVar2;
  BackgroundCompileTask *this_00;
  
  if (internal::FLAG_script_streaming == '\0') {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","options == ScriptCompiler::kNoCompileOptions");
    }
    pSVar2 = (ScriptStreamingData *)*param_2;
    this = operator_new(0x40);
    internal::BackgroundCompileTask::BackgroundCompileTask(this,pSVar2,param_1);
    this_00 = *(BackgroundCompileTask **)(pSVar2 + 0x10);
    *(BackgroundCompileTask **)(pSVar2 + 0x10) = this;
    if (this_00 != (BackgroundCompileTask *)0x0) {
      internal::BackgroundCompileTask::~BackgroundCompileTask(this_00);
      operator_delete(this_00);
    }
    puVar1 = operator_new(8);
    *puVar1 = pSVar2;
  }
  return puVar1;
}

