
/* spine::SkeletonRenderer::findSlot(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall spine::SkeletonRenderer::findSlot(SkeletonRenderer *this,basic_string *param_1)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00d52eb8 to 00e52ebf has its CatchHandler @ 00d52fb0 */
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
                    /* try { // try from 00d52ec4 to 00e52ecf has its CatchHandler @ 00d52fac */
  spSkeleton_findSlot(*(undefined8 *)(this + 0x388),pbVar1);
  return;
}

