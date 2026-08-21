
/* spine::SkeletonCacheAnimation::setToSetupPose() */

void __thiscall spine::SkeletonCacheAnimation::setToSetupPose(SkeletonCacheAnimation *this)

{
  if (*(SkeletonRenderer **)(this + 0xe0) != (SkeletonRenderer *)0x0) {
    SkeletonRenderer::setToSetupPose(*(SkeletonRenderer **)(this + 0xe0));
    return;
  }
  return;
}

