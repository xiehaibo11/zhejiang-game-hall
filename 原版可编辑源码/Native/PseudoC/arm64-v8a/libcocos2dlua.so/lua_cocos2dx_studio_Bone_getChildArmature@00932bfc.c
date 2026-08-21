
/* lua_cocos2dx_studio_Bone_getChildArmature(lua_State*) */

undefined8 lua_cocos2dx_studio_Bone_getChildArmature(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x580))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccs.Armature");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 00932c44 to 00a32c8f has its CatchHandler @ 00932c44
                       catch() { ... } // from try @ 00932c44 with catch @ 00932c44
                       catch() { ... } // from try @ 00932cb8 with catch @ 00932c44 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:getChildArmature",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 00932c90 to 00a32c93 has its CatchHandler @ 00932d14 */
  return uVar3;
}

