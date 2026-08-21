
/* cocos2d::TransitionScene::onEnter() */

void __thiscall cocos2d::TransitionScene::onEnter(TransitionScene *this)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00f586b0 with catch @ 00f58788 */
                    /* catch() { ... } // from try @ 00f586e4 with catch @ 00f5879c */
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00f58668 with catch @ 00f587ac */
    return;
  }
  Scene::onEnter((Scene *)this);
  EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
  (**(code **)(**(long **)(this + 0x378) + 0x338))();
                    /* WARNING: Could not recover jumptable at 0x00f587ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x370) + 800))();
  return;
}

