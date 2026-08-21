
/* cocostudio::ArmatureMovementDispatcher::~ArmatureMovementDispatcher() */

void __thiscall
cocostudio::ArmatureMovementDispatcher::~ArmatureMovementDispatcher
          (ArmatureMovementDispatcher *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = *(long **)(this + 0x28);
  *(undefined ***)this = &PTR__ArmatureMovementDispatcher_016ca8c0;
  if (plVar4[3] != 0) {
    puVar1 = (void *)plVar4[2];
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = plVar4[1];
    plVar4[2] = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*plVar4 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    plVar4[3] = 0;
    plVar4 = *(long **)(this + 0x28);
  }
  if (plVar4 != (long *)0x0) {
    puVar1 = (void *)plVar4[2];
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    pvVar5 = (void *)*plVar4;
    *plVar4 = 0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    operator_delete(plVar4);
  }
  *(undefined8 *)(this + 0x28) = 0;
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

