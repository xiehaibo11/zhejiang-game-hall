
/* lua_cocos2dx_studio_Bone_getDisplayRenderNode(lua_State*) */

undefined8 lua_cocos2dx_studio_Bone_getDisplayRenderNode(lua_State *param_1)

{
  int iVar1;
  Bone *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::Bone::getDisplayRenderNode(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Node")
      ;
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:getDisplayRenderNode",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

