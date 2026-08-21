
/* cocos2d::LuaStack::handleAssert(char const*) */

undefined8 __thiscall cocos2d::LuaStack::handleAssert(LuaStack *this,char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(this + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    pcVar1 = "unknown";
    if (param_1 != (char *)0x0) {
      pcVar1 = param_1;
    }
    lua_pushfstring(*(undefined8 *)(this + 0x28),"ASSERT FAILED ON LUA EXECUTE: %s",pcVar1);
    lua_error(*(undefined8 *)(this + 0x28));
    uVar2 = 1;
  }
  return uVar2;
}

