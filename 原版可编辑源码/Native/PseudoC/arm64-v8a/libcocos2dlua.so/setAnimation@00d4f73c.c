
/* spine::SkeletonAnimation::setAnimation(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

undefined8 __thiscall
spine::SkeletonAnimation::setAnimation
          (SkeletonAnimation *this,int param_1,basic_string *param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  basic_string *pbVar3;
  
  pbVar3 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  lVar1 = spSkeletonData_findAnimation(**(undefined8 **)(this + 0x388),pbVar3);
  if (lVar1 != 0) {
    uVar2 = spAnimationState_setAnimation(*(undefined8 *)(this + 0x3a8),param_1,lVar1,param_3);
    return uVar2;
  }
  pbVar3 = param_2 + 1;
  if (((byte)*param_2 & 1) != 0) {
    pbVar3 = *(basic_string **)(param_2 + 0x10);
  }
  cocos2d::log("Spine: Animation not found: %s",pbVar3);
  return 0;
}

