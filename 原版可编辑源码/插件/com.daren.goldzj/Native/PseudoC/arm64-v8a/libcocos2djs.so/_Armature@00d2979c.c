
/* virtual thunk to dragonBones::Armature::~Armature() */

void __thiscall dragonBones::Armature::~Armature(Armature *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ~Armature(this + lVar1);
  operator_delete(this + lVar1);
  return;
}

