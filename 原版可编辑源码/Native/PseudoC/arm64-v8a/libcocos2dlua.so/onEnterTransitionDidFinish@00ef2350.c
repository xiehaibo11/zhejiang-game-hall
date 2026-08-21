
/* cocos2d::ClippingNode::onEnterTransitionDidFinish() */

void __thiscall cocos2d::ClippingNode::onEnterTransitionDidFinish(ClippingNode *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,2), (uVar1 & 1) == 0)) {
    Node::onEnterTransitionDidFinish((Node *)this);
    if (*(long **)(this + 0x2f8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ef239c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x2f8) + 0x328))();
      return;
    }
  }
  return;
}

