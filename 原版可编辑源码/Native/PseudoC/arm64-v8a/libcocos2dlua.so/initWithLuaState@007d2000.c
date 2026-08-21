
/* cocos2d::LuaStack::initWithLuaState(lua_State*) */

undefined8 __thiscall cocos2d::LuaStack::initWithLuaState(LuaStack *this,lua_State *param_1)

{
  *(lua_State **)(this + 0x28) = param_1;
  return 1;
}

