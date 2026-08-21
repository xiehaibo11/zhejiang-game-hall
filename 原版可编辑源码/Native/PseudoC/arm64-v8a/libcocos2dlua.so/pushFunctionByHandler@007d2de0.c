
/* cocos2d::LuaStack::pushFunctionByHandler(int) */

bool __thiscall cocos2d::LuaStack::pushFunctionByHandler(LuaStack *this,int param_1)

{
  int iVar1;
  
  toluafix_get_function_by_refid(*(lua_State **)(this + 0x28),param_1);
  iVar1 = lua_type(*(undefined8 *)(this + 0x28),0xffffffff);
  if (iVar1 != 6) {
    lua_settop(*(undefined8 *)(this + 0x28),0xfffffffe);
  }
  return iVar1 == 6;
}

