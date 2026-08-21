
/* cocos2d::ClippingNode::onEnter() */

void __thiscall cocos2d::ClippingNode::onEnter(ClippingNode *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) == 0)) {
    Node::onEnter((Node *)this);
    if (*(long **)(this + 0x2f8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ef2340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x2f8) + 800))();
      return;
    }
  }
  return;
}

