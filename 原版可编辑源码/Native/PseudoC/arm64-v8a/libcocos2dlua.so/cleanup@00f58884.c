
/* cocos2d::TransitionScene::cleanup() */

void __thiscall cocos2d::TransitionScene::cleanup(TransitionScene *this)

{
  ulong uVar1;
  
  if (((*(int *)(this + 0x208) != 2) ||
      (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,4), (uVar1 & 1) == 0)) &&
     (Node::cleanup((Node *)this), this[0x385] != (TransitionScene)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00f588d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x378) + 0x340))();
    return;
  }
  return;
}

