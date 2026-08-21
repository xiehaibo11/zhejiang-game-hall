
/* v8::internal::wasm::AsyncStreamingProcessor::AsyncStreamingProcessor(v8::internal::wasm::AsyncCompileJob*)
    */

void __thiscall
v8::internal::wasm::AsyncStreamingProcessor::AsyncStreamingProcessor
          (AsyncStreamingProcessor *this,AsyncCompileJob *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__AsyncStreamingProcessor_01cc9990;
  ModuleDecoder::ModuleDecoder((ModuleDecoder *)(this + 8),(WasmFeatures *)(param_1 + 0x10));
  *(AsyncCompileJob **)(this + 0x18) = param_1;
  uVar1 = *(undefined8 *)(*(long *)param_1 + 0xc770);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

