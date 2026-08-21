
/* v8::internal::wasm::StreamingDecoder::~StreamingDecoder() */

void __thiscall v8::internal::wasm::StreamingDecoder::~StreamingDecoder(StreamingDecoder *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  StreamingDecoder *pSVar5;
  void *pvVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  __shared_weak_count *this_00;
  void *pvVar10;
  
  pvVar4 = *(void **)(this + 0x70);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar4;
    operator_delete(pvVar4);
  }
  pSVar5 = *(StreamingDecoder **)(this + 0x60);
  if (this + 0x40 == pSVar5) {
    pcVar8 = *(code **)(*(long *)pSVar5 + 0x20);
  }
  else {
    if (pSVar5 == (StreamingDecoder *)0x0) goto LAB_015eba4c;
    pcVar8 = *(code **)(*(long *)pSVar5 + 0x28);
  }
  (*pcVar8)();
LAB_015eba4c:
  pvVar4 = *(void **)(this + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar10 = *(void **)(this + 0x18);
    pvVar6 = pvVar4;
    if (pvVar10 != pvVar4) {
      do {
        this_00 = *(__shared_weak_count **)((long)pvVar10 + -8);
        pvVar10 = (void *)((long)pvVar10 + -0x10);
        if (this_00 != (__shared_weak_count *)0x0) {
          p_Var1 = this_00 + 8;
          do {
            lVar9 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*(long *)this_00 + 0x10))(this_00);
            std::__ndk1::__shared_weak_count::__release_weak(this_00);
          }
        }
      } while (pvVar10 != pvVar4);
      pvVar6 = *(void **)(this + 0x10);
    }
    *(void **)(this + 0x18) = pvVar4;
    operator_delete(pvVar6);
  }
  plVar7 = *(long **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = *(long **)this;
  *(undefined8 *)this = 0;
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x015ebaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 8))();
  return;
}

