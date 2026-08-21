
/* dragonBones::Bone::init(dragonBones::BoneData const*, dragonBones::Armature*) */

void __thiscall dragonBones::Bone::init(Bone *this,BoneData *param_1,Armature *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0xa8) == 0) {
    *(BoneData **)(this + 0xa8) = param_1;
    *(Armature **)(this + 0x68) = param_2;
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar1 = Armature::getBone(param_2,(basic_string *)(*(long *)(param_1 + 0x50) + 0x18));
      param_2 = *(Armature **)(this + 0x68);
      *(undefined8 *)(this + 0xc0) = uVar1;
    }
    Armature::_addBone(param_2,this);
    *(long *)(this + 0x58) = *(long *)(this + 0xa8) + 0x30;
  }
  return;
}

