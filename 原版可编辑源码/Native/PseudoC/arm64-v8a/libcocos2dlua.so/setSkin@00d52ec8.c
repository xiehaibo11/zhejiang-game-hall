
/* spine::SkeletonRenderer::setSkin(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool __thiscall spine::SkeletonRenderer::setSkin(SkeletonRenderer *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  basic_string *pbVar4;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    pbVar4 = (basic_string *)0x0;
  }
  else if (((byte)bVar2 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  else {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
  }
  iVar3 = spSkeleton_setSkinByName(*(undefined8 *)(this + 0x388),pbVar4);
                    /* try { // try from 00d52f08 to 00e52f13 has its CatchHandler @ 00d52fd0 */
  return iVar3 != 0;
}

