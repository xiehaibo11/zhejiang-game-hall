
/* spine::SkeletonRenderer::~SkeletonRenderer() */

void __thiscall spine::SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)

{
  *(undefined ***)this = &PTR__SkeletonRenderer_01c8fbf8;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonRenderer_01c8fc58;
  destroy(this);
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

