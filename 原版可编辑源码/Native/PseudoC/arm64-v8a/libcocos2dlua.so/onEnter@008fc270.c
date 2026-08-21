
/* cocos2d::ComponentLua::onEnter() */

void __thiscall cocos2d::ComponentLua::onEnter(ComponentLua *this)

{
  ulong uVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 008fc1c8 with catch @ 008fc290 */
                    /* catch() { ... } // from try @ 008fc1ac with catch @ 008fc294 */
  if ((this[0x68] != (ComponentLua)0x0) &&
     (uVar1 = getLuaFunction(this,(basic_string *)ON_ENTER), (uVar1 & 1) != 0)) {
    lVar2 = LuaEngine::getInstance();
                    /* try { // try from 008fc2b0 to 009fc31b has its CatchHandler @ 008fc2b0
                       catch() { ... } // from try @ 008fc2b0 with catch @ 008fc2b0
                       catch() { ... } // from try @ 008fc3d0 with catch @ 008fc2b0 */
    toluafix_pushusertype_ccobject
              (*(lua_State **)(*(long *)(lVar2 + 8) + 0x28),*(int *)(this + 0xc),
               (int *)(this + 0x10),this,"cc.ComponentLua");
    lVar2 = LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008fc2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar2 + 8) + 0xc0))(*(long **)(lVar2 + 8),1);
    return;
  }
  return;
}

