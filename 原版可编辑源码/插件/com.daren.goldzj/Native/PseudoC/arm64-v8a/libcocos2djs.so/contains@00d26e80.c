
/* dragonBones::WorldClock::contains(dragonBones::IAnimatable const*) const */

bool __thiscall dragonBones::WorldClock::contains(WorldClock *this,IAnimatable *param_1)

{
  WorldClock *pWVar1;
  
  if (this == (WorldClock *)param_1) {
    return false;
  }
  pWVar1 = (WorldClock *)0x0;
  if (param_1 != (IAnimatable *)0x0) {
    do {
      pWVar1 = (WorldClock *)(**(code **)(*(long *)param_1 + 0x20))(param_1);
      if (pWVar1 == (WorldClock *)0x0) break;
      param_1 = (IAnimatable *)pWVar1;
    } while (pWVar1 != this);
  }
  return pWVar1 == this;
}

