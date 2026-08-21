
/* dragonBones::WorldClock::~WorldClock() */

void __thiscall dragonBones::WorldClock::~WorldClock(WorldClock *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  plVar1 = *(long **)(this + 0x20);
  *(undefined ***)this = &PTR__WorldClock_016d66f0;
  if (plVar3 != plVar1) {
    do {
      plVar2 = (long *)*plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = *(long **)(this + 0x18);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  *(long **)(this + 0x20) = plVar3;
                    /* catch() { ... } // from try @ 00d7afd0 with catch @ 00d7b6f4 */
  operator_delete(plVar3);
  return;
}

