
/* virtual thunk to dragonBones::Armature::setClock(dragonBones::WorldClock*) */

void __thiscall dragonBones::Armature::setClock(Armature *this,WorldClock *param_1)

{
  Armature *pAVar1;
  long *plVar2;
  long *plVar3;
  WorldClock *this_00;
  long *plVar4;
  
  pAVar1 = this + *(long *)(*(long *)this + -0x30);
  this_00 = *(WorldClock **)(pAVar1 + 0xc0);
  if (this_00 != param_1) {
    if (this_00 != (WorldClock *)0x0) {
      WorldClock::remove(this_00,(IAnimatable *)(pAVar1 + *(long *)(*(long *)pAVar1 + -0x18)));
    }
    *(WorldClock **)(pAVar1 + 0xc0) = param_1;
    if (param_1 != (WorldClock *)0x0) {
      WorldClock::add(param_1,(IAnimatable *)(pAVar1 + *(long *)(*(long *)pAVar1 + -0x18)));
    }
    plVar3 = *(long **)(pAVar1 + 0x80);
                    /* try { // try from 00d7d430 to 00e7d4db has its CatchHandler @ 00d7d92c */
    for (plVar2 = *(long **)(pAVar1 + 0x78); plVar2 != plVar3; plVar2 = plVar2 + 1) {
      plVar4 = *(long **)(*plVar2 + 0x178);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined8 *)(pAVar1 + 0xc0));
      }
    }
  }
  return;
}

