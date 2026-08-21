
/* cocos2d::ui::EditBox::onEnter() */

void __thiscall cocos2d::ui::EditBox::onEnter(EditBox *this)

{
  ulong uVar1;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar1 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar1 & 1) == 0)) {
    Widget::onEnter((Widget *)this);
    if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x5b8) + 0x128))();
      return;
    }
  }
  return;
}

