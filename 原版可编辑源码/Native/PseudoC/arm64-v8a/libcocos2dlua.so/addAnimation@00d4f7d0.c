
/* spine::SkeletonAnimation::addAnimation(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, float) */

undefined8 __thiscall
spine::SkeletonAnimation::addAnimation
          (SkeletonAnimation *this,int param_1,basic_string *param_2,bool param_3,float param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string *pbVar3;
  undefined4 in_register_00005004;
  
  pbVar3 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  lVar1 = spSkeletonData_findAnimation(**(undefined8 **)(this + 0x388),pbVar3);
  if (lVar1 != 0) {
                    /* try { // try from 00d4f838 to 00e4f8b7 has its CatchHandler @ 00d4f838
                       catch() { ... } // from try @ 00d4f838 with catch @ 00d4f838
                       catch() { ... } // from try @ 00d4f8c0 with catch @ 00d4f838
                       catch() { ... } // from try @ 00d4f990 with catch @ 00d4f838
                       catch() { ... } // from try @ 00d4f9e4 with catch @ 00d4f838
                       catch() { ... } // from try @ 00d4fa28 with catch @ 00d4f838 */
    uVar2 = spAnimationState_addAnimation
                      (CONCAT44(in_register_00005004,param_4),*(undefined8 *)(this + 0x3a8),param_1,
                       lVar1,param_3);
    return uVar2;
  }
  pbVar3 = param_2 + 1;
  if (((byte)*param_2 & 1) != 0) {
    pbVar3 = *(basic_string **)(param_2 + 0x10);
  }
  cocos2d::log("Spine: Animation not found: %s",pbVar3);
  return 0;
}

