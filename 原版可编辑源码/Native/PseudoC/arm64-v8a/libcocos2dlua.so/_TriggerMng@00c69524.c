
/* cocostudio::TriggerMng::~TriggerMng() */

void __thiscall cocostudio::TriggerMng::~TriggerMng(TriggerMng *this)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  plVar5 = *(long **)(this + 0x18);
  *(undefined ***)this = &PTR__TriggerMng_016ca8a0;
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    (**(code **)(*(long *)plVar5[3] + 0x28))();
    if ((long *)plVar5[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[3] + 8))();
    }
    plVar5[3] = 0;
  }
  if (*(long *)(this + 0x20) != 0) {
    puVar1 = *(void **)(this + 0x18);
    while (puVar1 != (void *)0x0) {
      pvVar6 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar6;
    }
    lVar2 = *(long *)(this + 0x10);
    *(undefined8 *)(this + 0x18) = 0;
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 8) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  plVar5 = *(long **)(this + 0x30);
  lVar2 = plVar5[2];
  if (lVar2 != 0) {
    do {
      removeArmatureAllMovementCallBack(this,*(Armature **)(lVar2 + 0x10));
    } while( true );
  }
  plVar3 = plVar5;
  if (plVar5[3] == 0) {
LAB_00c69624:
    puVar1 = (void *)plVar3[2];
  }
  else {
    lVar2 = plVar5[1];
    plVar5[2] = 0;
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*plVar5 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      plVar3 = *(long **)(this + 0x30);
      plVar5[3] = 0;
      if (plVar3 == (long *)0x0) goto LAB_00c69654;
      goto LAB_00c69624;
    }
    plVar5[3] = 0;
    puVar1 = (void *)plVar5[2];
  }
  while (puVar1 != (void *)0x0) {
    pvVar6 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar6;
  }
  pvVar6 = (void *)*plVar3;
  *plVar3 = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  operator_delete(plVar3);
LAB_00c69654:
  *(undefined8 *)(this + 0x30) = 0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar6 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar6;
  }
  pvVar6 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
    return;
  }
  return;
}

