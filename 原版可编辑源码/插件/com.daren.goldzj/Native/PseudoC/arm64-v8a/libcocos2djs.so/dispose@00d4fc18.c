
/* dragonBones::CCArmatureDisplay::dispose(bool) */

void dragonBones::CCArmatureDisplay::dispose(bool param_1)

{
  Armature *this;
  
  this = *(Armature **)((ulong)param_1 + 0x10);
  if (this != (Armature *)0x0) {
    Armature::dispose(this);
    *(undefined8 *)((ulong)param_1 + 0x10) = 0;
  }
  return;
}

