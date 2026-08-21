
/* v8::ScriptCompiler::StreamedSource::StreamedSource(std::__ndk1::unique_ptr<v8::ScriptCompiler::ExternalSourceStream,
   std::__ndk1::default_delete<v8::ScriptCompiler::ExternalSourceStream> >,
   v8::ScriptCompiler::StreamedSource::Encoding) */

void __thiscall
v8::ScriptCompiler::StreamedSource::StreamedSource
          (StreamedSource *this,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  ScriptStreamingData *pSVar2;
  long *local_38;
  
  pSVar2 = operator_new(0x18);
  local_38 = (long *)*param_2;
  *param_2 = 0;
  internal::ScriptStreamingData::ScriptStreamingData(pSVar2,&local_38,param_3);
  plVar1 = local_38;
  *(ScriptStreamingData **)this = pSVar2;
  local_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}

