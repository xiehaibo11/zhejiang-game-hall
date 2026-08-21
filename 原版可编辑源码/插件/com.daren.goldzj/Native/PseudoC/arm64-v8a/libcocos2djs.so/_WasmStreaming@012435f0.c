
/* v8::WasmStreaming::~WasmStreaming() */

void __thiscall v8::WasmStreaming::~WasmStreaming(WasmStreaming *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  __shared_weak_count *p_Var6;
  
  pvVar5 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar5 != (void *)0x0) {
    p_Var6 = *(__shared_weak_count **)((long)pvVar5 + 0x20);
    if (p_Var6 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var6 + 8;
      do {
        lVar4 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    p_Var6 = *(__shared_weak_count **)((long)pvVar5 + 0x10);
    if (p_Var6 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var6 + 8;
      do {
        lVar4 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    operator_delete(pvVar5);
    return;
  }
  return;
}

