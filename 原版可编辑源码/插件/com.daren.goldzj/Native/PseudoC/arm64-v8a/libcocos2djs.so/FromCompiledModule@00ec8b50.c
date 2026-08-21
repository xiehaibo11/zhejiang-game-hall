
/* v8::WasmModuleObject::FromCompiledModule(v8::Isolate*, v8::CompiledWasmModule const&) */

undefined8 v8::WasmModuleObject::FromCompiledModule(Isolate *param_1,CompiledWasmModule *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  WasmEngine *pWVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_30;
  __shared_weak_count *local_28;
  
  local_30 = *(undefined8 *)param_2;
  pWVar5 = *(WasmEngine **)(param_1 + 0xc770);
  local_28 = *(__shared_weak_count **)(param_2 + 8);
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
  uVar6 = internal::wasm::WasmEngine::ImportNativeModule(pWVar5,param_1,&local_30);
  p_Var1 = local_28;
  if (local_28 != (__shared_weak_count *)0x0) {
    p_Var2 = local_28 + 8;
    do {
      lVar7 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)local_28 + 0x10))(local_28);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  return uVar6;
}

