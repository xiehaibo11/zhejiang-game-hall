
/* lua_cocos2dx_studio_Armature_getBlendFunc(lua_State*) */

bool lua_cocos2dx_studio_Armature_getBlendFunc(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  BlendFunc *pBVar3;
  
                    /* catch() { ... } // from try @ 009384ac with catch @ 0093854c */
                    /* catch() { ... } // from try @ 00938488 with catch @ 00938550
                       catch() { ... } // from try @ 009384d4 with catch @ 00938550 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pBVar3 = (BlendFunc *)(**(code **)(*plVar2 + 0x568))(plVar2);
    blendfunc_to_luaval(param_1,pBVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:getBlendFunc",iVar1,0);
  }
  return iVar1 == 0;
}

