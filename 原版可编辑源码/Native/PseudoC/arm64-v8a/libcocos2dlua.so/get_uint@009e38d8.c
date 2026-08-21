
/* universe::get_uint(lua_State*, int, unsigned int*, char const*) */

bool universe::get_uint(lua_State *param_1,int param_2,uint *param_3,char *param_4)

{
  int iVar1;
  double dVar2;
  
  iVar1 = lua_isnumber();
  if (iVar1 == 0) {
    luaL_error(param_1,"%s: arg %d is not a number",param_4,param_2);
                    /* try { // try from 009e3934 to 00ae393f has its CatchHandler @ 009e3a04 */
  }
  else {
                    /* try { // try from 009e3908 to 00ae390f has its CatchHandler @ 009e3a04 */
    dVar2 = (double)lua_tonumber(param_1,param_2);
                    /* try { // try from 009e3910 to 00ae3933 has its CatchHandler @ 009e38a0 */
    *param_3 = (int)dVar2;
  }
                    /* try { // try from 009e3940 to 00ae3967 has its CatchHandler @ 009e38a0 */
  return iVar1 != 0;
}

