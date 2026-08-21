
/* virtual thunk to dragonBones::CCArmatureDisplay::dbUpdate() */

void __thiscall dragonBones::CCArmatureDisplay::dbUpdate(CCArmatureDisplay *this)

{
  if ((DragonBones::debugDraw != (CCArmatureDisplay)0x0) ||
     (this[*(long *)(*(long *)this + -0x50) + 0x2f9] != (CCArmatureDisplay)0x0)) {
    this[*(long *)(*(long *)this + -0x50) + 0x2f9] = DragonBones::debugDraw;
  }
  return;
}

