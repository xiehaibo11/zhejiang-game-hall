
/* dragonBones::WorldClock::setClock(dragonBones::WorldClock*) */

void __thiscall dragonBones::WorldClock::setClock(WorldClock *this,WorldClock *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  WorldClock *pWVar3;
  undefined8 *puVar4;
  
  pWVar3 = *(WorldClock **)(this + 0x30);
  if (pWVar3 != param_1) {
    if (pWVar3 != (WorldClock *)0x0) {
      puVar4 = *(undefined8 **)(pWVar3 + 0x18);
      puVar2 = *(undefined8 **)(pWVar3 + 0x20);
      if ((puVar4 != puVar2) && ((WorldClock *)*puVar4 != this)) {
        do {
          if (puVar2 + -1 == puVar4) goto LAB_00d7bbd0;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
        } while ((WorldClock *)*puVar1 != this);
      }
      if (puVar4 != puVar2) {
        *puVar4 = 0;
        (**(code **)(*(long *)this + 0x20))(this,0);
      }
    }
LAB_00d7bbd0:
    *(WorldClock **)(this + 0x30) = param_1;
    if (param_1 != (WorldClock *)0x0) {
      add(param_1,(IAnimatable *)this);
      return;
    }
  }
  return;
}

