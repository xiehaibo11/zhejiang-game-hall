
/* spine::SkeletonCacheAnimation::setSlotsToSetupPose() */

void __thiscall spine::SkeletonCacheAnimation::setSlotsToSetupPose(SkeletonCacheAnimation *this)

{
  if (*(SkeletonRenderer **)(this + 0xe0) != (SkeletonRenderer *)0x0) {
    SkeletonRenderer::setSlotsToSetupPose(*(SkeletonRenderer **)(this + 0xe0));
    return;
  }
  return;
}

