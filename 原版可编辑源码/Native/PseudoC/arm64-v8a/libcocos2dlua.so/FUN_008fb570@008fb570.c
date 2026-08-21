
undefined8 FUN_008fb570(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
  luaval_to_color3b(param_1,2,(Color3B *)(lVar1 + 0x38),"fairygui.TextFormat:outlineColor");
  return 0;
}

