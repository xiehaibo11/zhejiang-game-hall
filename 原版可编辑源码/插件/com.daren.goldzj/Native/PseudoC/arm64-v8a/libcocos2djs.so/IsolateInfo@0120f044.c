
/* v8::internal::wasm::WasmEngine::IsolateInfo::IsolateInfo(v8::internal::Isolate*) */

void __thiscall
v8::internal::wasm::WasmEngine::IsolateInfo::IsolateInfo(IsolateInfo *this,Isolate *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  __shared_weak_count *p_Var8;
  undefined8 local_40;
  __shared_weak_count *local_38;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(IsolateInfo **)this = this + 8;
  bVar5 = WasmCode::ShouldBeLogged(param_1);
  this[0x18] = (IsolateInfo)(bVar5 & 1);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x9520);
  lVar7 = *(long *)(param_1 + 0x9528);
  *(long *)(this + 0x58) = lVar7;
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)V8::GetCurrentPlatform();
  (**(code **)(*plVar6 + 0x30))(&local_40,plVar6,param_1);
  p_Var1 = local_38;
  uVar4 = local_40;
  local_40 = 0;
  local_38 = (__shared_weak_count *)0x0;
  p_Var8 = *(__shared_weak_count **)(this + 0x48);
  *(undefined8 *)(this + 0x40) = uVar4;
  *(__shared_weak_count **)(this + 0x48) = p_Var1;
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
      p_Var1 = local_38;
      if (local_38 != (__shared_weak_count *)0x0) {
        p_Var8 = local_38 + 8;
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
          (**(code **)(*(long *)local_38 + 0x10))(local_38);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
        }
      }
    }
  }
  return;
}

