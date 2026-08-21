
/* spine::SkeletonRenderer::getDebugData() const */

undefined8 __thiscall spine::SkeletonRenderer::getDebugData(SkeletonRenderer *this)

{
  if (*(long *)(this + 0x90) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x90) + 0xa8);
  }
  return 0;
}

