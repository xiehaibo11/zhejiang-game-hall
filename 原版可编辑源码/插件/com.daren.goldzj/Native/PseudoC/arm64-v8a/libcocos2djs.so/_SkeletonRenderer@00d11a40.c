
/* non-virtual thunk to spine::SkeletonRenderer::~SkeletonRenderer() */

void __thiscall spine::SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)

{
  SkeletonRenderer *this_00;
  
  this_00 = this + -0x10;
  *(undefined ***)this_00 = &PTR__SkeletonRenderer_01c8fbf8;
  *(undefined ***)this = &PTR__SkeletonRenderer_01c8fc58;
  destroy(this_00);
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  cocos2d::Ref::~Ref((Ref *)this_00);
  operator_delete(this_00);
  return;
}

