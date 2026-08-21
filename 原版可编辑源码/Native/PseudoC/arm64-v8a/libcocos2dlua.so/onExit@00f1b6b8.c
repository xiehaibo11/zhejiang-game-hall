
/* cocos2d::Menu::onExit() */

void __thiscall cocos2d::Menu::onExit(Menu *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) != 0)) {
    return;
  }
  if (*(int *)(this + 800) == 1) {
    if (*(long **)(this + 0x328) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x328) + 0x540))();
      *(undefined8 *)(this + 0x328) = 0;
    }
                    /* try { // try from 00f1b714 to 0101b71b has its CatchHandler @ 00f1bac0 */
    *(undefined4 *)(this + 800) = 0;
  }
                    /* try { // try from 00f1b720 to 0101b727 has its CatchHandler @ 00f1babc */
  Node::onExit((Node *)this);
  return;
}

