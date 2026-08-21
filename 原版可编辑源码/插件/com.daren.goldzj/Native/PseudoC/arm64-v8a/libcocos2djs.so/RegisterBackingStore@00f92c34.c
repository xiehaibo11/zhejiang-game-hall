
/* v8::internal::Heap::RegisterBackingStore(v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore>) */

void __thiscall
v8::internal::Heap::RegisterBackingStore(Heap *this,undefined8 param_2,undefined8 *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  long lVar4;
  undefined8 local_30;
  __shared_weak_count *p_Stack_28;
  
  p_Stack_28 = (__shared_weak_count *)param_3[1];
  local_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  ArrayBufferTracker::RegisterNew(this,param_2,&local_30);
  this_00 = p_Stack_28;
  if (p_Stack_28 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_28 + 8;
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
      (**(code **)(*(long *)p_Stack_28 + 0x10))(p_Stack_28);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return;
}

