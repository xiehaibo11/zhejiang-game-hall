
/* dragonBones::Armature::~Armature() */

void __thiscall dragonBones::Armature::~Armature(Armature *this)

{
                    /* try { // try from 00d7d4fc to 00e7d50f has its CatchHandler @ 00d7d89c */
  ~Armature(this);
                    /* try { // try from 00d7d520 to 00e7d527 has its CatchHandler @ 00d7d898 */
  operator_delete(this);
  return;
}

