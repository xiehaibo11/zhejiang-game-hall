
/* universe::get_double(lua_State*, int, double*, char const*) */

bool universe::get_double(lua_State *param_1,int param_2,double *param_3,char *param_4)

{
  int iVar1;
  double dVar2;
  
  iVar1 = lua_isnumber();
  if (iVar1 == 0) {
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
  }
  else {
                    /* catch() { ... } // from try @ 009e3b10 with catch @ 009e3b50 */
    dVar2 = (double)lua_tonumber(param_1,param_2);
    *param_3 = dVar2;
  }
  return iVar1 != 0;
}

