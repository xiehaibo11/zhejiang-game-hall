
/* cocos2d::LuaStack::removeScriptHandler(int) */

void __thiscall cocos2d::LuaStack::removeScriptHandler(LuaStack *this,int param_1)

{
  toluafix_remove_function_by_refid(*(lua_State **)(this + 0x28),param_1);
  return;
}

