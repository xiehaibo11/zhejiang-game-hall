
/* cocostudio::Bone::~Bone() */

void __thiscall cocostudio::Bone::~Bone(Bone *this)

{
  ~Bone(this);
  operator_delete(this);
  return;
}

