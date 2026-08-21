
/* spine::SkeletonAnimation::setMix(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

void spine::SkeletonAnimation::setMix(basic_string *param_1,basic_string *param_2,float param_3)

{
  byte *in_x2;
  byte *pbVar1;
  basic_string *pbVar2;
  
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  pbVar1 = *(byte **)(in_x2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  if ((*in_x2 & 1) == 0) {
    pbVar1 = in_x2 + 1;
  }
  spAnimationStateData_setMixByName(**(undefined8 **)(param_1 + 0x3a8),pbVar2,pbVar1);
  return;
}

