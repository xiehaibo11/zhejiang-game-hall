
/* v8::WasmStreaming::WasmStreamingImpl::WasmStreamingImpl(v8::Isolate*, char const*,
   std::__ndk1::shared_ptr<v8::internal::wasm::CompilationResultResolver>) */

void __thiscall
v8::WasmStreaming::WasmStreamingImpl::WasmStreamingImpl
          (WasmStreamingImpl *this,undefined8 param_1,undefined8 param_2,undefined8 *param_4)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  Isolate *pIVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_68;
  __shared_weak_count *local_60;
  undefined8 local_58;
  __shared_weak_count *local_50;
  undefined4 local_48 [2];
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 0x18) = *param_4;
  *(undefined8 *)(this + 0x20) = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  pIVar7 = *(Isolate **)this;
  local_48[0] = internal::wasm::WasmFeatures::FromIsolate(pIVar7);
  uVar8 = *(undefined8 *)(pIVar7 + 0xc770);
  uVar9 = *(ulong *)(pIVar7 + 0x2bc8);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar4 = (ulong *)internal::HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
  }
  local_68 = *(undefined8 *)(this + 0x18);
  local_60 = *(__shared_weak_count **)(this + 0x20);
  if (local_60 != (__shared_weak_count *)0x0) {
    p_Var1 = local_60 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  internal::wasm::WasmEngine::StartStreamingCompilation
            (&local_58,uVar8,pIVar7,local_48,puVar4,param_2,&local_68);
  p_Var1 = local_50;
  uVar8 = local_58;
  local_58 = 0;
  local_50 = (__shared_weak_count *)0x0;
  p_Var6 = *(__shared_weak_count **)(this + 0x10);
  *(undefined8 *)(this + 8) = uVar8;
  *(__shared_weak_count **)(this + 0x10) = p_Var1;
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var6 + 8;
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
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
  p_Var1 = local_50;
  if (local_50 != (__shared_weak_count *)0x0) {
    p_Var6 = local_50 + 8;
    do {
      lVar5 = *(long *)p_Var6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
      if (bVar3) {
        *(long *)p_Var6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  p_Var1 = local_60;
  if (local_60 != (__shared_weak_count *)0x0) {
    p_Var6 = local_60 + 8;
    do {
      lVar5 = *(long *)p_Var6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
      if (bVar3) {
        *(long *)p_Var6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  return;
}

