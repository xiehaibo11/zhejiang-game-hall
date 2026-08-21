
/* v8::internal::ScriptStreamingData::ScriptStreamingData(std::__ndk1::unique_ptr<v8::ScriptCompiler::ExternalSourceStream,
   std::__ndk1::default_delete<v8::ScriptCompiler::ExternalSourceStream> >,
   v8::ScriptCompiler::StreamedSource::Encoding) */

void __thiscall
v8::internal::ScriptStreamingData::ScriptStreamingData
          (ScriptStreamingData *this,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = uVar1;
  return;
}

