
/* virtual thunk to dragonBones::CCArmatureDisplay::dispose(bool) */

void __thiscall dragonBones::CCArmatureDisplay::dispose(CCArmatureDisplay *this,bool param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x60);
  if (*(Armature **)(this + lVar1 + 0x10) != (Armature *)0x0) {
    Armature::dispose(*(Armature **)(this + lVar1 + 0x10));
    *(undefined8 *)(this + lVar1 + 0x10) = 0;
  }
  return;
}

