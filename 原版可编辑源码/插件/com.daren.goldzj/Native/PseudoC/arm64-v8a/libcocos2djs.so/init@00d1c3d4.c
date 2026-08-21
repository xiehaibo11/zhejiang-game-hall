
/* dragonBones::Animation::init(dragonBones::Armature*) */

void __thiscall dragonBones::Animation::init(Animation *this,Armature *param_1)

{
  AnimationConfig *pAVar1;
  
  if (*(long *)(this + 0x68) != 0) {
    return;
  }
  *(Armature **)(this + 0x68) = param_1;
  pAVar1 = BaseObject::borrowObject<dragonBones::AnimationConfig>();
  *(AnimationConfig **)(this + 0x70) = pAVar1;
  return;
}

