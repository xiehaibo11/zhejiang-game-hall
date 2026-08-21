
/* cocos2d::LuaStack::pushLong(long) */

void __thiscall cocos2d::LuaStack::pushLong(LuaStack *this,long param_1)

{
  lua_pushnumber((double)param_1,*(undefined8 *)(this + 0x28));
  return;
}

