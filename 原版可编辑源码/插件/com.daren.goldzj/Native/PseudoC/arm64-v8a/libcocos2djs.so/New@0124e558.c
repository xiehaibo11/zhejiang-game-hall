
/* v8::internal::WasmModuleObject::New(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>,
   v8::internal::Handle<v8::internal::Script>) */

undefined8 v8::internal::WasmModuleObject::New(Factory *param_1,long *param_2,undefined8 param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  __shared_weak_count *this;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_50;
  __shared_weak_count *local_48;
  
  uVar4 = Factory::NewFixedArray(param_1,0,0);
  local_50 = *param_2;
  local_48 = (__shared_weak_count *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (FLAG_liftoff == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = (*(WasmModule **)(local_50 + 200))[0x178] == (WasmModule)0x0;
  }
  uVar5 = wasm::WasmCodeManager::EstimateNativeModuleCodeSize
                    (*(WasmModule **)(local_50 + 200),bVar3);
  uVar4 = New(param_1,&local_50,param_3,uVar4,uVar5);
  this = local_48;
  if (local_48 != (__shared_weak_count *)0x0) {
    p_Var1 = local_48 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_48 + 0x10))(local_48);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  return uVar4;
}

