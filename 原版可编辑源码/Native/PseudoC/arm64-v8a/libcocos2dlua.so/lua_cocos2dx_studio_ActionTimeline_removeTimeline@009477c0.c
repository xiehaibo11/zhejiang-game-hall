
/* lua_cocos2dx_studio_ActionTimeline_removeTimeline(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionTimeline_removeTimeline(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 009477a0 with catch @ 009477d8 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009477ec to 00a4791b has its CatchHandler @ 009477ec
                       catch() { ... } // from try @ 009477ec with catch @ 009477ec
                       catch() { ... } // from try @ 0094799c with catch @ 009477ec */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.Timeline",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0xe8))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012cfb64,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cfb42,
               iVar1 + -1,1);
  }
  return 0;
}

