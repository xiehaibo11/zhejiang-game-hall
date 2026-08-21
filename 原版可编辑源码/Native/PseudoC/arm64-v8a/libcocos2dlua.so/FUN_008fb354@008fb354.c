
undefined8 FUN_008fb354(lua_State *param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 008fb2c0 with catch @ 008fb36c
                       catch() { ... } // from try @ 008fb320 with catch @ 008fb36c */
  lVar1 = tolua_tousertype(param_1,1,0);
  luaval_to_color3b(param_1,2,(Color3B *)(lVar1 + 0x1c),"fairygui.TextFormat:color");
  return 0;
}

