
/* universe::create_once_function(lua_State*, int, int*, char const*) */

bool universe::create_once_function(lua_State *param_1,int param_2,int *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lua_type();
  if (iVar1 != 6) {
                    /* try { // try from 009e4090 to 00ae40a3 has its CatchHandler @ 009e40ac */
    luaL_error(param_1,"%s: arg %d is not a function",param_4,param_2);
                    /* try { // try from 009e40a4 to 00ae40c7 has its CatchHandler @ 009e3fc0 */
  }
  else {
    lua_pushvalue(param_1,param_2);
    iVar2 = luaL_ref(param_1,0xffffd8f0);
    *param_3 = iVar2;
  }
                    /* catch() { ... } // from try @ 009e4010 with catch @ 009e40ac
                       catch() { ... } // from try @ 009e4090 with catch @ 009e40ac */
  return iVar1 == 6;
}

