
/* cocos2d::ui::Widget::onExit() */

void __thiscall cocos2d::ui::Widget::onExit(Widget *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) != 0)) {
    return;
  }
  Node::unscheduleUpdate((Node *)this);
  ProtectedNode::onExit((ProtectedNode *)this);
  return;
}

