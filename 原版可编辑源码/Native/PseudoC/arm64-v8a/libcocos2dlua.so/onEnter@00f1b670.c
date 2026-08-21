
/* cocos2d::Menu::onEnter() */

void __thiscall cocos2d::Menu::onEnter(Menu *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) != 0)) {
    return;
  }
  Node::onEnter((Node *)this);
  return;
}

