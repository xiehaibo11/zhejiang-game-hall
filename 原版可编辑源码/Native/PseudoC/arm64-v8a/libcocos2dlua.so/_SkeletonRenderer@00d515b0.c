
/* spine::SkeletonRenderer::~SkeletonRenderer() */

void __thiscall spine::SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)

{
  *(undefined ***)this = &PTR__SkeletonRenderer_016d5758;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonRenderer_016d5cc8;
  if (this[0x300] != (SkeletonRenderer)0x0) {
    spSkeletonData_dispose(**(undefined8 **)(this + 0x388));
  }
  spSkeleton_dispose(*(undefined8 *)(this + 0x388));
  if (*(long *)(this + 0x308) != 0) {
    spAtlas_dispose();
  }
  if (*(long *)(this + 0x310) != 0) {
    spAttachmentLoader_dispose();
  }
  if (*(void **)(this + 0x378) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x378));
  }
  spSkeletonClipping_dispose(*(undefined8 *)(this + 0x398));
  cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(this + 800));
  cocos2d::Node::~Node((Node *)this);
  return;
}

