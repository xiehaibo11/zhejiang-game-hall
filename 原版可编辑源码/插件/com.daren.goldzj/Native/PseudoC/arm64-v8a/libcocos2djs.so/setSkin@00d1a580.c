
/* spine::SkeletonCacheAnimation::setSkin(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
spine::SkeletonCacheAnimation::setSkin(SkeletonCacheAnimation *this,basic_string *param_1)

{
  SkeletonRenderer::setSkin(*(SkeletonRenderer **)(this + 0xe0),param_1);
  SkeletonCache::resetAllAnimationData(*(SkeletonCache **)(this + 0xe0));
  return;
}

