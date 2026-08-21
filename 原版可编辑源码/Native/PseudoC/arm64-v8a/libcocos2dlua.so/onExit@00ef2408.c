
/* cocos2d::ClippingNode::onExit() */

void __thiscall cocos2d::ClippingNode::onExit(ClippingNode *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) != 0)) {
    return;
  }
  if (*(long **)(this + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2f8) + 0x330))();
  }
  Node::onExit((Node *)this);
  return;
}

