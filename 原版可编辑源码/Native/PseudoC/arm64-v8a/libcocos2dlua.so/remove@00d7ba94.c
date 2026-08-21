
/* dragonBones::WorldClock::remove(dragonBones::IAnimatable*) */

void __thiscall dragonBones::WorldClock::remove(WorldClock *this,IAnimatable *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  if ((puVar3 != puVar2) && ((IAnimatable *)*puVar3 != param_1)) {
    do {
      if (puVar2 + -1 == puVar3) {
        return;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while ((IAnimatable *)*puVar1 != param_1);
  }
  if (puVar3 == puVar2) {
    return;
  }
  *puVar3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00d7bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0);
  return;
}

