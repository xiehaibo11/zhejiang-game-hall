
/* cocostudio::Bone::removeFromParent(bool) */

void __thiscall cocostudio::Bone::removeFromParent(Bone *this,bool param_1)

{
  if (*(Bone **)(this + 0x338) != (Bone *)0x0) {
    removeChildBone(*(Bone **)(this + 0x338),this,param_1);
    return;
  }
  return;
}

