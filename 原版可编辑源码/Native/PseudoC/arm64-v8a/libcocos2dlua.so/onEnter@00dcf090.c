
/* cocos2d::ui::TextField::onEnter() */

void __thiscall cocos2d::ui::TextField::onEnter(TextField *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) != 0)) {
    return;
  }
  Widget::onEnter((Widget *)this);
  Node::scheduleUpdate((Node *)this);
  return;
}

