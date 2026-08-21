
undefined8 FUN_009f7cc8(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)luaL_checkudata(param_1,1,"pb.Slice");
                    /* try { // try from 009f7cec to 00af7d3b has its CatchHandler @ 009f7cec
                       catch() { ... } // from try @ 009f7cec with catch @ 009f7cec
                       catch() { ... } // from try @ 009f7d6c with catch @ 009f7cec
                       catch() { ... } // from try @ 009f7dd8 with catch @ 009f7cec */
  lVar3 = lua_objlen(param_1,1);
  if (lVar3 == 0x60) {
    if ((undefined8 *)puVar2[3] != puVar2 + 6) {
      free((undefined8 *)puVar2[3]);
    }
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[3] = puVar2 + 6;
    puVar2[5] = 2;
  }
                    /* try { // try from 009f7d3c to 00af7d6b has its CatchHandler @ 009f7de0 */
  lua_pushnil(param_1);
  lua_pushlightuserdata(param_1,puVar2);
  lua_insert(param_1,0xfffffffe);
  lua_rawset(param_1,0xffffd8f0);
                    /* try { // try from 009f7d6c to 00af7dc3 has its CatchHandler @ 009f7cec */
  iVar1 = lua_type(param_1,2);
  if (0 < iVar1) {
    FUN_009fb208(param_1,2,puVar2,lVar3);
  }
  lua_settop(param_1,1);
  return 1;
}

