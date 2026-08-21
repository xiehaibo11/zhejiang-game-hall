
/* lua_cocos2dx_Scene_setPhysics3DDebugCamera(lua_State*) */

undefined8 lua_cocos2dx_Scene_setPhysics3DDebugCamera(lua_State *param_1)

{
  int iVar1;
  Scene *this;
  Camera *pCVar2;
  
  this = (Scene *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    pCVar2 = (Camera *)tolua_tousertype(param_1,2,0);
    cocos2d::Scene::setPhysics3DDebugCamera(this,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Scene:setPhysics3DDebugCamera",iVar1 + -1,0);
  }
  return 0;
}

