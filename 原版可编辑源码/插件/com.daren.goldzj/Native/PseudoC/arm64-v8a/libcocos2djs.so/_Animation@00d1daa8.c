
/* dragonBones::Animation::~Animation() */

void __thiscall dragonBones::Animation::~Animation(Animation *this)

{
  ~Animation(this);
  operator_delete(this);
  return;
}

