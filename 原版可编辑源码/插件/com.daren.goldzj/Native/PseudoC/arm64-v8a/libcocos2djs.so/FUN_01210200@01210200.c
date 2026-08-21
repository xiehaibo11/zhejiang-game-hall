
void FUN_01210200(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this;
  long lVar4;
  
  if ((*(__shared_weak_count **)(param_1 + 0x38) != (__shared_weak_count *)0x0) &&
     (this = (__shared_weak_count *)
             std::__ndk1::__shared_weak_count::lock(*(__shared_weak_count **)(param_1 + 0x38)),
     this != (__shared_weak_count *)0x0)) {
    if (*(NativeModule **)(param_1 + 0x30) != (NativeModule *)0x0) {
      v8::internal::wasm::NativeModule::SampleCodeSize
                (*(NativeModule **)(param_1 + 0x30),
                 *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x9520),1);
    }
    p_Var1 = this + 8;
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

