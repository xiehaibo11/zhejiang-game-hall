
/* cocos2d::TextRenderGroup::reset() */

void __thiscall cocos2d::TextRenderGroup::reset(TextRenderGroup *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  __shared_weak_count *this_00;
  long lVar7;
  void *pvVar8;
  
  for (plVar6 = *(long **)(this + 0x10); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    lVar7 = plVar6[3];
    middleware::MeshBuffer::reset(*(MeshBuffer **)(lVar7 + 8));
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar4 = *(void **)(this + 0x10);
    while (puVar4 != (void *)0x0) {
      this_00 = (__shared_weak_count *)puVar4[4];
      pvVar8 = (void *)*puVar4;
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var1 = this_00 + 8;
        do {
          lVar7 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
      operator_delete(puVar4);
      puVar4 = pvVar8;
    }
    lVar7 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar7 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar7 != lVar5);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

