
/* cocos2d::ui::Layout::onExit() */

void __thiscall cocos2d::ui::Layout::onExit(Layout *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) == 0)) {
    Widget::onExit((Widget *)this);
                    /* try { // try from 00dae404 to 00eae407 has its CatchHandler @ 00dae55c */
                    /* try { // try from 00dae408 to 00eae56f has its CatchHandler @ 00dae3c8 */
    if (*(long **)(this + 0x5b0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dae41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x5b0) + 0x330))();
      return;
    }
  }
  return;
}

