
/* cocos2d::LuaStack::cleanupXXTEAKeyAndSign() */

void __thiscall cocos2d::LuaStack::cleanupXXTEAKeyAndSign(LuaStack *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    free(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x50) = 0;
  }
  return;
}

