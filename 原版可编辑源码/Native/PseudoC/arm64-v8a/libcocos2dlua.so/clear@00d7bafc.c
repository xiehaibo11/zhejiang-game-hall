
/* dragonBones::WorldClock::clear() */

void __thiscall dragonBones::WorldClock::clear(WorldClock *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x20);
  for (plVar1 = *(long **)(this + 0x18); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    plVar3 = (long *)*plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,0);
    }
  }
  return;
}

