
/* dragonBones::WorldClock::render() */

void __thiscall dragonBones::WorldClock::render(WorldClock *this)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  puVar6 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar6 != puVar2) {
    bVar3 = false;
    uVar7 = 0;
    do {
      plVar5 = (long *)*puVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
        bVar1 = uVar4 < uVar7;
        if (uVar7 <= uVar4) {
          uVar7 = uVar4;
        }
        bVar3 = (bool)(bVar3 | bVar1);
      }
      puVar6 = puVar6 + 1;
    } while (puVar2 != puVar6);
    if (bVar3) {
      FUN_00d274a8(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
      return;
    }
  }
  return;
}

