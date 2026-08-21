
/* spine::SkeletonRenderer::update(float) */

void __thiscall spine::SkeletonRenderer::update(SkeletonRenderer *this,float param_1)

{
  cocos2d::Node::update((Node *)this,param_1);
  spSkeleton_update(*(float *)(this + 0x390) * param_1,*(undefined8 *)(this + 0x388));
  return;
}

