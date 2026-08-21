
/* v8::internal::BackingStore::BroadcastSharedWasmMemoryGrow(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::BackingStore>, unsigned long) */

void v8::internal::BackingStore::BroadcastSharedWasmMemoryGrow
               (undefined8 param_1,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_30;
  __shared_weak_count *p_Stack_28;
  
  local_30 = *param_2;
  this = (__shared_weak_count *)param_2[1];
  p_Stack_28 = this;
  if (this == (__shared_weak_count *)0x0) {
    GlobalBackingStoreRegistry::BroadcastSharedWasmMemoryGrow(param_1,&local_30);
  }
  else {
    p_Var1 = this + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    GlobalBackingStoreRegistry::BroadcastSharedWasmMemoryGrow(param_1,&local_30);
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
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}

