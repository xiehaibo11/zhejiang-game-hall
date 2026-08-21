
/* universe::get_long_long(lua_State*, int, long long*, char const*) */

bool universe::get_long_long(lua_State *param_1,int param_2,longlong *param_3,char *param_4)

{
  int iVar1;
  double dVar2;
  
                    /* try { // try from 009e3968 to 00ae396f has its CatchHandler @ 009e3a00 */
  iVar1 = lua_isnumber();
  if (iVar1 == 0) {
                    /* try { // try from 009e3990 to 00ae3997 has its CatchHandler @ 009e3a00 */
                    /* try { // try from 009e3998 to 00ae39b7 has its CatchHandler @ 009e38a0 */
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
  }
  else {
                    /* try { // try from 009e3970 to 00ae398f has its CatchHandler @ 009e38a0 */
    dVar2 = (double)lua_tonumber(param_1,param_2);
    *param_3 = (long)dVar2;
  }
  return iVar1 != 0;
}

