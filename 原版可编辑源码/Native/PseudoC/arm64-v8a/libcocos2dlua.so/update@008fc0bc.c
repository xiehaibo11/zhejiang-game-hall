
/* cocos2d::ComponentLua::update(float) */

void __thiscall cocos2d::ComponentLua::update(ComponentLua *this,float param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((this[0x68] != (ComponentLua)0x0) &&
     (uVar1 = getLuaFunction(this,(basic_string *)UPDATE), (uVar1 & 1) != 0)) {
    lVar2 = LuaEngine::getInstance();
                    /* try { // try from 008fc0fc to 009fc1ab has its CatchHandler @ 008fc0fc
                       catch() { ... } // from try @ 008fc0fc with catch @ 008fc0fc
                       catch() { ... } // from try @ 008fc208 with catch @ 008fc0fc */
    toluafix_pushusertype_ccobject
              (*(lua_State **)(*(long *)(lVar2 + 8) + 0x28),*(int *)(this + 0xc),
               (int *)(this + 0x10),this,"cc.ComponentLua");
    lVar2 = LuaEngine::getInstance();
    lua_pushnumber((double)param_1,*(undefined8 *)(*(long *)(lVar2 + 8) + 0x28));
    lVar2 = LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008fc144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar2 + 8) + 0xc0))(*(long **)(lVar2 + 8),2);
    return;
  }
  return;
}

