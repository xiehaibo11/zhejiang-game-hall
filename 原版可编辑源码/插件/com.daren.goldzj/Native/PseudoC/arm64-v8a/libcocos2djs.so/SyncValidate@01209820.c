
/* v8::internal::wasm::WasmEngine::SyncValidate(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, v8::internal::wasm::ModuleWireBytes const&) */

bool __thiscall
v8::internal::wasm::WasmEngine::SyncValidate
          (WasmEngine *this,Isolate *param_1,WasmFeatures *param_2,ModuleWireBytes *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  wasm awStack_50 [8];
  __shared_weak_count *local_48;
  byte local_38;
  ulong local_30;
  void *pvStack_28;
  
  lVar5 = *(long *)param_3;
  if ((lVar5 == 0) || ((int)*(long *)(param_3 + 8) == 0)) {
    bVar4 = false;
  }
  else {
    DecodeWasmModule(awStack_50,param_2,lVar5,lVar5 + *(long *)(param_3 + 8),1,0,
                     *(undefined8 *)(param_1 + 0x9520),this + 0x58);
    if ((local_38 & 1) == 0) {
      local_30 = (ulong)(local_38 >> 1);
    }
    else {
      operator_delete(pvStack_28);
    }
    bVar4 = local_30 == 0;
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var1 = local_48 + 8;
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
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(local_48);
      }
    }
  }
  return bVar4;
}

