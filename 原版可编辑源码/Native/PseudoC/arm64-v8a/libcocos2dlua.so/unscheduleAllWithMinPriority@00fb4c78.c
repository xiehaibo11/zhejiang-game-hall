
/* cocos2d::Scheduler::unscheduleAllWithMinPriority(int) */

void __thiscall cocos2d::Scheduler::unscheduleAllWithMinPriority(Scheduler *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x60);
  while (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    lVar2 = *(long *)(lVar2 + 0x38);
    unscheduleAllForTarget(this,(void *)*puVar4);
  }
  if (param_1 < 0) {
    lVar2 = *(long *)(this + 0x28);
    if (*(long *)(this + 0x28) != 0) {
      do {
        lVar5 = *(long *)(lVar2 + 8);
        if (param_1 <= *(int *)(lVar2 + 0x48)) {
          unscheduleUpdate(this,*(void **)(lVar2 + 0x40));
        }
        lVar2 = lVar5;
      } while (lVar5 != 0);
      goto LAB_00fb4ce8;
    }
  }
  else {
LAB_00fb4ce8:
    if (0 < param_1) goto LAB_00fb4d10;
  }
  lVar2 = *(long *)(this + 0x30);
  while (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x40);
    lVar2 = *(long *)(lVar2 + 8);
    unscheduleUpdate(this,(void *)*puVar4);
  }
LAB_00fb4d10:
  lVar2 = *(long *)(this + 0x38);
  while (lVar5 = lVar2, lVar5 != 0) {
    lVar2 = *(long *)(lVar5 + 8);
    if (param_1 <= *(int *)(lVar5 + 0x48)) {
      unscheduleUpdate(this,*(void **)(lVar5 + 0x40));
    }
  }
  puVar4 = *(undefined8 **)(this + 0x78);
  puVar1 = *(undefined8 **)(this + 0x80);
  if (puVar4 != puVar1) {
    do {
      puVar3 = puVar4 + 1;
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar3;
    } while (puVar1 != puVar3);
    puVar4 = *(undefined8 **)(this + 0x78);
  }
  *(undefined8 **)(this + 0x80) = puVar4;
  return;
}

