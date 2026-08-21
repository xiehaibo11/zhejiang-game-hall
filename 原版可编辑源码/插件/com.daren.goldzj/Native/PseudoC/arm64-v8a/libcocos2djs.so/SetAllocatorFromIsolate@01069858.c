
/* v8::internal::BackingStore::SetAllocatorFromIsolate(v8::internal::Isolate*) */

void __thiscall
v8::internal::BackingStore::SetAllocatorFromIsolate(BackingStore *this,Isolate *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  this_00 = *(__shared_weak_count **)(param_1 + 0xc6a0);
  lVar4 = *(long *)(param_1 + 0xc698);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar4 == 0) {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0xc690);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
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
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
        return;
      }
    }
  }
  else {
    *(long *)(this + 0x18) = lVar4;
    *(__shared_weak_count **)(this + 0x20) = this_00;
    this[0x28] = (BackingStore)((byte)this[0x28] | 4);
  }
  return;
}

