
void FUN_008e380c(long param_1,int *param_2,undefined8 *param_3)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_3;
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)*param_2);
  if (pvVar2 == (void *)0x0) {
    lua_pushnil();
  }
  else {
    toluafix_pushusertype_ccobject
              (*(lua_State **)(param_1 + 8),*(int *)((long)pvVar2 + 0xc),
               (int *)((long)pvVar2 + 0x10),pvVar2,"fairygui.GObject");
  }
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008e3874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))
            (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x10),2);
  return;
}

