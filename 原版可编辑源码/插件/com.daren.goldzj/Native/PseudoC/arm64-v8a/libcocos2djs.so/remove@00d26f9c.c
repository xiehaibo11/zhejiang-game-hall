
/* dragonBones::WorldClock::remove(dragonBones::IAnimatable*) */

void __thiscall dragonBones::WorldClock::remove(WorldClock *this,IAnimatable *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  IAnimatable *pIVar3;
  
  puVar2 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar2 != puVar1) {
    pIVar3 = (IAnimatable *)*puVar2;
    while (pIVar3 != param_1) {
      puVar2 = puVar2 + 1;
      if (puVar1 == puVar2) {
        return;
      }
      pIVar3 = (IAnimatable *)*puVar2;
    }
  }
  if (puVar2 == puVar1) {
    return;
  }
  *puVar2 = 0;
                    /* WARNING: Could not recover jumptable at 0x00d26fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,0);
  return;
}

