
/* spine::SkeletonRenderer::getRenderOrder() const */

undefined4 __thiscall spine::SkeletonRenderer::getRenderOrder(SkeletonRenderer *this)

{
  if (*(long *)(this + 0x98) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x98) + 0x110);
  }
  return 0;
}

