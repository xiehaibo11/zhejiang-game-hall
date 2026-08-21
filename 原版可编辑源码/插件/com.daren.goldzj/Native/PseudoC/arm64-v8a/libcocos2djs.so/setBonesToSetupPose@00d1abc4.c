
/* spine::SkeletonCacheAnimation::setBonesToSetupPose() */

void __thiscall spine::SkeletonCacheAnimation::setBonesToSetupPose(SkeletonCacheAnimation *this)

{
  if (*(SkeletonRenderer **)(this + 0xe0) != (SkeletonRenderer *)0x0) {
    SkeletonRenderer::setBonesToSetupPose(*(SkeletonRenderer **)(this + 0xe0));
    return;
  }
  return;
}

