
/* cocos2d::ui::ScrollView::onEnter() */

void __thiscall cocos2d::ui::ScrollView::onEnter(ScrollView *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) != 0)) {
    return;
  }
  Layout::onEnter((Layout *)this);
  Node::scheduleUpdate((Node *)this);
  return;
}

