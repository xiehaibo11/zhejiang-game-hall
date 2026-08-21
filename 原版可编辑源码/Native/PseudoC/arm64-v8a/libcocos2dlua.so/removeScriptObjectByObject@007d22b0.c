
/* cocos2d::LuaStack::removeScriptObjectByObject(cocos2d::Ref*) */

void __thiscall cocos2d::LuaStack::removeScriptObjectByObject(LuaStack *this,Ref *param_1)

{
  toluafix_remove_ccobject_by_refid(*(lua_State **)(this + 0x28),*(int *)(param_1 + 0x10));
  return;
}

