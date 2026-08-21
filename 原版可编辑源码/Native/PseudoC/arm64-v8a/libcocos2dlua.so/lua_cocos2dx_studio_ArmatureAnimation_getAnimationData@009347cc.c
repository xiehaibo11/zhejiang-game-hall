
/* lua_cocos2dx_studio_ArmatureAnimation_getAnimationData(lua_State*) */

undefined8 lua_cocos2dx_studio_ArmatureAnimation_getAnimationData(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
                    /* try { // try from 00934824 to 00a34863 has its CatchHandler @ 00934824
                       catch() { ... } // from try @ 00934824 with catch @ 00934824
                       catch() { ... } // from try @ 00934910 with catch @ 00934824
                       catch() { ... } // from try @ 00934994 with catch @ 00934824 */
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x110))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccs.AnimationData");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureAnimation:getAnimationData",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 00934864 to 00a348cf has its CatchHandler @ 009349ac */
  return uVar3;
}

