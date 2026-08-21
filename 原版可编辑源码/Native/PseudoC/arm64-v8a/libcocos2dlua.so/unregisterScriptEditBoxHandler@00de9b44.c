
/* cocos2d::ui::EditBox::unregisterScriptEditBoxHandler() */

void __thiscall cocos2d::ui::EditBox::unregisterScriptEditBoxHandler(EditBox *this)

{
  undefined8 *puVar1;
  
  if (*(int *)(this + 0x5cc) != 0) {
    puVar1 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar1 + 0x50))((long *)*puVar1,*(undefined4 *)(this + 0x5cc));
    *(undefined4 *)(this + 0x5cc) = 0;
  }
  return;
}

