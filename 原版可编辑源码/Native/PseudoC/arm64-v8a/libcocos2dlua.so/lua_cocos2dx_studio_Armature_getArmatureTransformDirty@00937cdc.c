
/* lua_cocos2dx_studio_Armature_getArmatureTransformDirty(lua_State*) */

bool lua_cocos2dx_studio_Armature_getArmatureTransformDirty(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00937c50 with catch @ 00937ce8 */
                    /* catch() { ... } // from try @ 00937c68 with catch @ 00937cec */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*plVar3 + 0x590))(plVar3);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* catch() { ... } // from try @ 00937c1c with catch @ 00937d1c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:getArmatureTransformDirty",iVar1,0);
  }
  return iVar1 == 0;
}

