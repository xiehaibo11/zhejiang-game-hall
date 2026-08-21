
/* spine::SkeletonRenderer::setToSetupPose() */

void __thiscall spine::SkeletonRenderer::setToSetupPose(SkeletonRenderer *this)

{
  if (*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) {
    Skeleton::setToSetupPose(*(Skeleton **)(this + 0x30));
    return;
  }
  return;
}

