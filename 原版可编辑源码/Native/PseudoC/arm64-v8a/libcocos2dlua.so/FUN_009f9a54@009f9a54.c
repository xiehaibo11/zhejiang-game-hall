
undefined8 * FUN_009f9a54(undefined8 param_1)

{
  int iVar1;
  undefined8 *__s;
  
  lua_pushlightuserdata(param_1,"pb.State");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 7) {
                    /* try { // try from 009f9a9c to 00af9a9f has its CatchHandler @ 009f9afc */
    __s = (undefined8 *)lua_touserdata(param_1,0xffffffff);
                    /* try { // try from 009f9aa0 to 00af9b17 has its CatchHandler @ 009f9a44 */
    lua_settop(param_1,0xfffffffe);
  }
  else {
    lua_settop(param_1,0xfffffffe);
    __s = (undefined8 *)lua_newuserdata(param_1,0x488);
    memset(__s,0,0x488);
    __s[9] = 0;
    __s[8] = 0;
    __s[0xb] = 0;
    __s[10] = 0;
    __s[8] = 0;
    __s[9] = 0x78;
    __s[1] = 0;
    *__s = 0;
    __s[3] = 0;
    __s[2] = 0;
    __s[5] = 0;
    __s[4] = 0;
    __s[7] = 0;
    __s[6] = 0;
                    /* catch() { ... } // from try @ 009f9a9c with catch @ 009f9afc */
    *(undefined4 *)(__s + 0x90) = 0xfffffffe;
    *(undefined4 *)(__s + 2) = 0x18;
    __s[7] = 0;
    __s[10] = 0;
    __s[0xb] = 0;
    __s[0xe] = 0x400;
    __s[0xf] = __s + 0x10;
    __s[0xd] = 0;
    __s[0xc] = 0x20;
    lua_getfield(param_1,0xffffd8f0,"pb.State");
    lua_setmetatable(param_1,0xfffffffe);
    lua_pushlightuserdata(param_1,"pb.State");
    lua_insert(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
  }
  return __s;
}

