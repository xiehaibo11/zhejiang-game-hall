
void FUN_0120f170(undefined8 param_1,
                 __tree<v8::internal::wasm::NativeModule*,std::__ndk1::less<v8::internal::wasm::NativeModule*>,std::__ndk1::allocator<v8::internal::wasm::NativeModule*>>
                 *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  
  if (param_2 !=
      (__tree<v8::internal::wasm::NativeModule*,std::__ndk1::less<v8::internal::wasm::NativeModule*>,std::__ndk1::allocator<v8::internal::wasm::NativeModule*>>
       *)0x0) {
    p_Var6 = *(__shared_weak_count **)(param_2 + 0x58);
    if (p_Var6 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var6 + 8;
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
        (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    p_Var6 = *(__shared_weak_count **)(param_2 + 0x48);
    if (p_Var6 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var6 + 8;
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
        (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      }
    }
    pvVar4 = *(void **)(param_2 + 0x28);
    if (pvVar4 != (void *)0x0) {
      *(void **)(param_2 + 0x30) = pvVar4;
      operator_delete(pvVar4);
    }
    std::__ndk1::
    __tree<v8::internal::wasm::NativeModule*,std::__ndk1::less<v8::internal::wasm::NativeModule*>,std::__ndk1::allocator<v8::internal::wasm::NativeModule*>>
    ::destroy(param_2,*(__tree_node **)(param_2 + 8));
    operator_delete(param_2);
    return;
  }
  return;
}

