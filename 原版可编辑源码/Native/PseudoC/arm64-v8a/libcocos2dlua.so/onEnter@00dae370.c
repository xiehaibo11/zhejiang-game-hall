
/* cocos2d::ui::Layout::onEnter() */

void __thiscall cocos2d::ui::Layout::onEnter(Layout *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) == 0)) {
    Widget::onEnter((Widget *)this);
    if (*(long **)(this + 0x5b0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x5b0) + 800))();
    }
    this[0x7b0] = (Layout)0x1;
    this[0x5e8] = (Layout)0x1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dae408 with catch @ 00dae3c8
                        */
  return;
}

