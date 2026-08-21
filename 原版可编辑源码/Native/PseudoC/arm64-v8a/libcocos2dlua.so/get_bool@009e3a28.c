
/* universe::get_bool(lua_State*, int, bool*, char const*) */

undefined8 universe::get_bool(lua_State *param_1,int param_2,bool *param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_type();
  if ((iVar1 == 1) || (iVar1 = lua_type(param_1,param_2), iVar1 == 0)) {
    iVar1 = lua_toboolean(param_1,param_2);
    *param_3 = iVar1 != 0;
    uVar2 = 1;
  }
  else {
                    /* try { // try from 009e3a68 to 00ae3b0f has its CatchHandler @ 009e3a68
                       catch() { ... } // from try @ 009e3a68 with catch @ 009e3a68
                       catch() { ... } // from try @ 009e3b18 with catch @ 009e3a68 */
    luaL_error(param_1,"%s: arg %d is not a boolean",param_4,param_2);
    uVar2 = 0;
  }
  return uVar2;
}

