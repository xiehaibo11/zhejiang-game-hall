
/* spine::SkeletonRenderer::getAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

void __thiscall
spine::SkeletonRenderer::getAttachment
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  spSkeleton_getAttachmentForSlotName(*(undefined8 *)(this + 0x388),pbVar1,pbVar2);
  return;
}

