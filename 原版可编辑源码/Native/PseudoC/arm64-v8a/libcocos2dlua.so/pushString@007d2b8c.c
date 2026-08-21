
/* cocos2d::LuaStack::pushString(char const*) */

void cocos2d::LuaStack::pushString(char *param_1)

{
  lua_pushstring(*(undefined8 *)(param_1 + 0x28));
  return;
}

