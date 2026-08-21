
/* universe::get_float(lua_State*, int, float*, char const*) */

bool universe::get_float(lua_State *param_1,int param_2,float *param_3,char *param_4)

{
  double dVar1;
  int iVar2;
  
  iVar2 = lua_isnumber();
  if (iVar2 == 0) {
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
  }
  else {
    dVar1 = (double)lua_tonumber(param_1,param_2);
    *param_3 = (float)dVar1;
  }
                    /* try { // try from 009e3b10 to 00ae3b17 has its CatchHandler @ 009e3b50 */
                    /* try { // try from 009e3b18 to 00ae3b6b has its CatchHandler @ 009e3a68 */
  return iVar2 != 0;
}

