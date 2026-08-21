
/* cocos2d::LuaStack::pushObject(cocos2d::Ref*, char const*) */

void __thiscall cocos2d::LuaStack::pushObject(LuaStack *this,Ref *param_1,char *param_2)

{
  toluafix_pushusertype_ccobject
            (*(lua_State **)(this + 0x28),*(int *)(param_1 + 0xc),(int *)(param_1 + 0x10),param_1,
             param_2);
  return;
}

