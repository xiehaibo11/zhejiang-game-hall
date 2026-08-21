
/* spine::SkeletonCacheAnimation::updateAnimationCache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
spine::SkeletonCacheAnimation::updateAnimationCache
          (SkeletonCacheAnimation *this,basic_string *param_1)

{
  SkeletonCache::resetAnimationData(*(SkeletonCache **)(this + 0xe0),param_1);
  return;
}

