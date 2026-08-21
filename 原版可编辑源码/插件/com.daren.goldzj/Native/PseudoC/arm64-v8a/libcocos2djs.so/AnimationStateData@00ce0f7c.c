
/* spine::AnimationStateData::AnimationStateData(spine::SkeletonData*) */

void __thiscall
spine::AnimationStateData::AnimationStateData(AnimationStateData *this,SkeletonData *param_1)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__AnimationStateData_01c8e5b8;
  *(SkeletonData **)(this + 8) = param_1;
  *(undefined ***)(this + 0x18) = &PTR__HashMap_01c8e628;
  return;
}

