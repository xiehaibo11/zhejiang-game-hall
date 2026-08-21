
/* cocos2d::extension::Control::~Control() */

void __thiscall cocos2d::extension::Control::~Control(Control *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  plVar7 = *(long **)(this + 0x338);
  *(undefined ***)this = &PTR__Control_016e8380;
  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    plVar5 = (long *)plVar7[3];
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)*plVar5;
      puVar1 = (undefined8 *)plVar5[1];
      if (puVar6 != puVar1) {
        do {
          Ref::release((Ref *)*puVar6);
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar6 = (undefined8 *)*plVar5;
      }
      plVar5[1] = (long)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        plVar5[1] = (long)puVar6;
        operator_delete(puVar6);
      }
      operator_delete(plVar5);
    }
  }
  if (*(long *)(this + 0x340) != 0) {
    puVar6 = *(void **)(this + 0x338);
    while (puVar6 != (void *)0x0) {
      pvVar4 = (void *)*puVar6;
      operator_delete(puVar6);
      puVar6 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x330);
    *(undefined8 *)(this + 0x338) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x328) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x340) = 0;
  }
  puVar6 = *(void **)(this + 0x338);
  while (puVar6 != (void *)0x0) {
    pvVar4 = (void *)*puVar6;
    operator_delete(puVar6);
    puVar6 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x328);
  *(undefined8 *)(this + 0x328) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  Layer::~Layer((Layer *)this);
  return;
}

