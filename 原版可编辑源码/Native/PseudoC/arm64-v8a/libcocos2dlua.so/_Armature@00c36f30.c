
/* cocostudio::Armature::~Armature() */

void __thiscall cocostudio::Armature::~Armature(Armature *this)

{
  ~Armature(this);
  operator_delete(this);
  return;
}

