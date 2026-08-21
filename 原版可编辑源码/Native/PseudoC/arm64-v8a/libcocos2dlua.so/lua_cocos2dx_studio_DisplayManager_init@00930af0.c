
/* lua_cocos2dx_studio_DisplayManager_init(lua_State*) */

undefined8 lua_cocos2dx_studio_DisplayManager_init(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  DisplayManager *this;
  ulong uVar3;
  Bone *pBVar4;
  
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar3 & 1) != 0)) {
      pBVar4 = (Bone *)tolua_tousertype(param_1,2,0);
      uVar2 = cocostudio::DisplayManager::init(this,pBVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_DisplayManager_init\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:init",iVar1 + -1,1);
  }
  return 0;
}

