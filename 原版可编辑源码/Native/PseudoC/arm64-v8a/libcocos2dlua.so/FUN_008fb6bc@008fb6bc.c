
undefined8 FUN_008fb6bc(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  luaval_to_color3b(param_1,2,(Color3B *)(lVar1 + 0x50),"fairygui.TextFormat:glowColor");
  return 0;
}

