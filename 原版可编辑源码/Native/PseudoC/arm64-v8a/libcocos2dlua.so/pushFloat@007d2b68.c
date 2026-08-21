
/* cocos2d::LuaStack::pushFloat(float) */

void __thiscall cocos2d::LuaStack::pushFloat(LuaStack *this,float param_1)

{
  lua_pushnumber((double)param_1,*(undefined8 *)(this + 0x28));
  return;
}

