
/* cocos2d::ClippingNode::onExitTransitionDidStart() */

void __thiscall cocos2d::ClippingNode::onExitTransitionDidStart(ClippingNode *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,3), (uVar1 & 1) != 0)) {
    return;
  }
  if (*(long **)(this + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2f8) + 0x338))();
  }
  Node::onExitTransitionDidStart((Node *)this);
  return;
}

