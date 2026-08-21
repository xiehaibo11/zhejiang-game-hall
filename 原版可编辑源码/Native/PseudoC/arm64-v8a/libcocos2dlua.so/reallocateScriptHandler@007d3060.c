
/* cocos2d::LuaStack::reallocateScriptHandler(int) */

undefined8 cocos2d::LuaStack::reallocateScriptHandler(int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  lua_State *plVar4;
  
  uVar2 = (**(code **)(*(long *)(ulong)(uint)param_1 + 0xb8))();
  if ((uVar2 & 1) != 0) {
    plVar4 = (lua_State *)((long *)(ulong)(uint)param_1)[5];
    iVar1 = lua_gettop(plVar4);
    uVar3 = toluafix_ref_function(plVar4,iVar1,0);
    return uVar3;
  }
  return 0xffffffff;
}

