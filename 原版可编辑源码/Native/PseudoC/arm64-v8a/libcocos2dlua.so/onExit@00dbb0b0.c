
/* cocos2d::ui::ScrollView::onExit() */

void __thiscall cocos2d::ui::ScrollView::onExit(ScrollView *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) == 2) &&
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar1 & 1) != 0)) {
                    /* try { // try from 00dbb0dc to 00ebb0e3 has its CatchHandler @ 00dbb288 */
    return;
  }
  Layout::onExit((Layout *)this);
                    /* try { // try from 00dbb0f0 to 00ebb11f has its CatchHandler @ 00dbb290 */
                    /* WARNING: Could not recover jumptable at 0x00dbb104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6e8))(this);
  return;
}

