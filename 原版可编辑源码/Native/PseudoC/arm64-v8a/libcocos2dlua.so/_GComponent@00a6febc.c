
/* fairygui::GComponent::~GComponent() */

void __thiscall fairygui::GComponent::~GComponent(GComponent *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar4;
  
  plVar5 = *(long **)(this + 0x1e0);
  plVar1 = *(long **)(this + 0x1e8);
  *(undefined ***)this = &PTR__GComponent_016a51c0;
  plVar3 = plVar5;
  if (plVar5 != plVar1) {
    do {
      plVar4 = plVar3 + 1;
      *(undefined8 *)(*plVar3 + 0xa0) = 0;
      plVar3 = plVar4;
    } while (plVar1 != plVar4);
                    /* catch() { ... } // from try @ 00a6fddc with catch @ 00a6ff0c */
    if (plVar5 != plVar1) {
      do {
                    /* catch() { ... } // from try @ 00a6fcc4 with catch @ 00a6ff10 */
                    /* catch() { ... } // from try @ 00a6fc20 with catch @ 00a6ff14
                       catch() { ... } // from try @ 00a6fe3c with catch @ 00a6ff14 */
        cocos2d::Ref::release((Ref *)*plVar5);
                    /* catch() { ... } // from try @ 00a6fd14 with catch @ 00a6ff18
                       catch() { ... } // from try @ 00a6fe54 with catch @ 00a6ff18 */
        plVar5 = plVar5 + 1;
      } while (plVar1 != plVar5);
      plVar5 = *(long **)(this + 0x1e0);
    }
  }
  puVar6 = *(undefined8 **)(this + 0x1f8);
  puVar7 = *(undefined8 **)(this + 0x200);
  *(long **)(this + 0x1e8) = plVar5;
  if (puVar6 != puVar7) {
    do {
      cocos2d::Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x1f8);
  }
  puVar7 = *(undefined8 **)(this + 0x210);
  puVar8 = *(undefined8 **)(this + 0x218);
  *(undefined8 **)(this + 0x200) = puVar6;
  if (puVar7 != puVar8) {
    do {
      cocos2d::Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar7 = *(undefined8 **)(this + 0x210);
  }
  *(undefined8 **)(this + 0x218) = puVar7;
  if (*(Ref **)(this + 0x260) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x260));
  }
  if (*(Ref **)(this + 0x228) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x228));
  }
  if (*(Ref **)(this + 0x230) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x230));
  }
  if (*(void **)(this + 0x268) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x268));
  }
  *(undefined8 *)(this + 0x268) = 0;
  lVar2 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar2 + 0xa0),(Ref *)__selector_doUpdateBounds);
  lVar2 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar2 + 0xa0),(Ref *)__selector_buildNativeDisplayList);
  puVar6 = *(undefined8 **)(this + 0x210);
  puVar7 = *(undefined8 **)(this + 0x218);
  if (puVar6 != puVar7) {
    do {
      cocos2d::Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x210);
  }
  *(undefined8 **)(this + 0x218) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x218) = puVar6;
    operator_delete(puVar6);
  }
  puVar6 = *(undefined8 **)(this + 0x1f8);
  puVar7 = *(undefined8 **)(this + 0x200);
  if (puVar6 != puVar7) {
    do {
      cocos2d::Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x1f8);
  }
  *(undefined8 **)(this + 0x200) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 00a7005c to 00b700cf has its CatchHandler @ 00a7005c
                       catch() { ... } // from try @ 00a7005c with catch @ 00a7005c
                       catch() { ... } // from try @ 00a702ac with catch @ 00a7005c
                       catch() { ... } // from try @ 00a7032c with catch @ 00a7005c */
    *(undefined8 **)(this + 0x200) = puVar6;
    operator_delete(puVar6);
  }
  puVar6 = *(undefined8 **)(this + 0x1e0);
  puVar7 = *(undefined8 **)(this + 0x1e8);
  if (puVar6 != puVar7) {
    do {
      cocos2d::Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x1e0);
  }
  *(undefined8 **)(this + 0x1e8) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x1e8) = puVar6;
    operator_delete(puVar6);
  }
  GObject::~GObject((GObject *)this);
  return;
}

