
/* dragonBones::Slot::setChildArmature(dragonBones::Armature*) */

void __thiscall dragonBones::Slot::setChildArmature(Slot *this,Armature *param_1)

{
  if (*(Armature **)(this + 0x178) != param_1) {
    setDisplay(this,param_1,1);
    return;
  }
  return;
}

