
undefined8 FUN_008fb638(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fb65c to 009fb6b7 has its CatchHandler @ 008fb74c */
  luaval_to_size(param_1,2,(Size *)(lVar1 + 0x44),"");
  return 0;
}

