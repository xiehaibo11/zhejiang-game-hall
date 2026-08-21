
/* universe::get_ulong_long(lua_State*, int, unsigned long long*, char const*) */

bool universe::get_ulong_long(lua_State *param_1,int param_2,ulonglong *param_3,char *param_4)

{
  int iVar1;
  double dVar2;
  
                    /* try { // try from 009e39b8 to 00ae39c3 has its CatchHandler @ 009e3a00 */
                    /* try { // try from 009e39c4 to 00ae3a07 has its CatchHandler @ 009e38a0 */
  iVar1 = lua_isnumber();
  if (iVar1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009e3968 with catch @ 009e3a00
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3990 with catch @ 009e3a00
                       catch(type#1 @ 00000000) { ... } // from try @ 009e39b8 with catch @ 009e3a00
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009e3908 with catch @ 009e3a04
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3934 with catch @ 009e3a04
                        */
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
  }
  else {
    dVar2 = (double)lua_tonumber(param_1,param_2);
    *param_3 = (long)dVar2;
  }
  return iVar1 != 0;
}

