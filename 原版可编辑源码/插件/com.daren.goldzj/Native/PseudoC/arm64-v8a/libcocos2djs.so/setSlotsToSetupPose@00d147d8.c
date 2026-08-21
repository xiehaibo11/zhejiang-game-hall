
/* spine::SkeletonRenderer::setSlotsToSetupPose() */

void __thiscall spine::SkeletonRenderer::setSlotsToSetupPose(SkeletonRenderer *this)

{
  if (*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) {
    Skeleton::setSlotsToSetupPose(*(Skeleton **)(this + 0x30));
    return;
  }
  return;
}

