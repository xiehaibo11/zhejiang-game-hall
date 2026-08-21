
/* v8::ScriptCompiler::StreamedSource::StreamedSource(v8::ScriptCompiler::ExternalSourceStream*,
   v8::ScriptCompiler::StreamedSource::Encoding) */

void __thiscall
v8::ScriptCompiler::StreamedSource::StreamedSource
          (StreamedSource *this,long *param_1,undefined4 param_3)

{
  long *plVar1;
  ScriptStreamingData *pSVar2;
  long *local_38;
  
  pSVar2 = operator_new(0x18);
  local_38 = param_1;
  internal::ScriptStreamingData::ScriptStreamingData(pSVar2,&local_38,param_3);
  plVar1 = local_38;
  *(ScriptStreamingData **)this = pSVar2;
  local_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}

