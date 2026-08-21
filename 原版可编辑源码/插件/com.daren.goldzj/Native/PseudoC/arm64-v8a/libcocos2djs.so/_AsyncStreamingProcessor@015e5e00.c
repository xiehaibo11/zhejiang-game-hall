
/* v8::internal::wasm::AsyncStreamingProcessor::~AsyncStreamingProcessor() */

void __thiscall
v8::internal::wasm::AsyncStreamingProcessor::~AsyncStreamingProcessor(AsyncStreamingProcessor *this)

{
  *(undefined ***)this = &PTR__AsyncStreamingProcessor_01cc9990;
  FUN_015e43c0(this + 0x28,0);
  ModuleDecoder::~ModuleDecoder((ModuleDecoder *)(this + 8));
  operator_delete(this);
  return;
}

