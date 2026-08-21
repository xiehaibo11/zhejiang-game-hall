
/* v8::internal::wasm::CompilationState::SetWireBytesStorage(std::__ndk1::shared_ptr<v8::internal::wasm::WireBytesStorage>)
    */

void __thiscall
v8::internal::wasm::CompilationState::SetWireBytesStorage
          (CompilationState *this,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  __shared_weak_count *this_00;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  
  uVar2 = *param_2;
  this_00 = (__shared_weak_count *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  base::Mutex::Lock((Mutex *)(this + 0x100));
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var6 = this_00 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
      if (bVar4) {
        *(long *)p_Var6 = *(long *)p_Var6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  p_Var6 = *(__shared_weak_count **)(this + 0x150);
  *(undefined8 *)(this + 0x148) = uVar2;
  *(__shared_weak_count **)(this + 0x150) = this_00;
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var6 + 8;
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
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var6 = this_00 + 8;
    do {
      lVar5 = *(long *)p_Var6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
      if (bVar4) {
        *(long *)p_Var6 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

