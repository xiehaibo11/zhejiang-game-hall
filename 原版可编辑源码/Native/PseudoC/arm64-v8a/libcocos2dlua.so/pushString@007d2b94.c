
/* cocos2d::LuaStack::pushString(char const*, int) */

void __thiscall cocos2d::LuaStack::pushString(LuaStack *this,char *param_1,int param_2)

{
  lua_pushlstring(*(undefined8 *)(this + 0x28),param_1,(long)param_2);
  return;
}

