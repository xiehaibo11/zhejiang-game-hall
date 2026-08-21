
/* WARNING: Removing unreachable block (ram,0x0120a4f4) */
/* v8::internal::wasm::WasmEngine::StartStreamingCompilation(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, v8::internal::Handle<v8::internal::Context>, char
   const*, std::__ndk1::shared_ptr<v8::internal::wasm::CompilationResultResolver>) */

void v8::internal::wasm::WasmEngine::StartStreamingCompilation(void)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *in_x5;
  long lVar4;
  __shared_weak_count *this;
  
  this = (__shared_weak_count *)in_x5[1];
  *in_x5 = 0;
  in_x5[1] = 0;
  CreateAsyncCompileJob();
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  AsyncCompileJob::CreateStreamingDecoder();
  return;
}

