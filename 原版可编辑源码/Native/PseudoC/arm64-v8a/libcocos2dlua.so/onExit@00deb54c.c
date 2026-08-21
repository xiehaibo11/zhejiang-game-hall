
/* cocos2d::ui::EditBox::onExit() */

void __thiscall cocos2d::ui::EditBox::onExit(EditBox *this)

{
  ulong uVar1;
  
                    /* try { // try from 00deb554 to 00eeb58b has its CatchHandler @ 00deb554
                       catch() { ... } // from try @ 00deb554 with catch @ 00deb554
                       catch() { ... } // from try @ 00deb5b0 with catch @ 00deb554 */
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) == 0)) {
    Widget::onExit((Widget *)this);
    if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* try { // try from 00deb58c to 00eeb597 has its CatchHandler @ 00deb5e8 */
                    /* WARNING: Could not recover jumptable at 0x00deb598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x5b8) + 0xf0))();
      return;
    }
  }
  return;
}

