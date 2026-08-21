
/* cocos2d::LuaStack::loadChunksFromZIP(char const*) */

undefined4 cocos2d::LuaStack::loadChunksFromZIP(char *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)param_1 + 0x80))();
  luaLoadChunksFromZIP((LuaStack *)param_1,*(lua_State **)(param_1 + 0x28));
  uVar1 = lua_toboolean(*(undefined8 *)(param_1 + 0x28),0xffffffff);
  lua_settop(*(undefined8 *)(param_1 + 0x28),0xfffffffe);
  return uVar1;
}

