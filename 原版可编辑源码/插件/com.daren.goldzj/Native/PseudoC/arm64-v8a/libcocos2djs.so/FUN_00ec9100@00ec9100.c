
void FUN_00ec9100(undefined8 param_1,undefined8 param_2,void *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  if (param_3 != (void *)0x0) {
    this = *(__shared_weak_count **)((long)param_3 + 8);
    if (this != (__shared_weak_count *)0x0) {
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
      }
    }
    operator_delete(param_3);
    return;
  }
  return;
}

