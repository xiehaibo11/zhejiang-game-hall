
/* v8::internal::Deserializer::~Deserializer() */

void __thiscall v8::internal::Deserializer::~Deserializer(Deserializer *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  __shared_weak_count *this_00;
  void *pvVar7;
  
  pvVar4 = *(void **)(this + 600);
  *(undefined ***)this = &PTR__Deserializer_01cc9490;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x260) = pvVar4;
    operator_delete(pvVar4);
  }
  DeserializerAllocator::~DeserializerAllocator((DeserializerAllocator *)(this + 0x148));
  pvVar4 = *(void **)(this + 0x130);
  if (pvVar4 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x138);
    pvVar5 = pvVar4;
    if (pvVar7 != pvVar4) {
      do {
        this_00 = *(__shared_weak_count **)((long)pvVar7 + -8);
        pvVar7 = (void *)((long)pvVar7 + -0x10);
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
      } while (pvVar7 != pvVar4);
      pvVar5 = *(void **)(this + 0x130);
    }
    *(void **)(this + 0x138) = pvVar4;
    operator_delete(pvVar5);
  }
  pvVar4 = *(void **)(this + 0x118);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x100);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0xe8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0xd0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0xb8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0xa0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x88);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x58);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x60) = pvVar4;
  operator_delete(pvVar4);
  return;
}

