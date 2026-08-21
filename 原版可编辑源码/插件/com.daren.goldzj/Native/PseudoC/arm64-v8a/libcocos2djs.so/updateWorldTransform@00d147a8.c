
/* spine::SkeletonRenderer::updateWorldTransform() */

void __thiscall spine::SkeletonRenderer::updateWorldTransform(SkeletonRenderer *this)

{
  if (*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) {
    Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x30));
    return;
  }
  return;
}

