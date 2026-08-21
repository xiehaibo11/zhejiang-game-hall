
/* v8::internal::wasm::AsyncCompileJob::CreateNativeModule(std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule
   const>, unsigned long) */

void __thiscall
v8::internal::wasm::AsyncCompileJob::CreateNativeModule
          (AsyncCompileJob *this,long *param_2,undefined8 param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *p_Var4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  __shared_weak_count *p_Var8;
  void *local_60;
  long lStack_58;
  long local_50;
  __shared_weak_count *local_48;
  undefined8 local_40;
  __shared_weak_count *local_38;
  
  local_50 = *param_2;
  if (*(char *)(local_50 + 0x10) != '\0') {
    Isolate::CountUsage(*(undefined8 *)this,0x32);
    local_50 = *param_2;
  }
  lVar7 = *(long *)this;
  uVar6 = *(undefined8 *)(lVar7 + 0xc770);
  local_48 = (__shared_weak_count *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  WasmEngine::NewNativeModule(&local_40,uVar6,lVar7,this + 0x10,&local_50,param_3);
  p_Var4 = local_38;
  uVar6 = local_40;
  local_40 = 0;
  local_38 = (__shared_weak_count *)0x0;
  *(undefined8 *)(this + 0x58) = uVar6;
  p_Var8 = *(__shared_weak_count **)(this + 0x60);
  *(__shared_weak_count **)(this + 0x60) = p_Var4;
  p_Var4 = local_48;
  if (p_Var8 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
      p_Var8 = local_38;
      p_Var4 = local_48;
      if (local_38 != (__shared_weak_count *)0x0) {
        p_Var1 = local_38 + 8;
        do {
          lVar7 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)local_38 + 0x10))(local_38);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          p_Var4 = local_48;
        }
      }
    }
  }
  local_48 = p_Var4;
  if (p_Var4 != (__shared_weak_count *)0x0) {
    p_Var8 = p_Var4 + 8;
    do {
      lVar7 = *(long *)p_Var8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
      if (bVar3) {
        *(long *)p_Var8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
    }
  }
  lStack_58 = (long)*(int *)(this + 0x30);
  local_60 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  NativeModule::SetWireBytes(*(NativeModule **)(this + 0x58),&local_60);
  pvVar5 = local_60;
  local_60 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  if (*(StreamingDecoder **)(this + 0x120) != (StreamingDecoder *)0x0) {
    StreamingDecoder::NotifyNativeModuleCreated
              (*(StreamingDecoder **)(this + 0x120),(shared_ptr *)(this + 0x58));
  }
  return;
}

