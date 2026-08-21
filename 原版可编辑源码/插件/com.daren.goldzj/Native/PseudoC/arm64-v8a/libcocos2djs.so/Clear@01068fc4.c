
/* v8::internal::BackingStore::Clear() */

void __thiscall v8::internal::BackingStore::Clear(BackingStore *this)

{
  __shared_weak_count *p_Var1;
  BackingStore BVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this_00;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  BVar2 = this[0x28];
  this[0x28] = (BackingStore)((byte)BVar2 & 0xef);
  if (((byte)BVar2 >> 2 & 1) != 0) {
    this_00 = *(__shared_weak_count **)(this + 0x20);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
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
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    this[0x28] = (BackingStore)((byte)this[0x28] & 0xfb);
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

