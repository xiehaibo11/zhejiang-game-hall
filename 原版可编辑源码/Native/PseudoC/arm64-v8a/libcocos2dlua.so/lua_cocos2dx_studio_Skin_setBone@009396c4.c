
/* lua_cocos2dx_studio_Skin_setBone(lua_State*) */

undefined4 lua_cocos2dx_studio_Skin_setBone(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 009396d0 to 00a396e7 has its CatchHandler @ 00939cf0 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009396f4 to 00a3970b has its CatchHandler @ 00939cc0 */
  if (iVar1 + -1 == 1) {
                    /* try { // try from 00939710 to 00a39727 has its CatchHandler @ 00939c7c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar3 & 1) != 0)) {
                    /* try { // try from 0093972c to 00a39743 has its CatchHandler @ 00939c68 */
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x680))(plVar2,uVar4);
                    /* try { // try from 00939750 to 00a3976b has its CatchHandler @ 00939c64 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012ccac5,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Skin:setBone",iVar1 + -1,1);
  }
  return 0;
}

