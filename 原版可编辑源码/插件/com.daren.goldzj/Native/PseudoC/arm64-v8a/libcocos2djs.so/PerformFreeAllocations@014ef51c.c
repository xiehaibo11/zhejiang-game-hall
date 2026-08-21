
/* v8::internal::ArrayBufferCollector::PerformFreeAllocations() */

void __thiscall
v8::internal::ArrayBufferCollector::PerformFreeAllocations(ArrayBufferCollector *this)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  __shared_weak_count *this_00;
  void *pvVar9;
  void *pvVar10;
  
  base::Mutex::Lock((Mutex *)(this + 8));
  plVar2 = *(long **)(this + 0x30);
  plVar3 = *(long **)(this + 0x38);
  if (plVar3 != plVar2) {
    pvVar9 = (void *)plVar3[-3];
    plVar6 = plVar3 + -3;
    while( true ) {
      if (pvVar9 != (void *)0x0) {
        pvVar10 = (void *)plVar3[-2];
        pvVar7 = pvVar9;
        if (pvVar10 != pvVar9) {
          do {
            this_00 = *(__shared_weak_count **)((long)pvVar10 + -8);
            pvVar10 = (void *)((long)pvVar10 + -0x10);
            if (this_00 != (__shared_weak_count *)0x0) {
              p_Var1 = this_00 + 8;
              do {
                lVar8 = *(long *)p_Var1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                if (bVar5) {
                  *(long *)p_Var1 = lVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*(long *)this_00 + 0x10))(this_00);
                std::__ndk1::__shared_weak_count::__release_weak(this_00);
              }
            }
          } while (pvVar10 != pvVar9);
          pvVar7 = (void *)*plVar6;
        }
        plVar3[-2] = (long)pvVar9;
        operator_delete(pvVar7);
      }
      if (plVar6 == plVar2) break;
      pvVar9 = (void *)plVar6[-3];
      plVar3 = plVar6;
      plVar6 = plVar6 + -3;
    }
  }
  *(long **)(this + 0x38) = plVar2;
  base::Mutex::Unlock((Mutex *)(this + 8));
  return;
}

