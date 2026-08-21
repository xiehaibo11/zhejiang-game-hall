
/* spine::SkeletonCacheAnimation::setSkin(char const*) */

void __thiscall spine::SkeletonCacheAnimation::setSkin(SkeletonCacheAnimation *this,char *param_1)

{
  SkeletonRenderer::setSkin(*(SkeletonRenderer **)(this + 0xe0),param_1);
  SkeletonCache::resetAllAnimationData(*(SkeletonCache **)(this + 0xe0));
  return;
}

