
/* void 
   std::__ndk1::__invoke_void_return_wrapper<void>::__call<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)#1}&, std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&>(v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::{lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&)#1}&, std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule> const&) */

void std::__ndk1::__invoke_void_return_wrapper<void>::
     __call<v8::WasmStreaming::WasmStreamingImpl::SetClient(std::__ndk1::shared_ptr<v8::WasmStreaming::Client>)::_lambda(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&)_1_&,std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>const&>
               (_lambda_std____ndk1__shared_ptr<v8::internal::wasm::NativeModule>_const___1_
                *param_1,shared_ptr *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  CompiledWasmModule aCStack_40 [8];
  __shared_weak_count *local_38;
  undefined8 local_30;
  __shared_weak_count *local_28;
  
  local_30 = *(undefined8 *)param_2;
  local_28 = *(__shared_weak_count **)(param_2 + 8);
  plVar6 = *(long **)param_1;
  if (local_28 != (__shared_weak_count *)0x0) {
    p_Var1 = local_28 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  v8::CompiledWasmModule::CompiledWasmModule(aCStack_40,&local_30);
  p_Var1 = local_28;
  if (local_28 != (__shared_weak_count *)0x0) {
    p_Var2 = local_28 + 8;
    do {
      lVar5 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_28 + 0x10))(local_28);
      __shared_weak_count::__release_weak(p_Var1);
    }
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,aCStack_40);
  if (local_38 != (__shared_weak_count *)0x0) {
    p_Var1 = local_38 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_38 + 0x10))(local_38);
      __shared_weak_count::__release_weak(local_38);
    }
  }
  return;
}

