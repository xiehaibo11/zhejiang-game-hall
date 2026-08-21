
/* v8::internal::WasmModuleObject::New(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>,
   v8::internal::Handle<v8::internal::Script>, v8::internal::Handle<v8::internal::FixedArray>) */

undefined8
v8::internal::WasmModuleObject::New
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  __shared_weak_count *this;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long local_40;
  __shared_weak_count *p_Stack_38;
  
  if (FLAG_liftoff == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = (*(WasmModule **)(*param_2 + 200))[0x178] == (WasmModule)0x0;
  }
  uVar4 = wasm::WasmCodeManager::EstimateNativeModuleCodeSize
                    (*(WasmModule **)(*param_2 + 200),bVar3);
  p_Stack_38 = (__shared_weak_count *)param_2[1];
  local_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = New(param_1,&local_40,param_3,param_4,uVar4);
  this = p_Stack_38;
  if (p_Stack_38 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_38 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)p_Stack_38 + 0x10))(p_Stack_38);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  return uVar4;
}

