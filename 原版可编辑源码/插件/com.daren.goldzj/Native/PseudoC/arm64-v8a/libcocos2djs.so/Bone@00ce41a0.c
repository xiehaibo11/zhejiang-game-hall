
/* spine::Bone::Bone(spine::BoneData&, spine::Skeleton&, spine::Bone*) */

void __thiscall spine::Bone::Bone(Bone *this,BoneData *param_1,Skeleton *param_2,Bone *param_3)

{
  undefined4 uVar1;
  
  Updatable::Updatable((Updatable *)this);
  *(Skeleton **)(this + 0x10) = param_2;
  *(Bone **)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x78] = (Bone)0x0;
  *(undefined8 *)(this + 0x8c) = 0x3f800000;
  *(undefined ***)this = &PTR__Bone_01c8e9f8;
  *(BoneData **)(this + 8) = param_1;
  *(undefined ***)(this + 0x20) = &PTR__Vector_01c8d080;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x7c) = 0x3f800000;
  *(undefined2 *)(this + 0x94) = 0;
  uVar1 = BoneData::getX(param_1);
  *(undefined4 *)(this + 0x40) = uVar1;
  uVar1 = BoneData::getY(param_1);
  *(undefined4 *)(this + 0x44) = uVar1;
  uVar1 = BoneData::getRotation(param_1);
  *(undefined4 *)(this + 0x48) = uVar1;
  uVar1 = BoneData::getScaleX(param_1);
  *(undefined4 *)(this + 0x4c) = uVar1;
  uVar1 = BoneData::getScaleY(param_1);
  *(undefined4 *)(this + 0x50) = uVar1;
  uVar1 = BoneData::getShearX(param_1);
  *(undefined4 *)(this + 0x54) = uVar1;
  uVar1 = BoneData::getShearY(param_1);
  *(undefined4 *)(this + 0x58) = uVar1;
  return;
}

