
/* lua_cocos2dx_studio_Frame_getEasingParams(lua_State*) */

bool lua_cocos2dx_studio_Frame_getEasingParams(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  vector *pvVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0093fab8 to 00a3facb has its CatchHandler @ 0093fb50 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pvVar3 = (vector *)(**(code **)(*plVar2 + 0x68))(plVar2);
                    /* try { // try from 0093fb04 to 00a3fb9f has its CatchHandler @ 0093f894 */
    ccvector_float_to_luaval(param_1,pvVar3);
  }
  else {
                    /* try { // try from 0093fad0 to 00a3fb03 has its CatchHandler @ 0093fb54 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Frame:getEasingParams",iVar1,0);
  }
  return iVar1 == 0;
}

