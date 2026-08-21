
/* v8::internal::Isolate::InitializeCounters() */

undefined8 __thiscall v8::internal::Isolate::InitializeCounters(Isolate *this)

{
  char cVar1;
  bool bVar2;
  __shared_weak_count *p_Var3;
  __shared_weak_count *this_00;
  long lVar4;
  Counters *this_01;
  __shared_weak_count *p_Var5;
  __shared_weak_count *p_Var6;
  
  if (*(long *)(this + 0x9520) != 0) {
    return 0;
  }
  p_Var3 = operator_new(0xc990);
  p_Var5 = p_Var3 + 8;
  *(long *)p_Var5 = 0;
  p_Var6 = p_Var3 + 0x10;
  *(long *)p_Var6 = 0;
  this_01 = (Counters *)(p_Var3 + 0x18);
  *(undefined ***)p_Var3 = &PTR____shared_ptr_emplace_01ca5f18;
  Counters::Counters(this_01,this);
  if (this_01 != (Counters *)0x0) {
    this_00 = *(__shared_weak_count **)(p_Var3 + 0x20);
    if (this_00 == (__shared_weak_count *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var5,0x10);
        if (bVar2) {
          *(long *)p_Var5 = *(long *)p_Var5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
        if (bVar2) {
          *(long *)p_Var6 = *(long *)p_Var6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(Counters **)(p_Var3 + 0x18) = this_01;
      *(__shared_weak_count **)(p_Var3 + 0x20) = p_Var3;
    }
    else {
      if (*(long *)(this_00 + 8) != -1) goto LAB_00f53a50;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var5,0x10);
        if (bVar2) {
          *(long *)p_Var5 = *(long *)p_Var5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
        if (bVar2) {
          *(long *)p_Var6 = *(long *)p_Var6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(Counters **)(p_Var3 + 0x18) = this_01;
      *(__shared_weak_count **)(p_Var3 + 0x20) = p_Var3;
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    do {
      lVar4 = *(long *)p_Var5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(p_Var5,0x10);
      if (bVar2) {
        *(long *)p_Var5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var3);
    }
  }
LAB_00f53a50:
  p_Var5 = *(__shared_weak_count **)(this + 0x9528);
  *(Counters **)(this + 0x9520) = this_01;
  *(__shared_weak_count **)(this + 0x9528) = p_Var3;
  if (p_Var5 != (__shared_weak_count *)0x0) {
    p_Var3 = p_Var5 + 8;
    do {
      lVar4 = *(long *)p_Var3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
      if (bVar2) {
        *(long *)p_Var3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var5);
    }
  }
  return 1;
}

