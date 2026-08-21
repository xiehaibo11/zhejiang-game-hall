
/* v8::internal::LocalArrayBufferTracker::~LocalArrayBufferTracker() */

void __thiscall
v8::internal::LocalArrayBufferTracker::~LocalArrayBufferTracker(LocalArrayBufferTracker *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  __shared_weak_count *this_00;
  
  if (*(long *)(this + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","array_buffers_.empty()");
  }
  puVar4 = *(void **)(this + 0x18);
  while (puVar4 != (void *)0x0) {
    this_00 = (__shared_weak_count *)puVar4[4];
    pvVar5 = (void *)*puVar4;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
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
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    operator_delete(puVar4);
    puVar4 = pvVar5;
  }
  pvVar5 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
    return;
  }
  return;
}

