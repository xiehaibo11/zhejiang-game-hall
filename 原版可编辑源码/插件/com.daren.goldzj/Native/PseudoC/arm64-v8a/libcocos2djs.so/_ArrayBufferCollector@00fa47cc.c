
/* v8::internal::ArrayBufferCollector::~ArrayBufferCollector() */

void __thiscall
v8::internal::ArrayBufferCollector::~ArrayBufferCollector(ArrayBufferCollector *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  __shared_weak_count *this_00;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  
  PerformFreeAllocations(this);
  plVar7 = *(long **)(this + 0x30);
  if (plVar7 != (long *)0x0) {
    plVar8 = *(long **)(this + 0x38);
    plVar5 = plVar7;
    if (plVar8 != plVar7) {
      pvVar9 = (void *)plVar8[-3];
      plVar5 = plVar8 + -3;
      while( true ) {
        if (pvVar9 != (void *)0x0) {
          pvVar10 = (void *)plVar8[-2];
          pvVar4 = pvVar9;
          if (pvVar10 != pvVar9) {
            do {
              this_00 = *(__shared_weak_count **)((long)pvVar10 + -8);
              pvVar10 = (void *)((long)pvVar10 + -0x10);
              if (this_00 != (__shared_weak_count *)0x0) {
                p_Var1 = this_00 + 8;
                do {
                  lVar6 = *(long *)p_Var1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                  if (bVar3) {
                    *(long *)p_Var1 = lVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar6 == 0) {
                  (**(code **)(*(long *)this_00 + 0x10))(this_00);
                  std::__ndk1::__shared_weak_count::__release_weak(this_00);
                }
              }
            } while (pvVar10 != pvVar9);
            pvVar4 = (void *)*plVar5;
          }
          plVar8[-2] = (long)pvVar9;
          operator_delete(pvVar4);
        }
        if (plVar5 == plVar7) break;
        pvVar9 = (void *)plVar5[-3];
        plVar8 = plVar5;
        plVar5 = plVar5 + -3;
      }
      plVar5 = *(long **)(this + 0x30);
    }
    *(long **)(this + 0x38) = plVar7;
    operator_delete(plVar5);
  }
  base::Mutex::~Mutex((Mutex *)(this + 8));
  return;
}

