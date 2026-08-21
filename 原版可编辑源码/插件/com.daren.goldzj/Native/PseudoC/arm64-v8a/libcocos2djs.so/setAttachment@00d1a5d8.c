
/* spine::SkeletonCacheAnimation::setAttachment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

uint __thiscall
spine::SkeletonCacheAnimation::setAttachment
          (SkeletonCacheAnimation *this,basic_string *param_1,basic_string *param_2)

{
  uint uVar1;
  
  uVar1 = SkeletonRenderer::setAttachment(*(SkeletonRenderer **)(this + 0xe0),param_1,param_2);
  SkeletonCache::resetAllAnimationData(*(SkeletonCache **)(this + 0xe0));
  return uVar1 & 1;
}

