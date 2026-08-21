
/* dragonBones::Armature::setClock(dragonBones::WorldClock*) */

void __thiscall dragonBones::Armature::setClock(Armature *this,WorldClock *param_1)

{
  long *plVar1;
  long *plVar2;
  WorldClock *this_00;
  long *plVar3;
  
  this_00 = *(WorldClock **)(this + 0xc0);
  if (this_00 != param_1) {
    if (this_00 != (WorldClock *)0x0) {
      WorldClock::remove(this_00,(IAnimatable *)(this + *(long *)(*(long *)this + -0x18)));
    }
    *(WorldClock **)(this + 0xc0) = param_1;
    if (param_1 != (WorldClock *)0x0) {
      WorldClock::add(param_1,(IAnimatable *)(this + *(long *)(*(long *)this + -0x18)));
    }
    plVar2 = *(long **)(this + 0x80);
    for (plVar1 = *(long **)(this + 0x78); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      plVar3 = *(long **)(*plVar1 + 0x178);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 00d7d3b4 to 00e7d3f3 has its CatchHandler @ 00d7d8a4 */
        (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(this + 0xc0));
      }
    }
  }
  return;
}

