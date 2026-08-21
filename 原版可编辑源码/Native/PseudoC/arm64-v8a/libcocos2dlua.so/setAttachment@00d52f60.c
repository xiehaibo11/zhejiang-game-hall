
/* spine::SkeletonRenderer::setAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

bool __thiscall
spine::SkeletonRenderer::setAttachment
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  
                    /* try { // try from 00d52f60 to 00e52ffb has its CatchHandler @ 00d52d84 */
  bVar2 = *param_2;
  pbVar5 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0) {
    pbVar4 = (basic_string *)0x0;
  }
  else if (((byte)bVar2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  else {
    pbVar4 = *(basic_string **)(param_2 + 0x10);
  }
                    /* catch() { ... } // from try @ 00d52ec4 with catch @ 00d52fac */
  iVar3 = spSkeleton_setAttachment(*(undefined8 *)(this + 0x388),pbVar5,pbVar4);
                    /* catch() { ... } // from try @ 00d52eb8 with catch @ 00d52fb0 */
                    /* catch() { ... } // from try @ 00d52dd0 with catch @ 00d52fb4 */
  return iVar3 != 0;
}

