
/* cocos2d::ComponentLua::onExit() */

void __thiscall cocos2d::ComponentLua::onExit(ComponentLua *this)

{
  ulong uVar1;
  long lVar2;
  
  if ((this[0x68] != (ComponentLua)0x0) &&
     (uVar1 = getLuaFunction(this,(basic_string *)ON_EXIT), (uVar1 & 1) != 0)) {
    lVar2 = LuaEngine::getInstance();
                    /* try { // try from 008fc31c to 009fc353 has its CatchHandler @ 008fc494 */
    toluafix_pushusertype_ccobject
              (*(lua_State **)(*(long *)(lVar2 + 8) + 0x28),*(int *)(this + 0xc),
               (int *)(this + 0x10),this,"cc.ComponentLua");
    lVar2 = LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008fc350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar2 + 8) + 0xc0))(*(long **)(lVar2 + 8),1);
    return;
  }
  return;
}

