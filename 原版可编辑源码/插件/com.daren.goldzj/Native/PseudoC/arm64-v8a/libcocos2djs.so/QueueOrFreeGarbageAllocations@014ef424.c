
/* v8::internal::ArrayBufferCollector::QueueOrFreeGarbageAllocations(std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore> > >) */

void __thiscall
v8::internal::ArrayBufferCollector::QueueOrFreeGarbageAllocations
          (ArrayBufferCollector *this,vector *param_2)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  __shared_weak_count *this_00;
  long lVar7;
  
  if ((*(byte *)(*(long *)this + 0xad4) & 1) != 0) {
    lVar3 = *(long *)param_2;
    lVar7 = *(long *)(param_2 + 8);
    while (lVar7 != lVar3) {
      this_00 = *(__shared_weak_count **)(lVar7 + -8);
      lVar7 = lVar7 + -0x10;
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var1 = this_00 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
    }
    *(long *)(param_2 + 8) = lVar3;
    return;
  }
  base::Mutex::Lock((Mutex *)(this + 8));
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar2 < *(undefined8 **)(this + 0x40)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = *(undefined8 *)param_2;
    puVar2[1] = *(undefined8 *)(param_2 + 8);
    puVar2[2] = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>>
    ::
    __push_back_slow_path<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
              ((vector<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::BackingStore>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>>
                *)(this + 0x30),param_2);
  }
  base::Mutex::Unlock((Mutex *)(this + 8));
  return;
}

