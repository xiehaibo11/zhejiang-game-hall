
/* spine::SkeletonRenderer::onExit() */

void __thiscall spine::SkeletonRenderer::onExit(SkeletonRenderer *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = cocos2d::ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1),
     (uVar1 & 1) != 0)) {
    return;
  }
  cocos2d::Node::onExit((Node *)this);
  cocos2d::Node::unscheduleUpdate((Node *)this);
  return;
}

