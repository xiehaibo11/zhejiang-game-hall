
/* spine::SkeletonAnimation::findAnimation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
spine::SkeletonAnimation::findAnimation(SkeletonAnimation *this,basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  spSkeletonData_findAnimation(**(undefined8 **)(this + 0x388),pbVar1);
  return;
}

