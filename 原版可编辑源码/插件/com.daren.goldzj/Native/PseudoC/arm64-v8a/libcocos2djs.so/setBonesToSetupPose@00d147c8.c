
/* spine::SkeletonRenderer::setBonesToSetupPose() */

void __thiscall spine::SkeletonRenderer::setBonesToSetupPose(SkeletonRenderer *this)

{
  if (*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) {
    Skeleton::setBonesToSetupPose(*(Skeleton **)(this + 0x30));
    return;
  }
  return;
}

