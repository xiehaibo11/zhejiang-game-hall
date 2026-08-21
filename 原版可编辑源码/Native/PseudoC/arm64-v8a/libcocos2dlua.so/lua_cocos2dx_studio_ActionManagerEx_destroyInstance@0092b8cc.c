
/* lua_cocos2dx_studio_ActionManagerEx_destroyInstance(lua_State*) */

bool lua_cocos2dx_studio_ActionManagerEx_destroyInstance(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
                    /* try { // try from 0092b8e0 to 00a2b913 has its CatchHandler @ 0092b9e0 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::ActionManagerEx::destroyInstance();
                    /* try { // try from 0092b914 to 00a2b927 has its CatchHandler @ 0092b9ac */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ActionManagerEx:destroyInstance",iVar1,0);
  }
                    /* try { // try from 0092b92c to 00a2b95f has its CatchHandler @ 0092b9b0 */
  return iVar1 == 0;
}

