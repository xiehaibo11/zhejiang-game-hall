
undefined8 FUN_008fb5f4(lua_State *param_1)

{
  long lVar1;
  
                    /* try { // try from 008fb608 to 009fb65b has its CatchHandler @ 008fb608
                       catch() { ... } // from try @ 008fb608 with catch @ 008fb608
                       catch() { ... } // from try @ 008fb6b8 with catch @ 008fb608
                       catch() { ... } // from try @ 008fb738 with catch @ 008fb608 */
  lVar1 = tolua_tousertype(param_1,1,0);
  luaval_to_color3b(param_1,2,(Color3B *)(lVar1 + 0x40),"fairygui.TextFormat:shadowColor");
  return 0;
}

