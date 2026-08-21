
/* spine::SkeletonRenderer::isTwoColorTint() */

bool __thiscall spine::SkeletonRenderer::isTwoColorTint(SkeletonRenderer *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = cocos2d::Node::getGLProgramState((Node *)this);
  lVar2 = SkeletonTwoColorBatch::getInstance();
  return lVar1 == *(long *)(lVar2 + 0x58);
}

