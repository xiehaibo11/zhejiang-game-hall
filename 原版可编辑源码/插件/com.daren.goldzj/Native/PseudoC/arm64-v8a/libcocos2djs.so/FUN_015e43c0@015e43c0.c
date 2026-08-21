
void FUN_015e43c0(undefined8 *param_1,undefined8 param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  __shared_weak_count *this;
  void *pvVar7;
  void *pvVar8;
  
  pvVar6 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  pvVar7 = *(void **)((long)pvVar6 + 0x40);
  if (pvVar7 != (void *)0x0) {
    pvVar8 = *(void **)((long)pvVar6 + 0x48);
    pvVar4 = pvVar7;
    if (pvVar8 != pvVar7) {
      do {
        this = *(__shared_weak_count **)((long)pvVar8 + -8);
        pvVar8 = (void *)((long)pvVar8 + -0x10);
        if (this != (__shared_weak_count *)0x0) {
          p_Var1 = this + 8;
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
            (**(code **)(*(long *)this + 0x10))(this);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
      } while (pvVar8 != pvVar7);
      pvVar4 = *(void **)((long)pvVar6 + 0x40);
    }
    *(void **)((long)pvVar6 + 0x48) = pvVar7;
    operator_delete(pvVar4);
  }
  pvVar7 = *(void **)((long)pvVar6 + 0x28);
  if (pvVar7 != (void *)0x0) {
    *(void **)((long)pvVar6 + 0x30) = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)((long)pvVar6 + 0x10);
  if (pvVar7 != (void *)0x0) {
    *(void **)((long)pvVar6 + 0x18) = pvVar7;
    operator_delete(pvVar7);
  }
  operator_delete(pvVar6);
  return;
}

