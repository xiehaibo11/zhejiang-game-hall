
void FUN_0099dba0(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  __shared_weak_count *this;
  void *pvVar6;
  void *pvVar7;
  
  pvVar6 = (void *)*param_1;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  pvVar7 = (void *)param_1[1];
  pvVar4 = pvVar6;
  if (pvVar7 != pvVar6) {
    do {
      while( true ) {
        this = *(__shared_weak_count **)((long)pvVar7 + -8);
        pvVar7 = (void *)((long)pvVar7 + -0x10);
        if (this != (__shared_weak_count *)0x0) break;
LAB_0099dbec:
        if (pvVar7 == pvVar6) goto LAB_0099dc18;
      }
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
      if (lVar5 != 0) goto LAB_0099dbec;
                    /* catch() { ... } // from try @ 0099da50 with catch @ 0099dbfc */
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    } while (pvVar7 != pvVar6);
LAB_0099dc18:
                    /* try { // try from 0099dc18 to 00a9dc6b has its CatchHandler @ 0099dc18
                       catch() { ... } // from try @ 0099dc18 with catch @ 0099dc18
                       catch() { ... } // from try @ 0099de7c with catch @ 0099dc18 */
    pvVar4 = (void *)*param_1;
  }
  param_1[1] = pvVar6;
  operator_delete(pvVar4);
  return;
}

