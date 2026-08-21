
/* lua_cocos2dx_studio_ActionTimeline_getDuration(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_getDuration(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0094862c with catch @ 00948710
                       catch() { ... } // from try @ 009486f4 with catch @ 00948710 */
                    /* catch() { ... } // from try @ 009485b4 with catch @ 00948714
                       catch() { ... } // from try @ 009486e8 with catch @ 00948714 */
                    /* catch() { ... } // from try @ 00948598 with catch @ 00948718
                       catch() { ... } // from try @ 00948680 with catch @ 00948718 */
                    /* catch() { ... } // from try @ 009485ec with catch @ 0094871c
                       catch() { ... } // from try @ 00948698 with catch @ 0094871c */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*plVar3 + 0xb8))(plVar3);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:getDuration",iVar1,0);
  }
  return iVar1 == 0;
}

