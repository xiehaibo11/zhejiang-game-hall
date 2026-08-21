
/* cocos2d::ui::EditBox::registerScriptEditBoxHandler(int) */

void __thiscall cocos2d::ui::EditBox::registerScriptEditBoxHandler(EditBox *this,int param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00deb734 to 00eeb76b has its CatchHandler @ 00deb734
                       catch() { ... } // from try @ 00deb734 with catch @ 00deb734
                       catch() { ... } // from try @ 00deb790 with catch @ 00deb734 */
  if (*(int *)(this + 0x5cc) != 0) {
    puVar1 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar1 + 0x50))((long *)*puVar1,*(undefined4 *)(this + 0x5cc));
    *(undefined4 *)(this + 0x5cc) = 0;
  }
  *(int *)(this + 0x5cc) = param_1;
                    /* try { // try from 00deb76c to 00eeb777 has its CatchHandler @ 00deb7c8 */
  return;
}

