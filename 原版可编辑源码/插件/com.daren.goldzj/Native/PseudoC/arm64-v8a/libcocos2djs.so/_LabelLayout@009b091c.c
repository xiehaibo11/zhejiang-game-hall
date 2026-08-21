
/* cocos2d::LabelLayout::~LabelLayout() */

void __thiscall cocos2d::LabelLayout::~LabelLayout(LabelLayout *this)

{
  __shared_weak_count *p_Var1;
  LabelLayout LVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  __shared_weak_count *p_Var8;
  void *pvVar9;
  void *pvVar10;
  
  p_Var8 = *(__shared_weak_count **)(this + 0xb0);
  *(undefined ***)this = &PTR__LabelLayout_01c6abb8;
  if (p_Var8 == (__shared_weak_count *)0x0) {
LAB_009b0960:
    p_Var8 = *(__shared_weak_count **)(this + 0xa0);
    if (p_Var8 == (__shared_weak_count *)0x0) goto LAB_009b09c4;
LAB_009b0968:
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_009b09c4;
    (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
    pvVar9 = *(void **)(this + 0x80);
  }
  else {
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_009b0960;
    (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
                    /* try { // try from 009b09bc to 00ab09db has its CatchHandler @ 009b0a50 */
    p_Var8 = *(__shared_weak_count **)(this + 0xa0);
    if (p_Var8 != (__shared_weak_count *)0x0) goto LAB_009b0968;
LAB_009b09c4:
    pvVar9 = *(void **)(this + 0x80);
  }
  if (pvVar9 != (void *)0x0) {
    pvVar5 = pvVar9;
    pvVar6 = *(void **)(this + 0x88);
    if (*(void **)(this + 0x88) != pvVar9) {
      do {
        pvVar5 = *(void **)((long)pvVar6 + -0x20);
        pvVar10 = (void *)((long)pvVar6 + -0x38);
                    /* try { // try from 009b09e0 to 00ab09e7 has its CatchHandler @ 009b0a4c */
        if (pvVar5 != (void *)0x0) {
          *(void **)((long)pvVar6 + -0x18) = pvVar5;
                    /* try { // try from 009b09e8 to 00ab0a6b has its CatchHandler @ 009b090c */
          operator_delete(pvVar5);
        }
        pvVar6 = pvVar10;
      } while (pvVar9 != pvVar10);
      pvVar5 = *(void **)(this + 0x80);
    }
    *(void **)(this + 0x88) = pvVar9;
    operator_delete(pvVar5);
  }
  p_Var8 = *(__shared_weak_count **)(this + 0x70);
  if (p_Var8 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0adc with catch @ 009b0a6c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b0c with catch @ 009b0a6c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b3c with catch @ 009b0a6c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b64 with catch @ 009b0a6c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b90 with catch @ 009b0a6c
                        */
      LVar2 = this[0x38];
      goto joined_r0x009b0a30;
    }
  }
  LVar2 = this[0x38];
joined_r0x009b0a30:
  if (((byte)LVar2 & 1) == 0) {
    LVar2 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    LVar2 = this[0x20];
  }
  if (((byte)LVar2 & 1) == 0) {
    LVar2 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    LVar2 = this[8];
  }
  if (((byte)LVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
                    /* catch() { ... } // from try @ 009b09e0 with catch @ 009b0a4c */
                    /* catch() { ... } // from try @ 009b09bc with catch @ 009b0a50 */
  return;
}

