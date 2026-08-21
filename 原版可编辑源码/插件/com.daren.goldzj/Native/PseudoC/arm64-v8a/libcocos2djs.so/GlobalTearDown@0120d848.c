
/* v8::internal::wasm::WasmEngine::GlobalTearDown() */

void v8::internal::wasm::WasmEngine::GlobalTearDown(void)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this;
  int iVar4;
  long lVar5;
  
  if (((DAT_01d3fce0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d3fce0), iVar4 != 0)) {
    DAT_01d3fcd0 = 0;
    DAT_01d3fcd8 = (__shared_weak_count *)0x0;
    __cxa_guard_release(&DAT_01d3fce0);
  }
  this = DAT_01d3fcd8;
  DAT_01d3fcd0 = 0;
  DAT_01d3fcd8 = (__shared_weak_count *)0x0;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
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
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}

