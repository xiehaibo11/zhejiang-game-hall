
/* cocos2d::ComponentLua::getUserData() */

void __thiscall cocos2d::ComponentLua::getUserData(ComponentLua *this)

{
  long lVar1;
  
  lVar1 = LuaEngine::getInstance();
  if (this != (ComponentLua *)0x0) {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(*(long *)(lVar1 + 8) + 0x28),*(int *)(this + 0xc),
               (int *)(this + 0x10),this,"cc.ComponentLua");
    return;
  }
  lua_pushnil();
  return;
}

