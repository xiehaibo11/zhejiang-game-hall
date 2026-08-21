
/* spine::Bone::setToSetupPose() */

void __thiscall spine::Bone::setToSetupPose(Bone *this)

{
  BoneData *this_00;
  undefined4 uVar1;
  
  this_00 = *(BoneData **)(this + 8);
  uVar1 = BoneData::getX(this_00);
  *(undefined4 *)(this + 0x40) = uVar1;
  uVar1 = BoneData::getY(this_00);
  *(undefined4 *)(this + 0x44) = uVar1;
  uVar1 = BoneData::getRotation(this_00);
  *(undefined4 *)(this + 0x48) = uVar1;
  uVar1 = BoneData::getScaleX(this_00);
  *(undefined4 *)(this + 0x4c) = uVar1;
  uVar1 = BoneData::getScaleY(this_00);
  *(undefined4 *)(this + 0x50) = uVar1;
  uVar1 = BoneData::getShearX(this_00);
  *(undefined4 *)(this + 0x54) = uVar1;
  uVar1 = BoneData::getShearY(this_00);
  *(undefined4 *)(this + 0x58) = uVar1;
  return;
}

