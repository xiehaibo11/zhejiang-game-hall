
/* dragonBones::Armature::~Armature() */

void __thiscall dragonBones::Armature::~Armature(Armature *this)

{
  ~Armature(this);
  operator_delete(this);
  return;
}

